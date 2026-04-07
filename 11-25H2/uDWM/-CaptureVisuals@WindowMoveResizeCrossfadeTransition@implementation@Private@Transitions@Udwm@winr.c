/*
 * XREFs of ?CaptureVisuals@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXW4ShellTransitionType@456@@Z @ 0x18002ABA0
 * Callers:
 *     ?PreTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@456@AEBUTransitionState@456@@Z @ 0x18008C014 (-PreTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt.c)
 * Callees:
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x18002A6D0 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18002A75C (--1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002A820 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4TopLevelWindow3DWrapper@Transitions@Udwm@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x18002AA10 (--4TopLevelWindow3DWrapper@Transitions@Udwm@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?TransferTransitionVisualAndAnimationEngine@?$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002ACC8 (-TransferTransitionVisualAndAnimationEngine@-$consume_Udwm_Transitions_ITransitionState@UITransi.c)
 *     ?AnimationsEnabled@?$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062820 (-AnimationsEnabled@-$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udw.c)
 *     ?UpdateRect@?$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x180090838 (-UpdateRect@-$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@impl@wi.c)
 *     ?CreateSnapshotVisual@?$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBUTopLevelWindow3DWrapper@Transitions@Udwm@3@@Z @ 0x1800908C8 (-CreateSnapshotVisual@-$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@.c)
 *     ?GetMaximizeSnapStartRect@?$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x18009092C (-GetMaximizeSnapStartRect@-$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3D.c)
 *     ?SkipRestoreFromMaximizeTransition@?$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800D9044 (-SkipRestoreFromMaximizeTransition@-$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLeve.c)
 *     ?StartShowAnimation@?$consume_Udwm_Transitions_IUserResizeVisual@UIUserResizeVisual@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800D9090 (-StartShowAnimation@-$consume_Udwm_Transitions_IUserResizeVisual@UIUserResizeVisual@Transitions@.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::CaptureVisuals(
        __int64 a1,
        int a2)
{
  winrt::Windows::Foundation::IUnknown *v4; // rax
  char result; // al
  __int64 v6; // rdx
  winrt::Windows::Foundation::IUnknown *v7; // rax
  _BYTE v8[16]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+20h] BYREF

  v4 = (winrt::Windows::Foundation::IUnknown *)winrt::impl::consume_Udwm_Transitions_ITransitionState<winrt::Udwm::Transitions::ITransitionState>::TransferTransitionVisualAndAnimationEngine(
                                                 a1 + 24,
                                                 &v9);
  winrt::Udwm::Transitions::TopLevelWindow3DWrapper::operator=((winrt::Windows::Foundation::IUnknown *)(a1 + 32), v4);
  if ( v9 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  if ( a2 == 2
    && (unsigned __int8)winrt::impl::consume_Udwm_Transitions_ITransitionState<winrt::Udwm::Transitions::ITransitionState>::AnimationsEnabled(a1 + 32)
    || a2 == 3
    && (unsigned __int8)winrt::impl::consume_Udwm_Transitions_ITopLevelWindow3DWrapper<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::SkipRestoreFromMaximizeTransition(a1 + 32) )
  {
    LOBYTE(v6) = a2 == 2;
    winrt::impl::consume_Udwm_Transitions_IUserResizeVisual<winrt::Udwm::Transitions::IUserResizeVisual>::StartShowAnimation(
      a1 + 32,
      v6);
    v9 = 0LL;
    winrt::Udwm::Transitions::TopLevelWindow3DWrapper::operator=(
      (winrt::Windows::Foundation::IUnknown *)(a1 + 32),
      (winrt::Windows::Foundation::IUnknown *)&v9);
    winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler((winrt::Udwm::Transitions::AnimationCompletedHandler *)&v9);
  }
  v9 = 0LL;
  result = winrt::Windows::Foundation::operator!=((_QWORD *)(a1 + 32), &v9);
  if ( result )
  {
    v7 = (winrt::Windows::Foundation::IUnknown *)winrt::impl::consume_Udwm_Transitions_ITransitionState<winrt::Udwm::Transitions::ITransitionState>::CreateSnapshotVisual(
                                                   a1 + 24,
                                                   &v9,
                                                   a1 + 32);
    winrt::Udwm::Transitions::TopLevelWindow3DWrapper::operator=((winrt::Windows::Foundation::IUnknown *)(a1 + 40), v7);
    if ( v9 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
    *(_OWORD *)(a1 + 76) = *(_OWORD *)winrt::impl::consume_Udwm_Transitions_ITopLevelWindow3DWrapper<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::GetMaximizeSnapStartRect(
                                        a1 + 32,
                                        v8);
    return winrt::impl::consume_Udwm_Transitions_ITransition<winrt::Udwm::Transitions::ITransition>::UpdateRect(a1 + 40);
  }
  return result;
}
