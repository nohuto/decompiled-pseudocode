/*
 * XREFs of NtSetEventEx @ 0x140A5BF10
 * Callers:
 *     DifNtSetEventExWrapper @ 0x14068ED40 (DifNtSetEventExWrapper.c)
 *     NtSetEvent @ 0x140A5BEF0 (NtSetEvent.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeSetEventBoostPriorityEx @ 0x140419658 (KeSetEventBoostPriorityEx.c)
 *     KeAbIsValidUserModeLockAddress @ 0x14044F7A0 (KeAbIsValidUserModeLockAddress.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ExpSetCrossVmEvent @ 0x140B640BC (ExpSetCrossVmEvent.c)
 */

__int64 __fastcall NtSetEventEx(HANDLE Handle, unsigned int *a2, struct _KTHREAD *a3)
{
  KPROCESSOR_MODE PreviousMode; // r14
  int ULongFromUser; // eax
  NTSTATUS v8; // eax
  NTSTATUS v9; // edi
  struct _KEVENT *v10; // rbx
  int v11; // eax
  int v13; // [rsp+30h] [rbp-58h] BYREF
  NTSTATUS v14; // [rsp+34h] [rbp-54h]
  PVOID Object[2]; // [rsp+38h] [rbp-50h] BYREF
  PVOID v16; // [rsp+48h] [rbp-40h]
  _BYTE v17[16]; // [rsp+50h] [rbp-38h] BYREF

  v13 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a2 && PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser(a2);
    RtlWriteULongToUser(a2, ULongFromUser);
  }
  Object[0] = 0LL;
  v8 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, Object, 0LL);
  v9 = v8;
  v10 = (struct _KEVENT *)Object[0];
  v16 = Object[0];
  v14 = v8;
  if ( v8 < 0 )
  {
    if ( v8 == -1073741788 )
    {
      if ( WheapConfigTableLock.WaitBlock[1].WaitListEntry.Blink )
      {
        Object[0] = 0LL;
        v9 = ObReferenceObjectByHandle(
               Handle,
               2u,
               (POBJECT_TYPE)WheapConfigTableLock.WaitBlock[1].WaitListEntry.Blink,
               PreviousMode,
               Object,
               0LL);
        v10 = (struct _KEVENT *)Object[0];
        v16 = Object[0];
        v14 = v9;
        if ( v9 >= 0 )
        {
          v9 = ExpSetCrossVmEvent(Object[0], &v13);
          v14 = v9;
        }
      }
    }
    v11 = v13;
  }
  else
  {
    if ( KeAbIsValidUserModeLockAddress((__int64)a3) )
    {
      LODWORD(Object[0]) = KeGetCurrentThread()->Priority;
      v11 = KeSetEventBoostPriorityEx((__int64)v10, (__int64)v17, (signed int *)Object, a3, 0, 1);
    }
    else
    {
      v11 = KeSetEvent(v10, 1, 0);
    }
    v13 = v11;
  }
  if ( v9 >= 0 && a2 )
  {
    if ( PreviousMode )
      RtlWriteULongToUser(a2, v11);
    else
      *a2 = v11;
  }
  if ( v10 )
    ObfDereferenceObject(v10);
  return (unsigned int)v9;
}
