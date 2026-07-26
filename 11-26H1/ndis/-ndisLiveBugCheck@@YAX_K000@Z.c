/*
 * XREFs of ?ndisLiveBugCheck@@YAX_K000@Z @ 0x140092320
 * Callers:
 *     datapathVerifierReportProblem @ 0x1400A4E14 (datapathVerifierReportProblem.c)
 *     datapathVerifierReportProblemAsync @ 0x1400A4F10 (datapathVerifierReportProblemAsync.c)
 *     ndisReportTimeoutWaitingForExternalDriver @ 0x1401452A8 (ndisReportTimeoutWaitingForExternalDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisLiveBugCheck(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  DbgkWerCaptureLiveKernelDump(L"NDIS", 350LL, a1, a2, a3, a4, 0LL, 0LL, 0);
}
