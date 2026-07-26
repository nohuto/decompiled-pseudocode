/*
 * XREFs of verifySingleTxNbl @ 0x1400A5280
 * Callers:
 *     ?ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x140026740 (-ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1400784C0 (-ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 * Callees:
 *     datapathVerifierReportProblem @ 0x1400A4E14 (datapathVerifierReportProblem.c)
 *     verifySingleNb @ 0x1400A505C (verifySingleNb.c)
 *     verifySingleNbl @ 0x1400A51A0 (verifySingleNbl.c)
 */

void __fastcall verifySingleTxNbl(unsigned __int64 a1, unsigned __int64 a2)
{
  _QWORD *i; // rbx

  if ( !*(_QWORD *)(a1 + 8) )
    datapathVerifierReportProblem(0x30u, a2, a1);
  verifySingleNbl(a1, a2);
  for ( i = *(_QWORD **)(a1 + 8); i; i = (_QWORD *)*i )
    verifySingleNb((unsigned __int64)i, a2);
}
