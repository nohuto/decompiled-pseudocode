/*
 * XREFs of ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180071818
 * Callers:
 *     ?CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z @ 0x180034B94 (-CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z.c)
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x18003C544 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     ?Initialize@CSpriteVisual@@UEAAJXZ @ 0x18003D8C0 (-Initialize@CSpriteVisual@@UEAAJXZ.c)
 *     ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18003FE94 (-InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?CaptureDesktop@CWindowList@@UEAAJHHHH_KW4DXGI_FORMAT@@PEAPEAX@Z @ 0x18006E940 (-CaptureDesktop@CWindowList@@UEAAJHHHH_KW4DXGI_FORMAT@@PEAPEAX@Z.c)
 *     ??1CAnimationClock@@UEAA@XZ @ 0x180071788 (--1CAnimationClock@@UEAA@XZ.c)
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180077088 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ @ 0x180090B34 (-EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ.c)
 *     ?StartFilteredDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800C0E20 (-StartFilteredDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x1800E2728 (--1CWindowList@@UEAA@XZ.c)
 *     _CWindowList::CaptureDesktop_::_1_::dtor$1 @ 0x1800EB8DC (_CWindowList--CaptureDesktop_--_1_--dtor$1.c)
 *     _CWindowBorder::CreateBorderStructure_::_1_::dtor$3 @ 0x1800EBAA0 (_CWindowBorder--CreateBorderStructure_--_1_--dtor$3.c)
 *     _CSpriteVisual::Initialize_::_1_::dtor$0 @ 0x1800EBAD6 (_CSpriteVisual--Initialize_--_1_--dtor$0.c)
 *     _CAnimationScheduler::_SetStoryboardTriggerForAnimationClock_::_1_::dtor$0 @ 0x1800EBB54 (_CAnimationScheduler--_SetStoryboardTriggerForAnimationClock_--_1_--dtor$0.c)
 *     _CDesktopManager::CreateMonitorRenderTargets_::_1_::dtor$1 @ 0x1800EC234 (_CDesktopManager--CreateMonitorRenderTargets_--_1_--dtor$1.c)
 *     _CDesktopManager::CreateMonitorRenderTargets_::_1_::dtor$7 @ 0x1800EC28E (_CDesktopManager--CreateMonitorRenderTargets_--_1_--dtor$7.c)
 *     _CDDisplayManager::MakeSourceHandleForTarget_::_1_::dtor$2 @ 0x1800EC437 (_CDDisplayManager--MakeSourceHandleForTarget_--_1_--dtor$2.c)
 *     _CWindowList::ClipChange_::_1_::dtor$1 @ 0x1800EC77B (_CWindowList--ClipChange_--_1_--dtor$1.c)
 *     _CProjectionBorderManager::StartFilteredDisplayCapture_::_1_::dtor$1 @ 0x1800ED159 (_CProjectionBorderManager--StartFilteredDisplayCapture_--_1_--dtor$1.c)
 *     _CWindowData::EnsureClientAreaVisualProxy_::_1_::dtor$0 @ 0x1800EDA53 (_CWindowData--EnsureClientAreaVisualProxy_--_1_--dtor$0.c)
 *     _CWindowList::_CWindowList_::_1_::dtor$10 @ 0x1800EDB59 (_CWindowList--_CWindowList_--_1_--dtor$10.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(
        void **a1)
{
  char *v1; // rcx
  int result; // eax

  v1 = (char *)*a1;
  result = (_DWORD)v1 - 1;
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return CloseHandle(v1);
  return result;
}
