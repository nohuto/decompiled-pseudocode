/*
 * XREFs of PsFreezeProcess @ 0x14077E180
 * Callers:
 *     NtChangeProcessState @ 0x1407F71F0 (NtChangeProcessState.c)
 *     PsForceCrashForInvalidAccess @ 0x140802B70 (PsForceCrashForInvalidAccess.c)
 *     DbgkpSuspendProcess @ 0x1409CF678 (DbgkpSuspendProcess.c)
 *     PspChangeProcessExecutionState @ 0x140ADB89C (PspChangeProcessExecutionState.c)
 * Callees:
 *     KeForceResumeProcess @ 0x140203224 (KeForceResumeProcess.c)
 *     KeFreezeProcess @ 0x140208F70 (KeFreezeProcess.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14043F380 (KiQueryUnbiasedInterruptTime.c)
 *     PspLockProcessExclusive @ 0x140481AF8 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x1404898F4 (PspUnlockProcessExclusive.c)
 *     PspPauseProcessVirtualTimers @ 0x14061A038 (PspPauseProcessVirtualTimers.c)
 *     EtwTiLogSuspendResumeProcess @ 0x140AF3F18 (EtwTiLogSuspendResumeProcess.c)
 *     PspPostFreezeOperationWorkEnqueue @ 0x140B00A5C (PspPostFreezeOperationWorkEnqueue.c)
 *     EtwTraceFreezeThawProcess @ 0x140B13690 (EtwTraceFreezeThawProcess.c)
 */

char __fastcall PsFreezeProcess(__int64 a1, char a2)
{
  int v5; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  __int64 v9; // rdx

  if ( (*(_DWORD *)(a1 + 500) & 8) != 0 )
    return 0;
  v5 = KeFreezeProcess(a1, a2);
  if ( (*(_DWORD *)(a1 + 500) & 8) != 0 )
  {
    KeForceResumeProcess(a1);
    return 0;
  }
  CurrentThread = KeGetCurrentThread();
  if ( !v5 && (*(_DWORD *)(a1 + 1532) & 0x80000) != 0 )
    EtwTiLogSuspendResumeProcess(0LL, CurrentThread, a1, 2LL);
  if ( a2 )
  {
    PspPauseProcessVirtualTimers(a1);
    PspLockProcessExclusive(a1, (__int64)CurrentThread, v7, v8);
    *(_QWORD *)(a1 + 1584) = KiQueryUnbiasedInterruptTime();
    PspUnlockProcessExclusive(a1, (__int64)CurrentThread);
    if ( (unsigned __int8)Win32kAsyncProcessFreezeThawSupportIsActive() )
      PspPostFreezeOperationWorkEnqueue(a1);
    if ( (BYTE8(PerfGlobalGroupMask) & 2) != 0 )
    {
      LOBYTE(v9) = 1;
      EtwTraceFreezeThawProcess(a1, v9);
    }
  }
  return 1;
}
