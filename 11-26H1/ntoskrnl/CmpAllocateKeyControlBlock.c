/*
 * XREFs of CmpAllocateKeyControlBlock @ 0x140A74560
 * Callers:
 *     CmpCloneToUnbackedKcb @ 0x14085F524 (CmpCloneToUnbackedKcb.c)
 * Callees:
 *     ExAllocateFromLookasideListEx @ 0x1403E50D0 (ExAllocateFromLookasideListEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

PVOID CmpAllocateKeyControlBlock()
{
  PVOID result; // rax
  PVOID v1; // rbx

  _InterlockedIncrement64((volatile signed __int64 *)&KiSystemServiceTraceCallbackLock.KernelShadowStackInitial);
  result = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)&CmpKcbLookaside);
  v1 = result;
  if ( result )
  {
    _InterlockedIncrement64((volatile signed __int64 *)&KiSystemServiceTraceCallbackLock.WpsFeedback);
    memset_0(result, 0, 0x138uLL);
    return v1;
  }
  return result;
}
