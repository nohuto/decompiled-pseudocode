/*
 * XREFs of ?GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ @ 0x18001E8E0
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180011000 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180013644 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800184F0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x18001E590 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?Initialize@CWindowList@@QEAAJXZ @ 0x180030158 (-Initialize@CWindowList@@QEAAJXZ.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x18007CF3C (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180080150 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180081070 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x1800814E0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x1800DF464 (--1CWindowList@@UEAA@XZ.c)
 *     ?HandleScreenRotation@CWindowList@@QEAAJHH@Z @ 0x1800E1760 (-HandleScreenRotation@CWindowList@@QEAAJHH@Z.c)
 *     ?IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800E1A80 (-IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1800E4818 (-TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_POR.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 *     ??0TransitionManager@Transitions@Udwm@winrt@@AEAA@XZ @ 0x1800874F4 (--0TransitionManager@Transitions@Udwm@winrt@@AEAA@XZ.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
struct winrt::Udwm::Transitions::TransitionManager *winrt::Udwm::Transitions::TransitionManager::GetCurrent(void)
{
  struct winrt::Udwm::Transitions::TransitionManager *result; // rax
  winrt::Udwm::Transitions::TransitionManager *v1; // rbx

  result = winrt::Udwm::Transitions::TransitionManager::s_instance;
  if ( !winrt::Udwm::Transitions::TransitionManager::s_instance )
  {
    result = (struct winrt::Udwm::Transitions::TransitionManager *)operator new(0x80uLL);
    v1 = result;
    if ( result )
    {
      memset_0(result, 0, 0x80uLL);
      result = (struct winrt::Udwm::Transitions::TransitionManager *)winrt::Udwm::Transitions::TransitionManager::TransitionManager(v1);
    }
    winrt::Udwm::Transitions::TransitionManager::s_instance = result;
  }
  return result;
}
