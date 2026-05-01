/*
 * XREFs of ?InternalRelease@?$ComPtr@VCVirtualDesktopApplicationViewEventListener@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F7028
 * Callers:
 *     ?CVirtualDesktopApplicationViewEventListener_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopWindowMoveManager@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1802A0178 (-CVirtualDesktopApplicationViewEventListener_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivat.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopApplicationViewEventListener@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopWindowMoveManager@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopApplicationViewEventListener@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopWindowMoveManager@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x1802A025C (--$MakeAndInitialize@VCVirtualDesktopApplicationViewEventListener@@V1@AEAPEAUIVirtualDesktopMana.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewChangeListener@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800F7050 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationView.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CVirtualDesktopApplicationViewEventListener>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::Release(v1);
  }
  return result;
}
