/*
 * XREFs of DpiFdoIsPostDevice @ 0x140056A38
 * Callers:
 *     DpiGetDbgInfoAdapters @ 0x14006D75C (DpiGetDbgInfoAdapters.c)
 *     DpiGetAdapterInfo @ 0x140238980 (DpiGetAdapterInfo.c)
 *     DpiPollAllDisplayChildren @ 0x14023A5C8 (DpiPollAllDisplayChildren.c)
 *     DpiAcquirePostDisplayOwnership @ 0x14023C000 (DpiAcquirePostDisplayOwnership.c)
 *     DpiFdoHandleStartDevice @ 0x1402424B0 (DpiFdoHandleStartDevice.c)
 *     DpiFdoHandleStopDevice @ 0x140242E80 (DpiFdoHandleStopDevice.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x140243240 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x140248A44 (DpiFdoStopAdapter.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1402490FC (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     DpiPnpNotifyGdi @ 0x14024BD94 (DpiPnpNotifyGdi.c)
 *     DpiLdaLinkDeviceToChain @ 0x1402549DC (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x140254F00 (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiGdoDispatchInternalIoctl @ 0x140257550 (DpiGdoDispatchInternalIoctl.c)
 *     DpiFdoHandleDevicePower @ 0x1403B9A00 (DpiFdoHandleDevicePower.c)
 *     DpiFdoDispatchIoctl @ 0x1403D4AF0 (DpiFdoDispatchIoctl.c)
 *     DpiFdoHandleRemoveDevice @ 0x14041A370 (DpiFdoHandleRemoveDevice.c)
 *     DpiFdoSetAdapterPowerState @ 0x14042D4FC (DpiFdoSetAdapterPowerState.c)
 * Callees:
 *     <none>
 */

bool __fastcall DpiFdoIsPostDevice(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( a1 )
    return qword_140169080 == a1;
  return result;
}
