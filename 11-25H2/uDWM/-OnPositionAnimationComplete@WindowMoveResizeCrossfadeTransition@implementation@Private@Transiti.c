/*
 * XREFs of ?OnPositionAnimationComplete@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18002AF08
 * Callers:
 *     ?Cancel@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18002B1DC (-Cancel@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAX.c)
 *     winrt::impl::delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_7747b62f378c0764cf1d4ae8045d1c0d___::Invoke @ 0x1800956E0 (winrt--impl--delegate_winrt--Udwm--Transitions--AnimationCompletedHandler__lambda_7747b62f378c07.c)
 * Callees:
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x18002A6D0 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18002A75C (--1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002A820 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4TopLevelWindow3DWrapper@Transitions@Udwm@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x18002AA10 (--4TopLevelWindow3DWrapper@Transitions@Udwm@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?CompleteState@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18002AAC0 (-CompleteState@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt.c)
 *     ?Release@CAnimationResource@@UEAAKXZ @ 0x1800756E0 (-Release@CAnimationResource@@UEAAKXZ.c)
 *     ?ClearTaggedWindowRect@?$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x180090884 (-ClearTaggedWindowRect@-$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWra.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::OnPositionAnimationComplete(
        winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition *this)
{
  winrt::Windows::Foundation::IUnknown *v1; // rbx
  CAnimationResource *v3; // rcx
  _QWORD *v4; // rbx
  char v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v1 = (winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition *)((char *)this + 32);
  if ( winrt::Windows::Foundation::operator!=((_QWORD *)this + 4, &v6) )
  {
    winrt::impl::consume_Udwm_Transitions_ITopLevelWindow3DWrapper<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::ClearTaggedWindowRect(v1);
    v6 = 0LL;
    winrt::Udwm::Transitions::TopLevelWindow3DWrapper::operator=(v1, (winrt::Windows::Foundation::IUnknown *)&v6);
    winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler((winrt::Udwm::Transitions::AnimationCompletedHandler *)&v6);
  }
  v3 = (CAnimationResource *)*((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v3 )
    CAnimationResource::Release(v3);
  v4 = (_QWORD *)((char *)this + 40);
  if ( (char *)this + 40 != &v5 )
  {
    if ( *v4 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition *)((char *)this + 40));
    *v4 = 0LL;
  }
  winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::CompleteState(this);
  UDwmTrace::WindowMoveResizeCrossfadeAnimationTeardownComplete();
}
