/*
 * XREFs of ?AnimationComplete@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBUAnimationCompletedHandler@345@@Z @ 0x1800D8400
 * Callers:
 *     ?put_AnimationComplete@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHPEAX@Z @ 0x1800D87A0 (-put_AnimationComplete@-$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18001E990 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     _winrt::Udwm::Transitions::implementation::UserResizeVisual::StartHideAnimation_::_2_::_lambda_1_::__lambda_1_ @ 0x18002FE78 (_winrt--Udwm--Transitions--implementation--UserResizeVisual--StartHideAnimation_--_2_--_lambda_1.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180030428 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ?IsIndependent@CFadeOut@@UEAA_NXZ @ 0x180030920 (-IsIndependent@CFadeOut@@UEAA_NXZ.c)
 *     ?UnregisterAnimationCompletedHandler@CTopLevelWindow3D@@QEAAXXZ @ 0x1800401B0 (-UnregisterAnimationCompletedHandler@CTopLevelWindow3D@@QEAAXXZ.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180042430 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?RegisterAnimationCompletedHandler@CTopLevelWindow3D@@QEAAXV?$function@$$A6AJXZ@std@@@Z @ 0x180087084 (-RegisterAnimationCompletedHandler@CTopLevelWindow3D@@QEAAXV-$function@$$A6AJXZ@std@@@Z.c)
 *     ??$get_weak@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@?$root_implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@U1345@UIUserResizeVisualNative@@@impl@winrt@@IEAA?AU?$weak_ref@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@2@XZ @ 0x1800D6A3C (--$get_weak@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@-$root_implements@UUserRes.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::AnimationComplete(
        winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *this,
        const struct winrt::Udwm::Transitions::AnimationCompletedHandler *a2)
{
  char v3; // al
  __int64 v4; // rbx
  CFadeOut *v5; // rcx
  __int64 v6; // rcx
  _QWORD v7[7]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD *v8; // [rsp+58h] [rbp-8h]
  CFadeOut *v9; // [rsp+70h] [rbp+10h] BYREF
  CFadeOut *v10; // [rsp+80h] [rbp+20h] BYREF

  winrt::Windows::Foundation::IUnknown::operator=((__int64 *)this + 5, (__int64 *)a2);
  v9 = 0LL;
  v3 = winrt::Windows::Foundation::operator!=((_QWORD *)this + 5, &v9);
  v4 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::UserResizeVisual,IUserResizeVisualNative>::get_weak<winrt::Udwm::Transitions::implementation::UserResizeVisual>(
      (__int64)this + 16,
      &v9);
    v5 = v9;
    v9 = 0LL;
    v10 = v5;
    v8 = 0LL;
    if ( CFadeOut::IsIndependent(v5) )
    {
      v7[0] = off_1800F1688;
      v10 = 0LL;
      v7[1] = v6;
      v8 = v7;
    }
    CTopLevelWindow3D::RegisterAnimationCompletedHandler(v4, (__int64)v7);
    winrt::Udwm::Transitions::implementation::UserResizeVisual::StartHideAnimation_::_2_::_lambda_1_::__lambda_1_((__int64 *)&v10);
    if ( v9 )
      winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref((__int64 *)&v9);
  }
  else
  {
    CTopLevelWindow3D::UnregisterAnimationCompletedHandler(*((CTopLevelWindow3D **)this + 4));
  }
}
