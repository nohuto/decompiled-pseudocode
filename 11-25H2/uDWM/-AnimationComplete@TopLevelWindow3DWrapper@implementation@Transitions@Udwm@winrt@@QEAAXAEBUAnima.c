/*
 * XREFs of ?AnimationComplete@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBUAnimationCompletedHandler@345@@Z @ 0x1800DB4E0
 * Callers:
 *     ?put_AnimationComplete@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHPEAX@Z @ 0x1800DB850 (-put_AnimationComplete@-$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x18002A4B8 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x18002A6D0 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     _lambda_545816354afdfcb0efb7a4f85f5e27cb_::__lambda_545816354afdfcb0efb7a4f85f5e27cb_ @ 0x180062804 (_lambda_545816354afdfcb0efb7a4f85f5e27cb_--__lambda_545816354afdfcb0efb7a4f85f5e27cb_.c)
 *     ?IsIndependent@CFadeOut@@UEAA_NXZ @ 0x180072C30 (-IsIndependent@CFadeOut@@UEAA_NXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x180094A2C (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     ?RegisterAnimationCompletedHandler@CTopLevelWindow3D@@QEAAXV?$function@$$A6AJXZ@std@@@Z @ 0x180095A84 (-RegisterAnimationCompletedHandler@CTopLevelWindow3D@@QEAAXV-$function@$$A6AJXZ@std@@@Z.c)
 *     ?UnregisterAnimationCompletedHandler@CTopLevelWindow3D@@QEAAXXZ @ 0x180095C2C (-UnregisterAnimationCompletedHandler@CTopLevelWindow3D@@QEAAXXZ.c)
 *     ??$get_weak@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@?$root_implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@U1345@UIUserResizeVisualNative@@@impl@winrt@@IEAA?AU?$weak_ref@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@2@XZ @ 0x1800D9A2C (--$get_weak@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@-$root_implements@UUserRes.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::AnimationComplete(
        winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *this,
        const struct winrt::Udwm::Transitions::AnimationCompletedHandler *a2)
{
  char v3; // al
  __int64 v4; // rdx
  __int64 v5; // rbx
  CFadeOut *v6; // rcx
  __int64 v7; // rcx
  _QWORD v8[7]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD *v9; // [rsp+58h] [rbp-8h]
  CFadeOut *v10; // [rsp+70h] [rbp+10h] BYREF
  CFadeOut *v11; // [rsp+80h] [rbp+20h] BYREF

  winrt::Windows::Foundation::IUnknown::operator=(
    (winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *)((char *)this + 40),
    a2);
  v10 = 0LL;
  v3 = winrt::Windows::Foundation::operator!=((_QWORD *)this + 5, &v10);
  v5 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::UserResizeVisual,IUserResizeVisualNative>::get_weak<winrt::Udwm::Transitions::implementation::UserResizeVisual>(
      (__int64)this + 16,
      &v10);
    v6 = v10;
    v10 = 0LL;
    v11 = v6;
    v9 = 0LL;
    if ( CFadeOut::IsIndependent(v6) )
    {
      v8[0] = off_1800F1F48;
      v11 = 0LL;
      v8[1] = v7;
      v9 = v8;
    }
    CTopLevelWindow3D::RegisterAnimationCompletedHandler(v5, (__int64)v8);
    lambda_545816354afdfcb0efb7a4f85f5e27cb_::__lambda_545816354afdfcb0efb7a4f85f5e27cb_(&v11);
    if ( v10 )
      winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref((__int64 *)&v10);
  }
  else
  {
    CTopLevelWindow3D::UnregisterAnimationCompletedHandler(*((CTopLevelWindow3D **)this + 4), v4);
  }
}
