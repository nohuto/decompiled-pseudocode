/*
 * XREFs of ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180062A98
 * Callers:
 *     ?CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z @ 0x180033E4C (-CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z.c)
 *     ?EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ @ 0x18003C6A8 (-EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ.c)
 *     ?CaptureDesktop@CWindowList@@UEAAJHHHH_KW4DXGI_FORMAT@@PEAPEAX@Z @ 0x18005D7B0 (-CaptureDesktop@CWindowList@@UEAAJHHHH_KW4DXGI_FORMAT@@PEAPEAX@Z.c)
 *     ??1CAnimationClock@@UEAA@XZ @ 0x1800629FC (--1CAnimationClock@@UEAA@XZ.c)
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18007EE08 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?BuildCaptureWindowVisualExclusionList@CCaptureManager@@UEAAJPEAXAEBV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x18009E9D0 (-BuildCaptureWindowVisualExclusionList@CCaptureManager@@UEAAJPEAXAEBV-$vector@PEAUHWND__@@V-$all.c)
 *     ?SetupDisplayCapture@CCaptureManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A1560 (-SetupDisplayCapture@CCaptureManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?SetupFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A16B0 (-SetupFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?SetupWindowCapture@CCaptureManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A18E0 (-SetupWindowCapture@CCaptureManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x1800DF464 (--1CWindowList@@UEAA@XZ.c)
 *     _CWindowList::CaptureDesktop_::_1_::dtor$1 @ 0x1800E7676 (_CWindowList--CaptureDesktop_--_1_--dtor$1.c)
 *     _CWindowList::ClipChange_::_1_::dtor$1 @ 0x1800E7772 (_CWindowList--ClipChange_--_1_--dtor$1.c)
 *     _CWindowData::EnsureClientAreaVisualProxy_::_1_::dtor$0 @ 0x1800E7784 (_CWindowData--EnsureClientAreaVisualProxy_--_1_--dtor$0.c)
 *     _CCaptureManager::BuildCaptureWindowVisualExclusionList_::_1_::dtor$1 @ 0x1800E7802 (_CCaptureManager--BuildCaptureWindowVisualExclusionList_--_1_--dtor$1.c)
 *     _CDDisplayManager::MakeSourceHandleForTarget_::_1_::dtor$2 @ 0x1800E8052 (_CDDisplayManager--MakeSourceHandleForTarget_--_1_--dtor$2.c)
 *     _CDesktopManager::CreateMonitorRenderTargets_::_1_::dtor$1 @ 0x1800E8DC0 (_CDesktopManager--CreateMonitorRenderTargets_--_1_--dtor$1.c)
 *     _CCaptureManager::SetupWindowCapture_::_1_::dtor$3 @ 0x1800E8DD2 (_CCaptureManager--SetupWindowCapture_--_1_--dtor$3.c)
 *     _CDesktopManager::CreateMonitorRenderTargets_::_1_::dtor$7 @ 0x1800E8F75 (_CDesktopManager--CreateMonitorRenderTargets_--_1_--dtor$7.c)
 *     _CWindowList::_CWindowList_::_1_::dtor$10 @ 0x1800E9AEE (_CWindowList--_CWindowList_--_1_--dtor$10.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(
        void **a1)
{
  void *v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
  {
    if ( v1 != (void *)-1LL )
      return CloseHandle(v1);
  }
  return result;
}
