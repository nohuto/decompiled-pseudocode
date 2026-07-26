/*
 * XREFs of ?ndisIsVerifierDummyHandler@@YA_NPEAX@Z @ 0x1400A5594
 * Callers:
 *     ?ndisSetupUpwardHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140055420 (-ndisSetupUpwardHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetupDownwardHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140055840 (-ndisSetupDownwardHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsVerifierDummyHandler(void *a1)
{
  return a1 == SendNetBufferListsDummyHandler
      || a1 == SendNetBufferListsCompleteDummyHandler
      || a1 == IndicateReceiveNetBufferListsDummyHandler
      || a1 == ReturnNetBufferListsDummyHandler;
}
