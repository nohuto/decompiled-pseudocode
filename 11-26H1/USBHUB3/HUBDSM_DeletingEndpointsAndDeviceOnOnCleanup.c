/*
 * XREFs of HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup @ 0x140021940
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_DeleteDefaultEndpointFromUCX @ 0x140026C08 (HUBUCX_DeleteDefaultEndpointFromUCX.c)
 *     HUBUCX_DeleteDeviceFromUCX @ 0x140026C44 (HUBUCX_DeleteDeviceFromUCX.c)
 *     HUBUCX_DeleteEndpointsAndFreeResourcesForCurrentConfiguration @ 0x140026D44 (HUBUCX_DeleteEndpointsAndFreeResourcesForCurrentConfiguration.c)
 *     HUBMISC_RemoveDeviceInfoFromGlobalChildList @ 0x140033890 (HUBMISC_RemoveDeviceInfoFromGlobalChildList.c)
 */

__int64 __fastcall HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBUCX_DeleteEndpointsAndFreeResourcesForCurrentConfiguration(v1);
  HUBUCX_DeleteDefaultEndpointFromUCX(v1);
  HUBUCX_DeleteDeviceFromUCX(v1);
  HUBMISC_RemoveDeviceInfoFromGlobalChildList(v1);
  return 4077LL;
}
