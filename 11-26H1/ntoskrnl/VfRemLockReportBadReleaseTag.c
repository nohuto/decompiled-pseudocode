/*
 * XREFs of VfRemLockReportBadReleaseTag @ 0x140C36D68
 * Callers:
 *     IoReleaseRemoveLockEx @ 0x1402C1010 (IoReleaseRemoveLockEx.c)
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 */

__int64 __fastcall VfRemLockReportBadReleaseTag(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, __int64 a3)
{
  CarReportRuleViolationFromNt(196, 213LL, BugCheckParameter2, BugCheckParameter3, 0LL, 0xBu, a3);
  return 1LL;
}
