/*
 * XREFs of ??1?$com_ptr_t@VGamingOverlayExperienceManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180342034
 * Callers:
 *     GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1 @ 0x18034C420 (GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1.c)
 *     GamingOverlayExperienceManager::SendGamepadCommand$_ResumeCoro$1 @ 0x180353120 (GamingOverlayExperienceManager--SendGamepadCommand$_ResumeCoro$1.c)
 *     GamingOverlayExperienceManager::UnregisterFromXusbConnectionEventsOnBackground$_ResumeCoro$1 @ 0x180355C10 (GamingOverlayExperienceManager--UnregisterFromXusbConnectionEventsOnBackground$_ResumeCoro$1.c)
 *     _GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806E45C2 (_GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1_--_1_--dtor$0.c)
 *     _GamingOverlayExperienceManager::SendGamepadCommand$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806E4FA5 (_GamingOverlayExperienceManager--SendGamepadCommand$_ResumeCoro$1_--_1_--dtor$0.c)
 *     _GamingOverlayExperienceManager::UnregisterFromXusbConnectionEventsOnBackground$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806E5228 (_GamingOverlayExperienceManager--UnregisterFromXusbConnectionEventsOnBackground$_ResumeCoro$1_--.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveLayoutChanges@@UIApplicationFrameEventHandler@@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@UIGameBarWindowManager@89Windows@@UIGameBarGameLauncher@89Windows@@UIGameBarProtocolForResultsLauncher@89Windows@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180351CF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_180351CF0.c)
 */

__int64 __fastcall wil::com_ptr_t<GamingOverlayExperienceManager,wil::err_exception_policy>::~com_ptr_t<GamingOverlayExperienceManager,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,Windows::Internal::GamingOverlay::IGameBarGameLauncher,Windows::Internal::GamingOverlay::IGameBarProtocolForResultsLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::Release(v1);
  return result;
}
