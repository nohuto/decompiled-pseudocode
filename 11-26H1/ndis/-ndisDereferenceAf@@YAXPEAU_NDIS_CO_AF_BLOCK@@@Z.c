/*
 * XREFs of ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x140041F60
 * Callers:
 *     NdisCmDeregisterSapComplete @ 0x140041980 (NdisCmDeregisterSapComplete.c)
 *     NdisCmCloseAddressFamilyComplete @ 0x140041A50 (NdisCmCloseAddressFamilyComplete.c)
 *     NdisCoOidRequestComplete @ 0x140041EE0 (NdisCoOidRequestComplete.c)
 *     NdisCmRegisterSapComplete @ 0x140065C60 (NdisCmRegisterSapComplete.c)
 *     NdisCoOidRequest @ 0x14008ACE0 (NdisCoOidRequest.c)
 *     NdisClNotifyCloseAddressFamilyComplete @ 0x1400D48B0 (NdisClNotifyCloseAddressFamilyComplete.c)
 *     NdisClMakeCall @ 0x1400D4D90 (NdisClMakeCall.c)
 *     NdisCmCloseCallComplete @ 0x1400D4F30 (NdisCmCloseCallComplete.c)
 *     NdisCmMakeCallComplete @ 0x1400D5250 (NdisCmMakeCallComplete.c)
 *     NdisCoRequest @ 0x1400D7740 (NdisCoRequest.c)
 *     NdisCoRequestComplete @ 0x1400D7B00 (NdisCoRequestComplete.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisDereferenceAf(KSPIN_LOCK *P)
{
  KIRQL v2; // al
  int v3; // edi

  v2 = KeAcquireSpinLockRaiseToDpc(P + 48);
  v3 = --*((_DWORD *)P + 3);
  KeReleaseSpinLock(P + 48, v2);
  if ( !v3 )
    ExFreePoolWithTag(P, 0);
}
