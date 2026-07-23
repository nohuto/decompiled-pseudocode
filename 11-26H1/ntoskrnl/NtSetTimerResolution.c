/*
 * XREFs of NtSetTimerResolution @ 0x140A737C0
 * Callers:
 *     DifNtSetTimerResolutionWrapper @ 0x140691F80 (DifNtSetTimerResolutionWrapper.c)
 * Callees:
 *     ExpInsertTimerResolutionEntry @ 0x1404DFF34 (ExpInsertTimerResolutionEntry.c)
 *     ExpUpdateTimerResolution @ 0x140530A54 (ExpUpdateTimerResolution.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x140A73A3C (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x140A73AB4 (ExReleaseTimeRefreshLockExclusive.c)
 *     PoTraceSystemTimerResolution @ 0x140A73B00 (PoTraceSystemTimerResolution.c)
 *     PoDiagCaptureUsermodeStack @ 0x140A73E14 (PoDiagCaptureUsermodeStack.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtSetTimerResolution(ULONG DesiredTime, BOOLEAN SetResolution, PULONG ActualTime)
{
  _KPROCESS *Process; // rbx
  NTSTATUS v7; // r13d
  signed __int32 DirectoryTableBase_high; // eax
  signed __int32 v9; // ett
  ULONG v10; // edx
  char v11; // cl
  int updated; // r15d
  void *v13; // rsi
  void *v14; // rdi
  int ULongFromUser; // eax
  char v17; // r14
  signed __int32 v18; // ett
  __int16 v19; // di
  __int64 v20; // rcx
  void *AutoBoostState2; // rax
  bool v22; // zf
  char PreviousMode; // [rsp+20h] [rbp-48h]
  char v26; // [rsp+88h] [rbp+20h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser(ActualTime);
    RtlWriteULongToUser(ActualTime, ULongFromUser);
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v26 = 0;
  v7 = 0;
  ExAcquireTimeRefreshLockExclusive(*(_QWORD *)&DesiredTime);
  _m_prefetchw((char *)&Process[1].DirectoryTableBase + 4);
  DirectoryTableBase_high = HIDWORD(Process[1].DirectoryTableBase);
  if ( SetResolution )
  {
    v17 = 1;
    do
    {
      v18 = DirectoryTableBase_high;
      DirectoryTableBase_high = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&Process[1].DirectoryTableBase + 1,
                                  DirectoryTableBase_high | 0x80001000,
                                  DirectoryTableBase_high);
    }
    while ( v18 != DirectoryTableBase_high );
    v19 = DirectoryTableBase_high;
    if ( DirectoryTableBase_high >= 0 )
      ExpInsertTimerResolutionEntry((struct _LIST_ENTRY *)Process);
    if ( (v19 & 0x1000) != 0 )
    {
      if ( DesiredTime > Process[3].Spare5 )
        v17 = 0;
    }
    else
    {
      ++*(_DWORD *)&PspSiloMonitorLock.SchedulerApcFill5[36];
    }
    if ( !Process[3].AutoBoostState2 || DesiredTime < *(&Process[3].AutoBoostState.TreeCount + 1) )
      v26 = 1;
    Process[3].Spare5 = DesiredTime;
    PoTraceSystemTimerResolution(0LL, Process);
    if ( (Process[3].ActiveGroupsMask.Masks[1] & 0x400000000000000LL) == 0 )
    {
      v10 = DesiredTime;
      v11 = v17;
      goto LABEL_7;
    }
LABEL_39:
    updated = KePseudoHrTimeIncrement;
    goto LABEL_8;
  }
  do
  {
    v9 = DirectoryTableBase_high;
    DirectoryTableBase_high = _InterlockedCompareExchange(
                                (volatile signed __int32 *)&Process[1].DirectoryTableBase + 1,
                                DirectoryTableBase_high & 0xFFFFEFFF,
                                DirectoryTableBase_high);
  }
  while ( v9 != DirectoryTableBase_high );
  if ( (DirectoryTableBase_high & 0x1000) == 0 )
  {
    v7 = -1073741243;
    goto LABEL_39;
  }
  --*(_DWORD *)&PspSiloMonitorLock.SchedulerApcFill5[36];
  Process[3].Spare5 = 0;
  PoTraceSystemTimerResolution(0LL, Process);
  v10 = 0;
  v11 = 0;
LABEL_7:
  updated = ExpUpdateTimerResolution(v11, v10, 0LL);
LABEL_8:
  ExReleaseTimeRefreshLockExclusive();
  v13 = 0LL;
  v14 = 0LL;
  if ( v26 )
  {
    v14 = (void *)PoDiagCaptureUsermodeStack();
    if ( v14 )
    {
      ExAcquireTimeRefreshLockExclusive(v20);
      AutoBoostState2 = Process[3].AutoBoostState2;
      v22 = AutoBoostState2 == 0LL;
      if ( AutoBoostState2 )
      {
        if ( DesiredTime >= *(&Process[3].AutoBoostState.TreeCount + 1) )
        {
LABEL_32:
          ExReleaseTimeRefreshLockExclusive();
          goto LABEL_9;
        }
        v22 = AutoBoostState2 == 0LL;
      }
      if ( !v22 )
        v13 = Process[3].AutoBoostState2;
      *(&Process[3].AutoBoostState.TreeCount + 1) = DesiredTime;
      Process[3].AutoBoostState2 = v14;
      v14 = 0LL;
      goto LABEL_32;
    }
  }
LABEL_9:
  if ( v13 )
    ExFreePoolWithTag(v13, 0x50455654u);
  if ( v14 )
    ExFreePoolWithTag(v14, 0x50455654u);
  if ( PreviousMode )
    RtlWriteULongToUser(ActualTime, updated);
  else
    *ActualTime = updated;
  return v7;
}
