/*
 * XREFs of VfErrorReleaseTriageInformation @ 0x140B834D0
 * Callers:
 *     VfReportIssueWithOptions @ 0x140606474 (VfReportIssueWithOptions.c)
 * Callees:
 *     <none>
 */

__int64 VfErrorReleaseTriageInformation()
{
  return (unsigned int)_InterlockedExchange(&VfErrorBugcheckDataReady, 0);
}
