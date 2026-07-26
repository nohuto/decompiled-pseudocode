/*
 * XREFs of verifySingleMdl @ 0x1400A4FFC
 * Callers:
 *     verifySingleNb @ 0x1400A505C (verifySingleNb.c)
 * Callees:
 *     datapathVerifierReportProblem @ 0x1400A4E14 (datapathVerifierReportProblem.c)
 */

void __fastcall verifySingleMdl(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( *(_WORD *)(a1 + 8) < 0x30u )
    datapathVerifierReportProblem(0x60u, a2, a1);
  if ( (*(_BYTE *)(a1 + 10) & 5) != 0 && !(unsigned __int8)MmIsKernelAddress(*(_QWORD *)(a1 + 24)) )
    datapathVerifierReportProblem(0x71u, a2, a1);
}
