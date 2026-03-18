/*
 * XREFs of NtSetTimerResolution @ 0x140A667F0
 * Callers:
 *     DifNtSetTimerResolutionWrapper @ 0x14068E3A0 (DifNtSetTimerResolutionWrapper.c)
 * Callees:
 *     ExpInsertTimerResolutionEntry @ 0x1404E6A94 (ExpInsertTimerResolutionEntry.c)
 *     ExpUpdateTimerResolution @ 0x14052E534 (ExpUpdateTimerResolution.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x140A66A6C (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x140A66AE4 (ExReleaseTimeRefreshLockExclusive.c)
 *     PoTraceSystemTimerResolution @ 0x140A66B30 (PoTraceSystemTimerResolution.c)
 *     PoDiagCaptureUsermodeStack @ 0x140A66E44 (PoDiagCaptureUsermodeStack.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtSetTimerResolution(__int64 a1, char a2, unsigned int *a3)
{
  unsigned int v5; // esi
  _KPROCESS *Process; // rbx
  unsigned int v7; // r13d
  signed __int32 DirectoryTableBase_high; // eax
  signed __int32 v9; // ett
  unsigned int v10; // edx
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
  unsigned int v24; // [rsp+70h] [rbp+8h]
  char v26; // [rsp+88h] [rbp+20h]

  v24 = a1;
  v5 = a1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser(a3);
    RtlWriteULongToUser(a3, ULongFromUser);
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v26 = 0;
  v7 = 0;
  ExAcquireTimeRefreshLockExclusive(a1);
  _m_prefetchw((char *)&Process[1].DirectoryTableBase + 4);
  DirectoryTableBase_high = HIDWORD(Process[1].DirectoryTableBase);
  if ( a2 )
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
      ExpInsertTimerResolutionEntry((__int64)Process);
    if ( (v19 & 0x1000) != 0 )
    {
      if ( v5 > Process[3].Spare5 )
        v17 = 0;
    }
    else
    {
      ++*(_DWORD *)&PspSiloMonitorLock.SchedulerApcFill5[36];
    }
    if ( !Process[3].AutoBoostState2 || v5 < *(&Process[3].AutoBoostState.TreeCount + 1) )
      v26 = 1;
    Process[3].Spare5 = v5;
    PoTraceSystemTimerResolution(0LL, Process);
    if ( (Process[3].ActiveGroupsMask.Masks[1] & 0x400000000000000LL) == 0 )
    {
      v10 = v5;
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
        if ( v24 >= *(&Process[3].AutoBoostState.TreeCount + 1) )
        {
LABEL_32:
          ExReleaseTimeRefreshLockExclusive();
          goto LABEL_9;
        }
        v22 = AutoBoostState2 == 0LL;
      }
      if ( !v22 )
        v13 = Process[3].AutoBoostState2;
      *(&Process[3].AutoBoostState.TreeCount + 1) = v24;
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
    RtlWriteULongToUser(a3, updated);
  else
    *a3 = updated;
  return v7;
}
