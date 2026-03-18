/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainDX12Support@@@details@wil@@QEAA_NXZ @ 0x1800F72C8
 * Callers:
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x1800F6C10 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x18012D6D0 (-UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rec.c)
 *     ?CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@PEAVID2DBitmapCacheSource@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1801306C8 (-CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@PEAVID2DBitmapCacheSource@@PEAPEAVC.c)
 *     ?InitSystemDevice@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@@Z @ 0x1801330B8 (-InitSystemDevice@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainDX12Support@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F7304 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainDX12Support@@@details@wil@@Q.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainDX12Support@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800F7870 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainDX12Support.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompSwapchainDX12Support>::__private_IsEnabled(
        __int64 a1)
{
  char v2; // bl
  __int64 v3; // rdx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompSwapchainDX12Support>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  LOBYTE(v3) = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompSwapchainDX12Support>::ReportUsage(a1, v3);
  return v2;
}
