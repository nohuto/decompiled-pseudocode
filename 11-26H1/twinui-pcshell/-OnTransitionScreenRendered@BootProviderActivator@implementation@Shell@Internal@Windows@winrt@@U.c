/*
 * XREFs of ?OnTransitionScreenRendered@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBUTransitionScreen@7CloudDesktop@3456@@Z @ 0x180669500
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x180030514 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800CA0BC (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     tip_details_GetKernelBaseModuleHandle @ 0x18018E734 (tip_details_GetKernelBaseModuleHandle.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802816D8 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028BFAC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802A27AC (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18063CDA8 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18063EDBC (--1-$test_data_control@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18063EE64 (--1-$test_watcher@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::BootProviderActivator::OnTransitionScreenRendered(
        winrt::Windows::Internal::Shell::implementation::BootProviderActivator *this,
        const struct winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen *a2)
{
  wil::details *v2; // rbx
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rbx
  FARPROC ProcAddress; // rax
  HMODULE KernelBaseModuleHandle; // rax
  void *v8; // rdx
  _BYTE v9[48]; // [rsp+20h] [rbp-40h] BYREF
  volatile signed __int32 *v10; // [rsp+50h] [rbp-10h]
  volatile signed __int32 *v11; // [rsp+80h] [rbp+20h] BYREF
  wil::details *v12; // [rsp+88h] [rbp+28h] BYREF

  v2 = (wil::details *)OpenEventW(2u, 0, L"ShellDesktopSwitchEvent");
  v12 = v2;
  tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>>((struct wil::details::IFailureCallback *)v9);
  if ( v2 )
  {
    SetEvent(v2);
    if ( tip2::details::shared_data<1,0,0>::is_running((__int64)(v10 + 2)) )
    {
      v3 = v10;
      v11 = v10;
      if ( v10 )
        _InterlockedIncrement(v10 + 92);
      tip2::details::shared_data<1,0,0>::begin_update((__int64)(v3 + 2));
      std::wstring::operator=(
        (char *)v3 + 288,
        L"BootProviderActivator::OnTransitionScreenRendered, ShellDesktopSwitchEvent Triggered");
      tip2::test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::~test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>((void **)&v11);
    }
  }
  else if ( tip2::details::shared_data<1,0,0>::is_running((__int64)(v10 + 2)) )
  {
    v4 = v10;
    v11 = v10;
    if ( v10 )
      _InterlockedIncrement(v10 + 92);
    tip2::details::shared_data<1,0,0>::begin_update((__int64)(v4 + 2));
    std::wstring::operator=(
      (char *)v4 + 288,
      L"BootProviderActivator::OnTransitionScreenRendered, Failed to open ShellDesktopSwitchEvent");
    tip2::test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::~test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>((void **)&v11);
    v5 = v10;
    v11 = v10;
    if ( v10 )
      _InterlockedIncrement(v10 + 92);
    tip2::details::shared_data<1,0,0>::begin_update((__int64)(v5 + 2));
    *((_BYTE *)v5 + 275) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::~test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>((void **)&v11);
    tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v10 + 2));
    ProcAddress = (FARPROC)`TestControlReporting'::`2'::s_pfnTestControlReporting;
    if ( `TestControlReporting'::`2'::s_pfnTestControlReporting
      || (KernelBaseModuleHandle = tip_details_GetKernelBaseModuleHandle(),
          ProcAddress = GetProcAddress(KernelBaseModuleHandle, "TestControlReporting"),
          (`TestControlReporting'::`2'::s_pfnTestControlReporting = (__int64)ProcAddress) != 0) )
    {
      ((void (__fastcall *)(_QWORD))ProcAddress)(0LL);
    }
  }
  tip2::test_watcher<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::~test_watcher<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>((__int64)v9);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    &v12,
    v8);
}
