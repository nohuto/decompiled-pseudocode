/*
 * XREFs of ?OnApplicationViewChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1805F7BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180065DB4 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180287A18 (--1-$test_watcher@V-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@tip2@@Q.c)
 *     ??0?$test_data_control@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180289BF0 (--0-$test_data_control@V-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@ti.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028AAC4 (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x180295E10 (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??$_Emplace_back_internal@AEBI@?$deque@IV?$allocator@I@std@@@std@@AEAAXAEBI@Z @ 0x180297BD0 (--$_Emplace_back_internal@AEBI@-$deque@IV-$allocator@I@std@@@std@@AEAAXAEBI@Z.c)
 *     ??$FallbackTriggerConditionMet@W4InvokeType@@@DiscoverablityManagerTelemetry@@SAX$$QEAW4InvokeType@@@Z @ 0x1805F3D9C (--$FallbackTriggerConditionMet@W4InvokeType@@@DiscoverablityManagerTelemetry@@SAX$$QEAW4InvokeTy.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x1805F5178 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@de.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805F582C (--1-$test_data_control@V-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@ti.c)
 *     ?FocusChangedConditionMet@DiscoverablityManagerTelemetry@@SAXXZ @ 0x1805F64AC (-FocusChangedConditionMet@DiscoverablityManagerTelemetry@@SAXXZ.c)
 *     ?InitializeDeviceLoading@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805F7654 (-InitializeDeviceLoading@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEA.c)
 *     ?IsMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1805F796C (-IsMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NX.c)
 *     ?LaunchActionCenterNotification@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAJXZ @ 0x1805F7A9C (-LaunchActionCenterNotification@DiscoverabilityManager@implementation@Shell@Internal@Windows@win.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CastDiscoverability_Bugfix@@@details@wil@@QEAA_NXZ @ 0x1805F8A2C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CastDiscoverability_Bugfix@@@deta.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::OnApplicationViewChanged(
        __int64 a1,
        __int64 a2,
        int a3)
{
  winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *v5; // rcx
  unsigned int v6; // ebx
  bool v7; // al
  bool v8; // zf
  int v9; // eax
  int v10; // r14d
  volatile signed __int32 *v12; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v13[48]; // [rsp+28h] [rbp-38h] BYREF
  __int64 v14; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>>((struct wil::details::IFailureCallback *)v13);
  v6 = 0;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CastDiscoverability_Bugfix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_CastDiscoverability_Bugfix>::GetImpl'::`2'::impl)
    || winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::IsMiracastSupported(v5) )
  {
    if ( a3 == 7 )
    {
      if ( (LODWORD(v12) = (int)_Xtime_get_ticks() / 10000000,
            std::deque<unsigned int>::_Emplace_back_internal<unsigned int const &>(a1 + 456, (unsigned int *)&v12),
            *(_QWORD *)(a1 + 488) >= 0xAuLL)
        && ((v7 = _o__difftime64(
                    (unsigned int)v12,
                    *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 464)
                                                + 8 * ((*(_QWORD *)(a1 + 472) - 1LL) & (*(_QWORD *)(a1 + 480) >> 2)))
                                    + 4 * (*(_QWORD *)(a1 + 480) & 3LL))) <= 300.0,
             v8 = *(_QWORD *)(a1 + 488) == 1LL,
             --*(_QWORD *)(a1 + 488),
             !v8)
          ? ++*(_QWORD *)(a1 + 480)
          : (*(_QWORD *)(a1 + 480) = 0LL),
            v7)
        || *(_BYTE *)(a1 + 520) )
      {
        v12 = 0LL;
        if ( winrt::Windows::Foundation::operator==(
               (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))(a1 + 440),
               &v12) )
        {
          winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeDeviceLoading((winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *)a1);
        }
        else
        {
          tip2::test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>::test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>(
            (__int64 *)&v12,
            &v14);
          *((_DWORD *)v12 + 78) = 1;
          tip2::test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>::~test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>(&v12);
          v9 = winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::LaunchActionCenterNotification((winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *)a1);
          v10 = v9;
          if ( v9 >= 0 )
          {
            if ( *(_BYTE *)(a1 + 520) )
            {
              LODWORD(v12) = 1;
              DiscoverablityManagerTelemetry::FallbackTriggerConditionMet<enum InvokeType>((int *)&v12);
            }
            else
            {
              DiscoverablityManagerTelemetry::FocusChangedConditionMet();
            }
            if ( tip2::details::shared_data<1,0,0>::is_running(v14 + 8) )
            {
              tip2::test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>::test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>(
                (__int64 *)&v12,
                &v14);
              *((_BYTE *)v12 + 270) = 1;
              goto LABEL_21;
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xF9,
              (int)"pcshell\\twinui\\discoverabilitymanager\\lib\\discoverabilitymanager.cpp",
              (const char *)(unsigned int)v9);
            v6 = v10;
          }
        }
      }
    }
  }
  else if ( tip2::details::shared_data<1,0,0>::is_running(v14 + 8) )
  {
    tip2::test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>::test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>(
      (__int64 *)&v12,
      &v14);
    *((_BYTE *)v12 + 269) = 1;
LABEL_21:
    tip2::test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>::~test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>(&v12);
    tip2::details::shared_data<1,0,0>::complete_without_lock(v14 + 8);
  }
  tip2::test_watcher<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>::~test_watcher<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>((__int64)v13);
  return v6;
}
