/*
 * XREFs of VfRemLockReportBadReleaseAndWaitTag @ 0x140C30D1C
 * Callers:
 *     IoReleaseRemoveLockAndWaitEx @ 0x1404E7BC0 (IoReleaseRemoveLockAndWaitEx.c)
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140C2BF1C (CarReportRuleViolationFromNt.c)
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
