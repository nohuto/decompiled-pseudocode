/*
 * XREFs of HUBUCX_DeleteEndpointsAndFreeResourcesForCurrentConfiguration @ 0x140026D44
 * Callers:
 *     HUBDSM_CleaningUpAnyExistingConfigurationOnStart @ 0x1400210D0 (HUBDSM_CleaningUpAnyExistingConfigurationOnStart.c)
 *     HUBDSM_CompletingClientUnconfigureRequest @ 0x140021310 (HUBDSM_CompletingClientUnconfigureRequest.c)
 *     HUBDSM_CompletingClientUnconfigureRequestWithFailure @ 0x140021340 (HUBDSM_CompletingClientUnconfigureRequestWithFailure.c)
 *     HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff @ 0x1400218B0 (HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff.c)
 *     HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupAfterDetach @ 0x140021900 (HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupAfterDetach.c)
 *     HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup @ 0x140021940 (HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup.c)
 * Callees:
 *     HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration @ 0x140026C7C (HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration.c)
 */

__int64 __fastcall HUBUCX_DeleteEndpointsAndFreeResourcesForCurrentConfiguration(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 48);
  if ( v1 )
  {
    result = HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration(a1, v1);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  return result;
}
