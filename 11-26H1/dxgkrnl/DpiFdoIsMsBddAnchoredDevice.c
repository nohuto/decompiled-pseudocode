/*
 * XREFs of DpiFdoIsMsBddAnchoredDevice @ 0x1400624D8
 * Callers:
 *     DxgkSetDeviceCandidateTarget @ 0x1400624B8 (DxgkSetDeviceCandidateTarget.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1401BC480 (-DxgkCddDisable@@YAJIII@Z.c)
 *     DpGetMSBDDDisplayInfoPlusEdid @ 0x1402379D0 (DpGetMSBDDDisplayInfoPlusEdid.c)
 *     DpiFdoCreateChildDescriptor @ 0x14023FC98 (DpiFdoCreateChildDescriptor.c)
 *     DpiFdoHandleStartDevice @ 0x1402424B0 (DpiFdoHandleStartDevice.c)
 *     DpiFdoHandleStopDevice @ 0x140242E80 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x140248A44 (DpiFdoStopAdapter.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1402490FC (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     DpiFdoHandleSystemPower @ 0x1403BA2FC (DpiFdoHandleSystemPower.c)
 *     DpiFdoHandleRemoveDevice @ 0x14041A370 (DpiFdoHandleRemoveDevice.c)
 *     DpiFdoSetAdapterPowerState @ 0x14042D4FC (DpiFdoSetAdapterPowerState.c)
 * Callees:
 *     <none>
 */

bool __fastcall DpiFdoIsMsBddAnchoredDevice(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( a1 )
    return qword_140169128 == a1;
  return result;
}
