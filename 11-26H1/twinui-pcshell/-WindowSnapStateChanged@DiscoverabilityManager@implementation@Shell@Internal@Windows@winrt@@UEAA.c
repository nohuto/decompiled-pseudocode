/*
 * XREFs of ?WindowSnapStateChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x18061C730
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$test_data_control@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180281EBC (--0-$test_data_control@V-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@ti.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028880C (--1-$test_watcher@V-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@tip2@@Q.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802889A4 (--1-$com_ptr_t@V-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@Uerr_return.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028BFAC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802A27AC (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??$FallbackTriggerConditionMet@W4InvokeType@@@DiscoverablityManagerTelemetry@@SAX$$QEAW4InvokeType@@@Z @ 0x1806184E0 (--$FallbackTriggerConditionMet@W4InvokeType@@@DiscoverablityManagerTelemetry@@SAX$$QEAW4InvokeTy.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180619934 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@de.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180619FDC (--1-$test_data_control@V-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@ti.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@1@XZ @ 0x18061A10C (--C-$tip_test@V-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@tip2@@QEAA-.c)
 *     ?InitializeDeviceLoading@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18061B85C (-InitializeDeviceLoading@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEA.c)
 *     ?IsMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x18061BB30 (-IsMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NX.c)
 *     ?LaunchActionCenterNotification@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAJXZ @ 0x18061BC28 (-LaunchActionCenterNotification@DiscoverabilityManager@implementation@Shell@Internal@Windows@win.c)
 *     ?SnappedChangedConditionMet@DiscoverablityManagerTelemetry@@SAXXZ @ 0x18061C6DC (-SnappedChangedConditionMet@DiscoverablityManagerTelemetry@@SAXXZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::WindowSnapStateChanged(
        __int64 a1,
        __int64 a2,
        int a3)
{
  winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *v5; // rcx
  volatile signed __int32 *v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  volatile signed __int32 *v11; // [rsp+20h] [rbp-29h] BYREF
  _BYTE v12[48]; // [rsp+28h] [rbp-21h] BYREF
  __int64 v13; // [rsp+58h] [rbp+Fh] BYREF
  _BYTE v14[64]; // [rsp+60h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]
  volatile signed __int32 *v16; // [rsp+C8h] [rbp+7Fh] BYREF

  tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>>((struct wil::details::IFailureCallback *)v12);
  if ( !winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::IsMiracastSupported(v5) )
  {
    if ( tip2::details::shared_data<1,0,0>::is_running(v13 + 8) )
    {
      tip2::test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>::test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>(
        (__int64 *)&v16,
        &v13);
      *((_BYTE *)v16 + 277) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>::~test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>(&v16);
      tip2::details::shared_data<1,0,0>::complete_without_lock(v13 + 8);
    }
    goto LABEL_17;
  }
  if ( a3 != 1 )
  {
LABEL_17:
    v9 = 0;
    goto LABEL_18;
  }
  v6 = (volatile signed __int32 *)*((_QWORD *)tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>>((struct wil::details::IFailureCallback *)v14)
                                  + 6);
  v11 = v6;
  if ( v6 )
    _InterlockedIncrement(v6 + 82);
  tip2::test_watcher<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>::~test_watcher<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>((__int64)v14);
  *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>::operator->(
                 &v11,
                 (__int64 *)&v16)
            + 320) = 2;
  tip2::test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>::~test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>(&v16);
  winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeDeviceLoading((winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *)(a1 - 8));
  v7 = winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::LaunchActionCenterNotification((winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *)(a1 - 8));
  v9 = v7;
  if ( v7 >= 0 )
  {
    if ( *(_BYTE *)(a1 + 512) )
    {
      LODWORD(v16) = 2;
      DiscoverablityManagerTelemetry::FallbackTriggerConditionMet<enum InvokeType>((int *)&v16);
    }
    else
    {
      DiscoverablityManagerTelemetry::SnappedChangedConditionMet(v8);
    }
    if ( v11 )
    {
      if ( tip2::details::shared_data<1,0,0>::is_running((__int64)(v11 + 2)) )
      {
        *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>::operator->(
                      &v11,
                      (__int64 *)&v16)
                 + 278) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>::~test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>(&v16);
        if ( v11 )
          tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v11 + 2));
      }
    }
    wil::com_ptr_t<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>,wil::err_returncode_policy>((void **)&v11);
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x96,
    (int)"pcshell\\twinui\\discoverabilitymanager\\lib\\discoverabilitymanager.cpp",
    (const char *)(unsigned int)v7);
  wil::com_ptr_t<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>,wil::err_returncode_policy>((void **)&v11);
LABEL_18:
  tip2::test_watcher<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>::~test_watcher<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>((__int64)v12);
  return v9;
}
