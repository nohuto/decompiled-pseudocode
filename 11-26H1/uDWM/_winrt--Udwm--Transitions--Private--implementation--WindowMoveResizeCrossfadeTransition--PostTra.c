/*
 * XREFs of _winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::PostTransition_::_5_::_lambda_1_::operator() @ 0x180087744
 * Callers:
 *     winrt::impl::delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::PostTransition_::_5_::_lambda_1___::Invoke @ 0x1800D6000 (winrt--impl--delegate_winrt--Udwm--Transitions--AnimationCompletedHandler__winrt--Udwm--Transiti.c)
 * Callees:
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x18001EBF8 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?OnPositionAnimationComplete@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18004194C (-OnPositionAnimationComplete@WindowMoveResizeCrossfadeTransition@implementation@Private@Transiti.c)
 *     ??$?9UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@YA_NAEBU?$com_ptr@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@0@$$T@Z @ 0x18007AAD4 (--$-9UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@.c)
 *     ?unconditional_release_ref@?$com_ptr@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x180087814 (-unconditional_release_ref@-$com_ptr@UWindowMoveResizeCrossfadeTransition@implementation@Private.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x18008D1E0 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ??$get_self@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@UITransition@456@@winrt@@YAPEAUWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@0@AEBUITransition@450@@Z @ 0x18008DAF0 (--$get_self@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::PostTransition_::_5_::_lambda_1_::operator()(
        winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition **a1,
        struct IUnknown *a2)
{
  winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition *v2; // rdi
  winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition *v3; // rbx
  void (__fastcall *v4)(winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition *, __int64 *, void **); // rbx
  void **v5; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition *v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a1;
  if ( *a1 )
  {
    v6 = 0LL;
    v4 = *(void (__fastcall **)(winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition *, __int64 *, void **))(*(_QWORD *)v2 + 24LL);
    v5 = winrt::put_abi((winrt *)&v6, a2);
    v4(v2, &winrt::impl::guid_v<winrt::Udwm::Transitions::ITransition>, v5);
    v3 = 0LL;
    if ( v6 )
    {
      v3 = (winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition *)winrt::get_self<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition,winrt::Udwm::Transitions::ITransition>(&v6);
      v6 = 0LL;
    }
    v7 = v3;
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v6);
    v2 = v3;
  }
  else
  {
    v3 = 0LL;
    v7 = 0LL;
  }
  if ( winrt::operator!=<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition>() )
    winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::OnPositionAnimationComplete(v3);
  if ( v2 )
    winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition>::unconditional_release_ref(&v7);
}
