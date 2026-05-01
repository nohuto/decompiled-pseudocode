/*
 * XREFs of ?Execute@BootUserInputNeededState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180644620
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x18002A5E8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18028C87C (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x180295E10 (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180616ED8 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180618F30 (--1-$test_data_control@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180618FD8 (--1-$test_watcher@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?DismissTransitionScreen@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@AEBW4DismissalReason@TransitionScreen@CloudDesktop@3456@@Z @ 0x18064BC84 (-DismissTransitionScreen@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXA.c)
 *     ?ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXW4CloudPCState@3456@0@Z @ 0x18064C834 (-ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IE.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::BootUserInputNeededState::Execute(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 v3; // rcx
  volatile signed __int32 *v4; // rbx
  _BYTE v5[48]; // [rsp+20h] [rbp-48h] BYREF
  volatile signed __int32 *v6; // [rsp+50h] [rbp-18h]
  int v7; // [rsp+80h] [rbp+18h] BYREF
  volatile signed __int32 *v8; // [rsp+88h] [rbp+20h] BYREF

  if ( a3 )
  {
    if ( a3 != 1 )
    {
      v3 = a3 - 98;
      if ( (unsigned int)v3 > 1 )
        winrt::Windows::Internal::Shell::implementation::ConnectionStateBase::ThrowIllegalStateTransition(v3, a3, 2LL);
    }
  }
  else
  {
    v7 = 4;
    winrt::Windows::Internal::Shell::implementation::ConnectionStateBase::DismissTransitionScreen(0LL, a2, &v7, 0LL);
    tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>>((struct wil::details::IFailureCallback *)v5);
    if ( tip2::details::shared_data<1,0,0>::is_running((__int64)(v6 + 2)) )
    {
      v4 = v6;
      v8 = v6;
      if ( v6 )
        _InterlockedIncrement(v6 + 90);
      tip2::details::shared_data<1,0,0>::begin_update((__int64)(v4 + 2));
      std::wstring::operator=((void **)v4 + 35, L"BootUserInputNeededState::Execute, UserInputNeededState Attained");
      tip2::test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::~test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>((void **)&v8);
    }
    tip2::test_watcher<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::~test_watcher<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>((__int64)v5);
  }
}
