/*
 * XREFs of ?IsEnabled@RawInputProvidersContinuousTracing@@SA_NE_K@Z @ 0x18004729C
 * Callers:
 *     ?OnInputReport@SpatialRimDeviceCollection@@MEAAJKPEAXK@Z @ 0x180047080 (-OnInputReport@SpatialRimDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@KK_NAEBUSpatialControllerPoseMsg@Internal@Spatial@Input@UI@Windows@@AEBUSpatialControllerStateMsg@45678@@Z @ 0x180047170 (-SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@KK_NAEBUSpatia.c)
 *     ??$HandInputReportProcessed@AEAKAEAW4MPCGestureType@@PEAULegacyInputInfo@@@RawInputProvidersContinuousTracing@@SAXAEAKAEAW4MPCGestureType@@$$QEAPEAULegacyInputInfo@@@Z @ 0x1800D36F8 (--$HandInputReportProcessed@AEAKAEAW4MPCGestureType@@PEAULegacyInputInfo@@@RawInputProvidersCont.c)
 * Callees:
 *     ?get@?$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAAPEAVRawInputProvidersContinuousTracing@@P6AXXZ@Z @ 0x1800472DC (-get@-$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAAPEAVRawInputProvidersC.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 */

char __fastcall RawInputProvidersContinuousTracing::IsEnabled(__int64 a1)
{
  __int64 v1; // rax
  char v2; // r8
  _DWORD *v3; // rcx

  v1 = wil::details::static_lazy<RawInputProvidersContinuousTracing>::get(
         a1,
         _lambda_f655bc6deafeea110b0bcdbdac4bd35f_::_lambda_invoker_cdecl_);
  v2 = 0;
  v3 = *(_DWORD **)(v1 + 8);
  if ( v3 && *v3 )
    return (unsigned __int8)tlgKeywordOn(v3, 0LL, 0LL) != 0;
  return v2;
}
