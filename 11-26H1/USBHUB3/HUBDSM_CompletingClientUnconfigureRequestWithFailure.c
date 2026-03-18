/*
 * XREFs of HUBDSM_CompletingClientUnconfigureRequestWithFailure @ 0x140021340
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_CompleteClientSerialRequestWithLastStatus @ 0x140014D18 (HUBPDO_CompleteClientSerialRequestWithLastStatus.c)
 *     HUBUCX_DeleteEndpointsAndFreeResourcesForCurrentConfiguration @ 0x140026D44 (HUBUCX_DeleteEndpointsAndFreeResourcesForCurrentConfiguration.c)
 */

__int64 __fastcall HUBDSM_CompletingClientUnconfigureRequestWithFailure(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBUCX_DeleteEndpointsAndFreeResourcesForCurrentConfiguration(v1);
  HUBPDO_CompleteClientSerialRequestWithLastStatus(v1);
  return 4077LL;
}
