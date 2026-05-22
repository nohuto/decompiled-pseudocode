/*
 * XREFs of ??$HandInputReportProcessed@AEAKAEAW4MPCGestureType@@PEAULegacyInputInfo@@@RawInputProvidersContinuousTracing@@SAXAEAKAEAW4MPCGestureType@@$$QEAPEAULegacyInputInfo@@@Z @ 0x1800D36F8
 * Callers:
 *     ?SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@KAEBUHandStateMsg@Internal@Spatial@Input@UI@Windows@@UMatrix4x4@Numerics@Foundation@9@_J4444_N@Z @ 0x1800D79E0 (-SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@W4MPCGestureTy.c)
 * Callees:
 *     ?IsEnabled@RawInputProvidersContinuousTracing@@SA_NE_K@Z @ 0x18004729C (-IsEnabled@RawInputProvidersContinuousTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAAPEAVRawInputProvidersContinuousTracing@@P6AXXZ@Z @ 0x1800472DC (-get@-$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAAPEAVRawInputProvidersC.c)
 *     ?HandInputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKW4MPCGestureType@@PEAUInputInfo@@@Z @ 0x1800D5D2C (-HandInputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKW4MPCGestureType@@PEAUInput.c)
 */

char __fastcall RawInputProvidersContinuousTracing::HandInputReportProcessed<unsigned long &,enum MPCGestureType &,LegacyInputInfo *>(
        unsigned int *a1,
        unsigned int *a2,
        _QWORD *a3)
{
  char result; // al
  __int64 v7; // rcx
  __int64 v8; // rcx

  result = RawInputProvidersContinuousTracing::IsEnabled((__int64)a1);
  if ( result )
  {
    wil::details::static_lazy<RawInputProvidersContinuousTracing>::get(
      v7,
      (void (__cdecl *)())_lambda_f655bc6deafeea110b0bcdbdac4bd35f_::_lambda_invoker_cdecl_);
    return RawInputProvidersContinuousTracing::HandInputReportProcessed_(v8, *a1, *a2, *a3);
  }
  return result;
}
