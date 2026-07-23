/*
 * XREFs of KeSetExpectedConcurrencyCountProcess @ 0x140200A58
 * Callers:
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     ?KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z @ 0x140200DD0 (-KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z.c)
 *     KiReleaseProcessLockExclusive @ 0x140203410 (KiReleaseProcessLockExclusive.c)
 *     KiAcquireProcessLockExclusive @ 0x140203770 (KiAcquireProcessLockExclusive.c)
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403C6258 (MmAdjustWorkingSetSizeEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall KeSetExpectedConcurrencyCountProcess(struct _KPROCESS *BugCheckParameter1, unsigned int a2)
{
  int v3; // ebx
  _KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK *IdealProcessorAssignmentBlock; // rdi
  __int64 v5; // rdx
  __int64 result; // rax
  unsigned __int8 v7; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v8[7]; // [rsp+31h] [rbp-3Fh] BYREF
  _OWORD v9[3]; // [rsp+38h] [rbp-38h] BYREF

  v8[0] = 0;
  v7 = 0;
  if ( a2 <= KeMaximumProcessors )
    v3 = a2 << 18;
  else
    v3 = (KeMaximumProcessors << 18) - 1;
  IdealProcessorAssignmentBlock = BugCheckParameter1->IdealProcessorAssignmentBlock;
  KiAcquireProcessLockExclusive(BugCheckParameter1, v8);
  KiSetProcessConcurrencyCount(BugCheckParameter1, (union _KI_PROCESS_CONCURRENCY_COUNT)v3, &v7);
  LOBYTE(v5) = v8[0];
  IdealProcessorAssignmentBlock->AssignmentFlags.AllFlags |= 1u;
  result = KiReleaseProcessLockExclusive(BugCheckParameter1, v5);
  if ( v7 )
  {
    memset(v9, 0, sizeof(v9));
    KiStackAttachProcess((ULONG_PTR)BugCheckParameter1);
    v7 = 0;
    MmAdjustWorkingSetSizeEx(-1, -1, 0, 0, 0, (__int64)&v7);
    return KiUnstackDetachProcess(v9, 0LL);
  }
  return result;
}
