/*
 * XREFs of VfErrorReleaseTriageInformation @ 0x140C3195C
 * Callers:
 *     VfReportIssueWithOptions @ 0x140645558 (VfReportIssueWithOptions.c)
 * Callees:
 *     <none>
 */

__int64 VfErrorReleaseTriageInformation()
{
  return (unsigned int)_InterlockedExchange(&VfErrorBugcheckDataReady, 0);
}
