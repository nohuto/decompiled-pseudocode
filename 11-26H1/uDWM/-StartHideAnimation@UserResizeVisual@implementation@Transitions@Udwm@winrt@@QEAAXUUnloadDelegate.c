/*
 * XREFs of ?StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate@345@@Z @ 0x1800DD8F0
 * Callers:
 *     ?StartHideAnimation@?$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@@impl@winrt@@UEAAHPEAX@Z @ 0x1800DD8A0 (-StartHideAnimation@-$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserRes.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18001E990 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     _winrt::Udwm::Transitions::implementation::UserResizeVisual::StartHideAnimation_::_2_::_lambda_1_::__lambda_1_ @ 0x18002FE78 (_winrt--Udwm--Transitions--implementation--UserResizeVisual--StartHideAnimation_--_2_--_lambda_1.c)
 *     ?IsIndependent@CFadeOut@@UEAA_NXZ @ 0x180030920 (-IsIndependent@CFadeOut@@UEAA_NXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800436A0 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?StartAlphaAnimation@CAcrylicSheet@@QEAAJMMMV?$function@$$A6AXXZ@std@@@Z @ 0x180095B90 (-StartAlphaAnimation@CAcrylicSheet@@QEAAJMMMV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??$get_weak@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@?$root_implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@U1345@UIUserResizeVisualNative@@@impl@winrt@@IEAA?AU?$weak_ref@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@2@XZ @ 0x1800D6A3C (--$get_weak@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@-$root_implements@UUserRes.c)
 *     ??$?4AEAUUnloadDelegate@Transitions@Udwm@winrt@@$0A@@?$function@$$A6AXXZ@std@@QEAAAEAV01@AEAUUnloadDelegate@Transitions@Udwm@winrt@@@Z @ 0x1800DCFF0 (--$-4AEAUUnloadDelegate@Transitions@Udwm@winrt@@$0A@@-$function@$$A6AXXZ@std@@QEAAAEAV01@AEAUUnl.c)
 *     ?AnimationDuration@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAMXZ @ 0x1800DD6C0 (-AnimationDuration@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAMXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::StartHideAnimation(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  CAcrylicSheet *v5; // rsi
  CFadeOut *v6; // rcx
  __int64 v7; // rcx
  float v8; // xmm0_4
  __int64 result; // rax
  __int64 v10[7]; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v11; // [rsp+68h] [rbp-10h]
  CFadeOut *v12; // [rsp+A0h] [rbp+28h] BYREF
  __int64 *v13; // [rsp+A8h] [rbp+30h]
  CFadeOut *v14; // [rsp+B0h] [rbp+38h] BYREF
  __int64 *v15; // [rsp+B8h] [rbp+40h]

  v13 = a2;
  std::function<void (void)>::operator=<winrt::Udwm::Transitions::UnloadDelegate &,0>((CFadeOut *)(a1 + 104));
  v4 = *(_QWORD *)(a1 + 64);
  if ( *(_QWORD *)(v4 + 232) )
    CTopLevelWindow3D::StartAnimation(v4, 0xFu);
  v5 = *(CAcrylicSheet **)(a1 + 40);
  v15 = v10;
  winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::UserResizeVisual,IUserResizeVisualNative>::get_weak<winrt::Udwm::Transitions::implementation::UserResizeVisual>(
    a1 + 16,
    &v12);
  v6 = v12;
  v12 = 0LL;
  v14 = v6;
  v11 = 0LL;
  if ( CFadeOut::IsIndependent(v6) )
  {
    v10[0] = (__int64)off_1800F1B78;
    v14 = 0LL;
    v10[1] = v7;
    v11 = v10;
  }
  v8 = winrt::Udwm::Transitions::implementation::UserResizeVisual::AnimationDuration((CTopLevelWindow3D **)a1);
  CAcrylicSheet::StartAlphaAnimation(v5, 1.0, 0.0, v8, (__int64)v10);
  result = winrt::Udwm::Transitions::implementation::UserResizeVisual::StartHideAnimation_::_2_::_lambda_1_::__lambda_1_((__int64 *)&v14);
  if ( v12 )
    result = winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref((__int64 *)&v12);
  if ( *a2 )
    return winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(a2);
  return result;
}
