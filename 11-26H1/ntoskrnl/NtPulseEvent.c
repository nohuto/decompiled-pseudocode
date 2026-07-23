/*
 * XREFs of NtPulseEvent @ 0x140A95880
 * Callers:
 *     DifNtPulseEventWrapper @ 0x140684B10 (DifNtPulseEventWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KePulseEvent @ 0x1404C0CC0 (KePulseEvent.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ExpPulseCrossVmEvent @ 0x14084C774 (ExpPulseCrossVmEvent.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtPulseEvent(HANDLE EventHandle, PLONG PreviousState)
{
  KPROCESSOR_MODE PreviousMode; // r15
  NTSTATUS v5; // eax
  NTSTATUS v6; // edi
  struct _KEVENT *v7; // rsi
  int ULongFromUser; // eax
  LONG v10; // [rsp+80h] [rbp+18h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v10 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousState && PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser((unsigned int *)PreviousState);
    RtlWriteULongToUser(PreviousState, ULongFromUser);
  }
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(EventHandle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
  v6 = v5;
  v7 = (struct _KEVENT *)Object;
  LODWORD(Object) = v5;
  if ( v5 < 0 )
  {
    if ( v5 == -1073741788 )
    {
      if ( WheapConfigTableLock.WaitBlock[1].WaitListEntry.Blink )
      {
        Object = 0LL;
        v6 = ObReferenceObjectByHandle(
               EventHandle,
               2u,
               (POBJECT_TYPE)WheapConfigTableLock.WaitBlock[1].WaitListEntry.Blink,
               PreviousMode,
               &Object,
               0LL);
        v7 = (struct _KEVENT *)Object;
        LODWORD(Object) = v6;
        if ( v6 >= 0 )
        {
          v6 = ExpPulseCrossVmEvent((__int64)v7, (__int64)&v10);
          LODWORD(Object) = v6;
        }
      }
    }
  }
  else
  {
    v10 = KePulseEvent(v7, 1, 0);
  }
  if ( v6 >= 0 && PreviousState )
  {
    if ( PreviousMode )
      RtlWriteULongToUser(PreviousState, v10);
    else
      *PreviousState = v10;
  }
  if ( v7 )
    ObfDereferenceObject(v7);
  return v6;
}
