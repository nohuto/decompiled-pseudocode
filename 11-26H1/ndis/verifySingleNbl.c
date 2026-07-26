/*
 * XREFs of verifySingleNbl @ 0x1400A51A0
 * Callers:
 *     verifySingleRxNbl @ 0x1400A524C (verifySingleRxNbl.c)
 *     verifySingleTxNbl @ 0x1400A5280 (verifySingleTxNbl.c)
 * Callees:
 *     datapathVerifierReportProblem @ 0x1400A4E14 (datapathVerifierReportProblem.c)
 */

void __fastcall verifySingleNbl(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 *i; // rbx

  if ( (*(_DWORD *)(a1 + 128) & 0x600) == 0x600 )
    datapathVerifierReportProblem(0x33u, a2, a1);
  if ( (*(_DWORD *)(a1 + 128) & 0x1800) == 0x1800 )
    datapathVerifierReportProblem(0x33u, a2, a1);
  if ( (*(_DWORD *)(a1 + 128) & 0xFFFC00FC) != 0 )
    datapathVerifierReportProblem(0x33u, a2, a1);
  for ( i = *(__int64 **)(a1 + 16); i; i = (__int64 *)*i )
  {
    if ( *((_WORD *)i + 5) > *((_WORD *)i + 4) )
      datapathVerifierReportProblem(0x80u, a2, a1);
  }
}
