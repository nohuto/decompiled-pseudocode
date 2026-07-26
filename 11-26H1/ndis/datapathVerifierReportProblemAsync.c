/*
 * XREFs of datapathVerifierReportProblemAsync @ 0x1400A4F10
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisLiveBugCheck@@YAX_K000@Z @ 0x140092320 (-ndisLiveBugCheck@@YAX_K000@Z.c)
 */

__int64 datapathVerifierReportProblemAsync()
{
  ndisLiveBugCheck(qword_14011EE40, qword_14011EE48, qword_14011EE50, qword_14011EE58);
  return (unsigned int)_InterlockedExchange(&dword_14011EDF4, 0);
}
