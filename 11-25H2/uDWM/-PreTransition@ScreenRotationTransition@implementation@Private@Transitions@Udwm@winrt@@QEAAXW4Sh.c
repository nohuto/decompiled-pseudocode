/*
 * XREFs of ?PreTransition@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@456@AEBUTransitionState@456@@Z @ 0x1800D6294
 * Callers:
 *     ?PreTransition@?$produce@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UITransition@456@@impl@winrt@@UEAAHHPEAX@Z @ 0x1800D6260 (-PreTransition@-$produce@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x18002A4B8 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ?Cancel@?$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A600 (-Cancel@-$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@impl@winrt@.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x18002A640 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?Captured@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA_NXZ @ 0x18004E790 (-Captured@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA_NXZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@1@XZ @ 0x18004E7AC (--C-$tip_test@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18004E81C (-ensure_data@-$tip_test@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@T.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@2@XZ @ 0x18004EC74 (-watch_errors@-$tip_test@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004F10C (-reset@-$com_ptr_t@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transi.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@QEAA@XZ @ 0x18004F570 (--1-$test_data_control@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Tr.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@QEAA@XZ @ 0x180085FE0 (--1-$test_watcher@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transit.c)
 *     ?start@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18008AA30 (-start@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ?CapturePreRotationVisuals@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D57F8 (-CapturePreRotationVisuals@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winr.c)
 *     ?ResponsiveRotationBeginPreTransition@UDwmTrace@@SAXXZ @ 0x1800D6438 (-ResponsiveRotationBeginPreTransition@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationPreRotationVisualsCaptured@UDwmTrace@@SAXXZ @ 0x1800D65C8 (-ResponsiveRotationPreRotationVisualsCaptured@UDwmTrace@@SAXXZ.c)
 *     ?log@?$tip_test@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@QEAAXPEBG@Z @ 0x1800D7B2C (-log@-$tip_test@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitio.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::PreTransition(
        void **a1,
        int a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  _QWORD *v6; // rax
  void **v7; // rax
  __int64 v8; // rdx
  CBaseObject **v9; // rcx
  __int128 v10; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v11[64]; // [rsp+30h] [rbp-48h] BYREF
  void *v12; // [rsp+80h] [rbp+8h] BYREF

  v12 = 0LL;
  if ( winrt::Windows::Foundation::operator==(a1 + 6, &v12) )
  {
    UDwmTrace::ResponsiveRotationBeginPreTransition();
    winrt::Windows::Foundation::IUnknown::operator=((winrt::Windows::Foundation::IUnknown *)(a1 + 6), a3);
    v6 = a1[13];
    if ( v6 && (v6[30] || (v6[9] & 0x100) != 0) )
      wil::com_ptr_t<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>,wil::err_returncode_policy>::reset(a1 + 13);
    v7 = tip2::tip_test<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::ensure_data(a1 + 13);
    tip2::details::shared_data<0,0,0>::start((__int64)*v7 + 8, &v10);
    v8 = *tip2::tip_test<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::operator->(
            (__int64)(a1 + 13),
            (__int64 *)&v12);
    *(_DWORD *)(v8 + 264) = a2;
    tip2::test_data_control<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::~test_data_control<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>(
      &v12,
      v8);
    tip2::tip_test<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::log(
      a1 + 13,
      L"TIP test started");
    tip2::tip_test<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::watch_errors(
      a1 + 13,
      (__int64)v11);
    if ( !winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::Captured((winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *)a1) )
      winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::CapturePreRotationVisuals(v9);
    UDwmTrace::ResponsiveRotationPreRotationVisualsCaptured();
    tip2::test_watcher<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::~test_watcher<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>((__int64)v11);
  }
  else
  {
    winrt::impl::consume_Udwm_Transitions_ITransition<winrt::Udwm::Transitions::ITransition>::Cancel((__int64 *)a3);
  }
}
