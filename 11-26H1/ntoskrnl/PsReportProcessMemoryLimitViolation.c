/*
 * XREFs of PsReportProcessMemoryLimitViolation @ 0x14077E448
 * Callers:
 *     MiChargeProcessCommitment @ 0x140457600 (MiChargeProcessCommitment.c)
 * Callees:
 *     PspSendJobNotification @ 0x1404C9CC0 (PspSendJobNotification.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x140A94B70 (PspUnlockJobMemoryLimitsShared.c)
 *     PspLockJobMemoryLimitsShared @ 0x140A94BE0 (PspLockJobMemoryLimitsShared.c)
 */

__int64 PsReportProcessMemoryLimitViolation()
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rdi
  __int64 result; // rax
  __int64 v3; // rbx

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  result = Process[1].Padding[3];
  v3 = *(_QWORD *)(result + 1024);
  if ( v3 && (*(_DWORD *)(v3 + 256) & 0x100) != 0 )
  {
    PspLockJobMemoryLimitsShared(*(_QWORD *)(result + 1024), CurrentThread);
    if ( *(_QWORD *)(v3 + 552) && (*(_DWORD *)(v3 + 1104) & 0x200) != 0 && (Process[1].DirectoryTableBase & 0x24) == 4 )
    {
      _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase, 0x20u);
      PspSendJobNotification(v3, 9LL, (int)Process[1].Header.WaitListHead.Flink, 1);
    }
    return PspUnlockJobMemoryLimitsShared(v3, CurrentThread);
  }
  return result;
}
