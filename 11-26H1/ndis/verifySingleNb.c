/*
 * XREFs of verifySingleNb @ 0x1400A505C
 * Callers:
 *     verifySingleRxNbl @ 0x1400A524C (verifySingleRxNbl.c)
 *     verifySingleTxNbl @ 0x1400A5280 (verifySingleTxNbl.c)
 * Callees:
 *     datapathVerifierReportProblem @ 0x1400A4E14 (datapathVerifierReportProblem.c)
 *     validateMemoryPages @ 0x1400A4F4C (validateMemoryPages.c)
 *     verifySingleMdl @ 0x1400A4FFC (verifySingleMdl.c)
 */

void __fastcall verifySingleNb(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rdi
  char v5; // bp
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  unsigned int v8; // r8d
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // edx

  if ( *(_WORD *)(a1 + 50) )
    datapathVerifierReportProblem(0x41u, a2, a1);
  if ( !*(_QWORD *)(a1 + 32) )
    datapathVerifierReportProblem(0x50u, a2, a1);
  v4 = *(_QWORD *)(a1 + 32);
  v5 = 0;
  v6 = 0;
  while ( v4 )
  {
    verifySingleMdl(v4, a2);
    v7 = *(_DWORD *)(v4 + 40);
    if ( v4 == *(_QWORD *)(a1 + 8) )
    {
      v5 = 1;
      if ( *(_DWORD *)(a1 + 16) > v7 )
        datapathVerifierReportProblem(0x52u, a2, a1);
      if ( v6 + *(_DWORD *)(a1 + 16) != *(_DWORD *)(a1 + 40) )
        datapathVerifierReportProblem(0x53u, a2, a1);
    }
    v8 = *(_DWORD *)(a1 + 24);
    v9 = *(_DWORD *)(a1 + 40);
    if ( (*(_BYTE *)(v4 + 10) & 5) != 0 )
    {
      if ( v6 > v9 )
      {
        if ( v6 - v9 >= v8 )
          goto LABEL_18;
        v8 -= v6 - v9;
        v11 = 0;
      }
      else
      {
        v10 = v9 - v6;
        if ( v10 >= *(_DWORD *)(v4 + 40) )
          goto LABEL_18;
        v11 = v10;
      }
      validateMemoryPages(v4, v11, v8);
    }
LABEL_18:
    v4 = *(_QWORD *)v4;
    v6 += v7;
  }
  if ( *(_DWORD *)(a1 + 40) + *(_DWORD *)(a1 + 24) > v6 )
    datapathVerifierReportProblem(0x40u, a2, a1);
  if ( !v5 )
    datapathVerifierReportProblem(0x51u, a2, a1);
}
