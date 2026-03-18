/*
 * XREFs of HUBDSM_CompletingClientUnconfigureRequest @ 0x140021310
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_CompleteClientSerialRequestWithStatusSuccess @ 0x140015088 (HUBPDO_CompleteClientSerialRequestWithStatusSuccess.c)
 *     HUBUCX_DeleteEndpointsAndFreeResourcesForCurrentConfiguration @ 0x140026D44 (HUBUCX_DeleteEndpointsAndFreeResourcesForCurrentConfiguration.c)
 */

__int64 __fastcall HUBDSM_CompletingClientUnconfigureRequest(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBUCX_DeleteEndpointsAndFreeResourcesForCurrentConfiguration(v1);
  HUBPDO_CompleteClientSerialRequestWithStatusSuccess(v1);
  return 4077LL;
}
