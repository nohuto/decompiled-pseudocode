/*
 * XREFs of PsTerminateMinimalProcess @ 0x1407FA5A8
 * Callers:
 *     SmTerminateStoreProcess @ 0x14063E81C (SmTerminateStoreProcess.c)
 *     PsCreateMinimalProcess @ 0x1407FC198 (PsCreateMinimalProcess.c)
 *     PspTeardownPartition @ 0x1407FE050 (PspTeardownPartition.c)
 *     VmTerminateMemoryProcess @ 0x14081C140 (VmTerminateMemoryProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1402C5270 (KeStackAttachProcess.c)
 *     PspLockProcessExclusive @ 0x140487FB8 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x14048FE44 (PspUnlockProcessExclusive.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PspRundownSingleProcess @ 0x14095918C (PspRundownSingleProcess.c)
 *     PspExitLastThread @ 0x140A41964 (PspExitLastThread.c)
 */

$7A85BAF4F1FA08634C1C4A3E45B775B3 *__fastcall PsTerminateMinimalProcess(
        PRKPROCESS PROCESS,
        int a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  unsigned int v6; // edi
  struct _KTHREAD *CurrentThread; // rsi
  signed __int32 v8; // r14d
  char v9; // bp
  $7A85BAF4F1FA08634C1C4A3E45B775B3 *result; // rax
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-58h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v6 = 8;
  CurrentThread = KeGetCurrentThread();
  PspLockProcessExclusive((__int64)PROCESS, (__int64)CurrentThread, a3, a4);
  if ( !LODWORD(PROCESS[1].CpuPartitionList.Blink) )
  {
    v6 = 33554440;
    if ( HIDWORD(PROCESS[2].AvailableCpuState) == 259 )
      HIDWORD(PROCESS[2].AvailableCpuState) = a2;
  }
  _m_prefetchw((char *)&PROCESS[1].DirectoryTableBase + 4);
  v8 = _InterlockedOr((volatile signed __int32 *)&PROCESS[1].DirectoryTableBase + 1, v6);
  _m_prefetchw((char *)&PROCESS[4].IdealProcessorAssignmentBlock + 4);
  v9 = _InterlockedOr((volatile signed __int32 *)&PROCESS[4].IdealProcessorAssignmentBlock + 1, 2u);
  result = ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)PspUnlockProcessExclusive((__int64)PROCESS, (__int64)CurrentThread);
  if ( (v8 & 0x2000000) == 0 && (v6 & 0x2000000) != 0 )
  {
    if ( (v9 & 1) != 0 )
    {
      KeStackAttachProcess(PROCESS, &ApcState);
      PspExitLastThread(0LL, 0LL, PROCESS, 0LL, -1073741749);
      PspExitLastThread(1LL, 0LL, PROCESS, 0LL, -1073741749);
      PspExitLastThread(2LL, 0LL, PROCESS, 0LL, 0);
      PspExitLastThread(3LL, 0LL, PROCESS, 0LL, 0);
      return KiUnstackDetachProcess((__int64)&ApcState, 0);
    }
    else
    {
      return ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)PspRundownSingleProcess(PROCESS);
    }
  }
  return result;
}
