/*
 * XREFs of ?ReleaseTransitionState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18004E530
 * Callers:
 *     ?Cancel@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18004E45C (-Cancel@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ.c)
 * Callees:
 *     ?Cancel@?$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A600 (-Cancel@-$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@impl@winrt@.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x18002A6D0 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18002A75C (--1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002A820 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18004E7E8 (-begin_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18004E81C (-ensure_data@-$tip_test@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@T.c)
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18004EFD4 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004F10C (-reset@-$com_ptr_t@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transi.c)
 *     ?Release@?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@AEAAKXZ @ 0x18004F130 (-Release@-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::ReleaseTransitionState(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *this)
{
  __int64 *v1; // rbx
  bool v3; // bp
  char *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdi
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  LPVOID pv; // [rsp+50h] [rbp+8h] BYREF
  LPVOID v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = 0LL;
  v1 = (__int64 *)((char *)this + 48);
  if ( winrt::Windows::Foundation::operator!=((_QWORD *)this + 6, &v10) )
  {
    winrt::impl::consume_Udwm_Transitions_ITransition<winrt::Udwm::Transitions::ITransition>::Cancel(v1);
    v7[0] = 0LL;
    if ( v1 != v7 )
    {
      if ( *v1 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v1);
      *v1 = 0LL;
    }
    winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler((winrt::Udwm::Transitions::AnimationCompletedHandler *)v7);
  }
  v3 = *((_QWORD *)this + 7) == 0LL;
  v4 = (char *)this + 104;
  v5 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::ensure_data(v4);
  pv = (LPVOID)v5;
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 280));
  tip2::details::shared_data<0,0,0>::begin_update(v5 + 8);
  *(_BYTE *)(v5 + 268) = v3;
  tip2::details::shared_data<0,0,0>::end_update(v5 + 8);
  wil::com_ptr_t<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>,wil::err_returncode_policy>::reset(&pv);
  if ( pv )
    tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::Release(pv);
  v6 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::ensure_data(v4);
  v9 = (LPVOID)v6;
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 280));
  tip2::details::shared_data<0,0,0>::begin_update(v6 + 8);
  *(_BYTE *)(v6 + 269) = 1;
  tip2::details::shared_data<0,0,0>::end_update(v6 + 8);
  wil::com_ptr_t<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>,wil::err_returncode_policy>::reset(&v9);
  if ( v9 )
    tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::Release(v9);
  tip2::tip_test<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::complete(v4);
}
