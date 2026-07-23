/*
 * XREFs of VfErrorStoreTriageInformation @ 0x140C37A9C
 * Callers:
 *     VfReportIssueWithOptions @ 0x140649138 (VfReportIssueWithOptions.c)
 *     ViErrorFinishReport @ 0x140C37B38 (ViErrorFinishReport.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140C46D90 (ViCtxCheckAndReleaseIsrState.c)
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
    qword_140FF2970 = a2;
    qword_140FF2978 = a3;
    qword_140FF2980 = a4;
    qword_140FF2988 = a5;
  }
  return v5;
}
