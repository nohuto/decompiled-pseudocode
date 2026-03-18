/*
 * XREFs of NtDCompositionSyncWait @ 0x1400B1B60
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1400A9050 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1400A96C0 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z @ 0x1400B1A60 (-Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     OpenDwmHandle @ 0x1400B2D14 (OpenDwmHandle.c)
 */

__int64 __fastcall NtDCompositionSyncWait(int a1)
{
  NTSTATUS v2; // ebx
  NTSTATUS v3; // eax
  PVOID v4; // rdi
  __int64 v5; // rcx
  DirectComposition::CConnection *DefaultConnection; // rsi
  int InitialState; // [rsp+20h] [rbp-40h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *EventHandle; // [rsp+98h] [rbp+38h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+40h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+A8h] [rbp+48h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  EventHandle = (void *)-1LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( v2 >= 0 )
  {
    Object = 0LL;
    v3 = ObReferenceObjectByHandle(EventHandle, 0x100002u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    v4 = Object;
    v2 = v3;
    if ( v3 >= 0 )
    {
      KeEnterCriticalRegion();
      DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v5);
      if ( DefaultConnection )
      {
        Timeout.QuadPart = 0LL;
        v2 = OpenDwmHandle(v4, (POBJECT_TYPE)ExEventObjectType, 2u, InitialState, (PHANDLE)&Timeout);
        if ( v2 >= 0 )
          v2 = DirectComposition::CConnection::Synchronize(DefaultConnection, (void *)Timeout.QuadPart, a1 != 0);
        DirectComposition::CConnection::Release(DefaultConnection);
        KeLeaveCriticalRegion();
        if ( v2 >= 0 )
        {
          Timeout.QuadPart = -20000000LL;
          v2 = KeWaitForSingleObject(v4, Executive, 0, 0, &Timeout);
        }
      }
      else
      {
        v2 = -1073741790;
        KeLeaveCriticalRegion();
      }
    }
    if ( v4 )
      ObfDereferenceObject(v4);
  }
  if ( EventHandle != (void *)-1LL )
    ObCloseHandle(EventHandle, 0);
  return (unsigned int)v2;
}
