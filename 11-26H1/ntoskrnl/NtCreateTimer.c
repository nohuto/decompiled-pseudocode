/*
 * XREFs of NtCreateTimer @ 0x140B5A440
 * Callers:
 *     DifNtCreateTimerWrapper @ 0x140677F80 (DifNtCreateTimerWrapper.c)
 * Callees:
 *     KeInitializeDpc @ 0x14047B3C0 (KeInitializeDpc.c)
 *     KeInitializeTimerEx @ 0x14049F620 (KeInitializeTimerEx.c)
 *     PsInsertVirtualizedTimer @ 0x1404B24F4 (PsInsertVirtualizedTimer.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 */

NTSTATUS __cdecl NtCreateTimer(
        PHANDLE TimerHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        TIMER_TYPE TimerType)
{
  char PreviousMode; // di
  __int64 ULong64FromUser; // rax
  NTSTATUS inserted; // ebx
  PVOID v12; // rbx
  _KPROCESS *Process; // rcx
  __int64 v14; // [rsp+20h] [rbp-68h]
  PVOID DeferredContext; // [rsp+58h] [rbp-30h] BYREF
  void *v16; // [rsp+60h] [rbp-28h] BYREF

  DeferredContext = 0LL;
  v16 = 0LL;
  if ( (unsigned int)TimerType > SynchronizationTimer )
    return -1073741582;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(TimerHandle);
    RtlWriteULong64ToUser(TimerHandle, ULong64FromUser);
  }
  inserted = ObCreateObjectEx(
               PreviousMode,
               (_DWORD *)ExTimerObjectType,
               (__int64)ObjectAttributes,
               PreviousMode,
               v14,
               336,
               0,
               0,
               &DeferredContext,
               0LL);
  if ( inserted >= 0 )
  {
    v12 = DeferredContext;
    KeInitializeDpc((PRKDPC)((char *)DeferredContext + 160), (PKDEFERRED_ROUTINE)ExpTimerDpcRoutine, DeferredContext);
    KeInitializeTimerEx((PKTIMER)v12, TimerType);
    *((_QWORD *)v12 + 8) = 0LL;
    *((_BYTE *)v12 + 304) = 0;
    *((_QWORD *)v12 + 32) = 0LL;
    *((_QWORD *)v12 + 33) = 0LL;
    *((_QWORD *)v12 + 35) = 0LL;
    if ( PreviousMode )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( (*(_DWORD *)&Process->0 & 0x10) != 0 )
        PsInsertVirtualizedTimer(
          (KSPIN_LOCK *)Process,
          (_QWORD *)v12 + 36,
          (KSPIN_LOCK *)v12 + 8,
          (KSPIN_LOCK **)v12 + 35);
    }
    inserted = ObInsertObjectEx((char *)v12, 0LL, DesiredAccess, 0, 0, 0LL, &v16);
    LODWORD(DeferredContext) = inserted;
    if ( inserted >= 0 )
    {
      if ( PreviousMode )
        RtlWriteULong64ToUser(TimerHandle, (__int64)v16);
      else
        *TimerHandle = v16;
    }
  }
  return inserted;
}
