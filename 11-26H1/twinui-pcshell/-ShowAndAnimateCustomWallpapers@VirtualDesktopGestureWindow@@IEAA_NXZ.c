/*
 * XREFs of ?ShowAndAnimateCustomWallpapers@VirtualDesktopGestureWindow@@IEAA_NXZ @ 0x180562DF4
 * Callers:
 *     ?Commit@VirtualDesktopGestureWindow@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@IM_N@Z @ 0x18055E190 (-Commit@VirtualDesktopGestureWindow@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@IM_N@Z.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z @ 0x18055E664 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z.c)
 *     ?Commit@VirtualDesktopHotKeyWindow@@QEAAJPEAUIVirtualDesktopSwitchAnimator2@@M@Z @ 0x180569D4C (-Commit@VirtualDesktopHotKeyWindow@@QEAAJPEAUIVirtualDesktopSwitchAnimator2@@M@Z.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@AEAAJPEA_NPEAUIVirtualDesktop@@V?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@IUtagRECT@@@Z @ 0x180569E30 (-CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@AEAAJPEA_NPEAUIVirtualDesktop@@V-$shared_any_.c)
 * Callees:
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180109F70 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@.c)
 */

bool __fastcall VirtualDesktopGestureWindow::ShowAndAnimateCustomWallpapers(VirtualDesktopGestureWindow *this)
{
  BOOL v1; // eax
  int pvParam; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+24h] [rbp-14h]
  int v5; // [rsp+2Ch] [rbp-Ch]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwUpdates>::__private_IsEnabledPreCheck(
    `wil::Feature<__WilFeatureTraits_Feature_VwUpdates>::GetImpl'::`2'::impl,
    3u);
  pvParam = 16;
  v4 = 0LL;
  v5 = 0;
  v1 = SystemParametersInfoW(0x42u, 0x10u, &pvParam, 0);
  if ( v1 )
    LOBYTE(v1) = (v4 & 1) == 0;
  return v1;
}
