/*
 * XREFs of VfErrorStoreTriageInformation @ 0x140B83600
 * Callers:
 *     VfReportIssueWithOptions @ 0x140606474 (VfReportIssueWithOptions.c)
 *     ViErrorFinishReport @ 0x140B8369C (ViErrorFinishReport.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140B91F70 (ViCtxCheckAndReleaseIsrState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfErrorStoreTriageInformation(__int64 a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4, ULONG_PTR a5)
{
  unsigned int v5; // r10d

  v5 = 1;
  if ( _InterlockedExchange(&VfErrorBugcheckDataReady, 1) )
  {
    return 0;
  }
  else
  {
    VfErrorBugcheckData = a1;
    qword_140FFDFB8 = a2;
    qword_140FFDFC0 = a3;
    qword_140FFDFC8 = a4;
    qword_140FFDFD0 = a5;
  }
  return v5;
}
