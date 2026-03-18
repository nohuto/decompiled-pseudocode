/*
 * XREFs of VfRemLockReportBadReleaseAndWaitTag @ 0x140B828AC
 * Callers:
 *     IoReleaseRemoveLockAndWaitEx @ 0x1404A6E60 (IoReleaseRemoveLockAndWaitEx.c)
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140B7D934 (CarReportRuleViolationFromNt.c)
 */

__int64 __fastcall VfRemLockReportBadReleaseAndWaitTag(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3,
        __int64 a4)
{
  CarReportRuleViolationFromNt(196, 214LL, BugCheckParameter2, BugCheckParameter3, a3, 0xBu, a4);
  return 1LL;
}
