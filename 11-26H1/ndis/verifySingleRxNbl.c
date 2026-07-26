/*
 * XREFs of verifySingleRxNbl @ 0x1400A524C
 * Callers:
 *     ?ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@@@Z @ 0x140075B60 (-ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@.c)
 *     ?ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x140076C50 (-ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 * Callees:
 *     verifySingleNb @ 0x1400A505C (verifySingleNb.c)
 *     verifySingleNbl @ 0x1400A51A0 (verifySingleNbl.c)
 */

void __fastcall verifySingleRxNbl(unsigned __int64 a1, unsigned __int64 a2)
{
  verifySingleNbl(a1, a2);
  verifySingleNb(*(_QWORD *)(a1 + 8), a2);
}
