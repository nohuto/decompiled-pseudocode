/*
 * XREFs of PsTerminateMinimalProcess @ 0x1407FFFD8
 * Callers:
 *     SmTerminateStoreProcess @ 0x1406423FC (SmTerminateStoreProcess.c)
 *     PsCreateMinimalProcess @ 0x140801BC8 (PsCreateMinimalProcess.c)
 *     PspTeardownPartition @ 0x140803A80 (PspTeardownPartition.c)
 *     VmTerminateMemoryProcess @ 0x140822350 (VmTerminateMemoryProcess.c)
 *     NtTerminateProcess @ 0x140B812E0 (NtTerminateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     PspLockProcessExclusive @ 0x140481AF8 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x1404898F4 (PspUnlockProcessExclusive.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PspExitLastThread @ 0x1409FD314 (PspExitLastThread.c)
 *     PspRundownSingleProcess @ 0x1409FEA50 (PspRundownSingleProcess.c)
 */

$241382875694CED3D471BC5892DE3337 *__fastcall PsTerminateMinimalProcess(
        PRKPROCESS PROCESS,
        int a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  unsigned int v6; // edi
  struct _KTHREAD *CurrentThread; // rsi
  signed __int32 v8; // r14d
  char v9; // bp
  $241382875694CED3D471BC5892DE3337 *result; // rax
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
  result = ($241382875694CED3D471BC5892DE3337 *)PspUnlockProcessExclusive((__int64)PROCESS, (__int64)CurrentThread);
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
      return ($241382875694CED3D471BC5892DE3337 *)PspRundownSingleProcess(PROCESS);
    }
  }
  return result;
}
