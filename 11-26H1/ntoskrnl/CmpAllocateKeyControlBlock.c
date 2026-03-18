/*
 * XREFs of CmpAllocateKeyControlBlock @ 0x140A67590
 * Callers:
 *     CmpCloneToUnbackedKcb @ 0x140859194 (CmpCloneToUnbackedKcb.c)
 * Callees:
 *     ExAllocateFromLookasideListEx @ 0x1403E1EE0 (ExAllocateFromLookasideListEx.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

PVOID CmpAllocateKeyControlBlock()
{
  PVOID result; // rax
  PVOID v1; // rbx

  _InterlockedIncrement64((volatile signed __int64 *)&KiSystemServiceTraceCallbackLock.KernelShadowStackInitial);
  result = ExAllocateFromLookasideListEx(&CmpKcbLookaside);
  v1 = result;
  if ( result )
  {
    _InterlockedIncrement64((volatile signed __int64 *)&KiSystemServiceTraceCallbackLock.WpsFeedback);
    memset_0(result, 0, 0x138uLL);
    return v1;
  }
  return result;
}
