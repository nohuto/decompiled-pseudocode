/*
 * XREFs of ?PutTransitionVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCTopLevelWindow3D@@@Z @ 0x1800778E0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18001E990 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     ??4TopLevelWindow3DWrapper@Transitions@Udwm@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180041BB4 (--4TopLevelWindow3DWrapper@Transitions@Udwm@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??$make@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@AEAPEAVCTopLevelWindow3D@@@winrt@@YA?A_PAEAPEAVCTopLevelWindow3D@@@Z @ 0x180085D98 (--$make@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@AEAPEAVCTopLevelWindow3D.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::TransitionState::PutTransitionVisual(
        winrt::Udwm::Transitions::implementation::TransitionState *this,
        struct CTopLevelWindow3D *a2)
{
  __int64 *v3; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  struct CTopLevelWindow3D *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v3 = (__int64 *)winrt::make<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,CTopLevelWindow3D * &>(
                    &v4,
                    &v5);
  winrt::Udwm::Transitions::TopLevelWindow3DWrapper::operator=((__int64 *)this + 12, v3);
  if ( v4 )
    winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(&v4);
}
