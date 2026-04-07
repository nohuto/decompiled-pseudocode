/*
 * XREFs of ?GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ @ 0x18002A3C0
 * Callers:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180006850 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x180016C80 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x1800288E0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180043D08 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?Initialize@CWindowList@@QEAAJXZ @ 0x18006286C (-Initialize@CWindowList@@QEAAJXZ.c)
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18007A330 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x18008DEB4 (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180090CA0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180092070 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x1800E2728 (--1CWindowList@@UEAA@XZ.c)
 *     ?HandleScreenRotation@CWindowList@@QEAAJHH@Z @ 0x1800E590C (-HandleScreenRotation@CWindowList@@QEAAJHH@Z.c)
 *     ?IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800E5DF0 (-IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1800E88A8 (-TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_POR.c)
 * Callees:
 *     ??0TransitionManager@Transitions@Udwm@winrt@@AEAA@XZ @ 0x180094480 (--0TransitionManager@Transitions@Udwm@winrt@@AEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009B730 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
struct winrt::Udwm::Transitions::TransitionManager *__fastcall winrt::Udwm::Transitions::TransitionManager::GetCurrent(
        __int64 a1,
        const struct std::nothrow_t *a2)
{
  struct winrt::Udwm::Transitions::TransitionManager *result; // rax
  winrt::Udwm::Transitions::TransitionManager *v3; // rbx

  result = winrt::Udwm::Transitions::TransitionManager::s_instance;
  if ( !winrt::Udwm::Transitions::TransitionManager::s_instance )
  {
    result = (struct winrt::Udwm::Transitions::TransitionManager *)operator new[](0x80uLL, a2);
    v3 = result;
    if ( result )
    {
      memset_0(result, 0, 0x80uLL);
      result = (struct winrt::Udwm::Transitions::TransitionManager *)winrt::Udwm::Transitions::TransitionManager::TransitionManager(v3);
    }
    winrt::Udwm::Transitions::TransitionManager::s_instance = result;
  }
  return result;
}
