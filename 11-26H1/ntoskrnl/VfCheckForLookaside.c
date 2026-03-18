/*
 * XREFs of VfCheckForLookaside @ 0x140C46340
 * Callers:
 *     ExpCheckForLookaside @ 0x140344F78 (ExpCheckForLookaside.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403B7E8C (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403B84FC (VfAvlCleanupLockContext.c)
 *     VfPoolIsInternalFree @ 0x1404CFC34 (VfPoolIsInternalFree.c)
 *     VfAvlInitializeLockContext @ 0x1404DCB40 (VfAvlInitializeLockContext.c)
 *     CarReportRuleViolationFromNt @ 0x140C2BF1C (CarReportRuleViolationFromNt.c)
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
