/*
 * XREFs of ??1?$ComPtr@VGamingOverlayExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180222030
 * Callers:
 *     _GamingOverlayExperienceManager::UpdateOverlayDisplayModeShared_::_1_::dtor$0 @ 0x1806B5C17 (_GamingOverlayExperienceManager--UpdateOverlayDisplayModeShared_--_1_--dtor$0.c)
 *     _GamingOverlayExperienceManager::StaticWndProc_::_1_::dtor$0 @ 0x1806BC3F9 (_GamingOverlayExperienceManager--StaticWndProc_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveLayoutChanges@@UIApplicationFrameEventHandler@@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@UIGameBarWindowManager@89Windows@@UIGameBarGameLauncher@89Windows@@UIGameBarProtocolForResultsLauncher@89Windows@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18034DAA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_18034DAA0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<GamingOverlayExperienceManager>::~ComPtr<GamingOverlayExperienceManager>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,Windows::Internal::GamingOverlay::IGameBarGameLauncher,Windows::Internal::GamingOverlay::IGameBarProtocolForResultsLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
