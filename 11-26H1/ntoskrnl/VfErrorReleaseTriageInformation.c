/*
 * XREFs of VfErrorReleaseTriageInformation @ 0x140C3796C
 * Callers:
 *     VfReportIssueWithOptions @ 0x140649138 (VfReportIssueWithOptions.c)
 * Callees:
 *     <none>
 */

__int64 VfErrorReleaseTriageInformation()
{
  return (unsigned int)_InterlockedExchange(&VfErrorBugcheckDataReady, 0);
}
