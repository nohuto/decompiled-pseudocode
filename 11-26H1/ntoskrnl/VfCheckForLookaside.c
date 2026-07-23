/*
 * XREFs of VfCheckForLookaside @ 0x140C4C350
 * Callers:
 *     ExpCheckForLookaside @ 0x140346FF8 (ExpCheckForLookaside.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403C1D8C (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403C23FC (VfAvlCleanupLockContext.c)
 *     VfPoolIsInternalFree @ 0x1404C9664 (VfPoolIsInternalFree.c)
 *     VfAvlInitializeLockContext @ 0x1404D6220 (VfAvlInitializeLockContext.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 */

__int64 __fastcall VfCheckForLookaside(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  __int64 result; // rax
  ULONG_PTR *v5; // rax
  __int128 v6; // [rsp+40h] [rbp-28h] BYREF
  __int64 v7; // [rsp+50h] [rbp-18h]

  result = 0LL;
  v7 = 0LL;
  v6 = 0LL;
  if ( ViLookasideInitialized )
  {
    if ( !(unsigned int)VfPoolIsInternalFree() )
    {
      VfAvlInitializeLockContext((__int64)&v6, 1);
      v5 = (ULONG_PTR *)VfAvlLookupTreeNode((__int64 *)&ViLookasideAvl, (__int64)&v6, BugCheckParameter3, a2);
      if ( v5 )
      {
        if ( (MmVerifierData & 0x800) != 0 )
          CarReportRuleViolationFromNt(196, 204LL, *v5, BugCheckParameter3, a2, 0xBu, *v5);
      }
      VfAvlCleanupLockContext((__int64)&v6);
    }
    return 1LL;
  }
  return result;
}
