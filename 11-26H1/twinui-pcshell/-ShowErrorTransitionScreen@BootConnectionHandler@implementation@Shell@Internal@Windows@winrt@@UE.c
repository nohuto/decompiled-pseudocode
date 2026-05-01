/*
 * XREFs of ?ShowErrorTransitionScreen@BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x18066A4F0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x180030514 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     tip_details_GetKernelBaseModuleHandle @ 0x18018E734 (tip_details_GetKernelBaseModuleHandle.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802816D8 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028BFAC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802A27AC (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18063CDA8 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18063EDBC (--1-$test_data_control@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18063EE64 (--1-$test_watcher@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?ShowErrorTransitionScreen@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x1806723C0 (-ShowErrorTransitionScreen@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void winrt::Windows::Internal::Shell::implementation::BootConnectionHandler::ShowErrorTransitionScreen()
{
  volatile signed __int32 *v0; // rbx
  volatile signed __int32 *v1; // rbx
  FARPROC ProcAddress; // rax
  HMODULE KernelBaseModuleHandle; // rax
  _BYTE v4[48]; // [rsp+20h] [rbp-48h] BYREF
  volatile signed __int32 *v5; // [rsp+50h] [rbp-18h]
  volatile signed __int32 *v6; // [rsp+80h] [rbp+18h] BYREF

  winrt::Windows::Internal::Shell::implementation::ConnectionHandler::ShowErrorTransitionScreen();
  tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>>((struct wil::details::IFailureCallback *)v4);
  if ( tip2::details::shared_data<1,0,0>::is_running((__int64)(v5 + 2)) )
  {
    v0 = v5;
    v6 = v5;
    if ( v5 )
      _InterlockedIncrement(v5 + 92);
    tip2::details::shared_data<1,0,0>::begin_update((__int64)(v0 + 2));
    std::wstring::operator=(
      (char *)v0 + 288,
      L"BootConnectionHandler::ShowErrorTransitionScreen, Error Transition Screen Triggered");
    tip2::test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::~test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>((void **)&v6);
    v1 = v5;
    v6 = v5;
    if ( v5 )
      _InterlockedIncrement(v5 + 92);
    tip2::details::shared_data<1,0,0>::begin_update((__int64)(v1 + 2));
    *((_BYTE *)v1 + 278) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::~test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>((void **)&v6);
    tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v5 + 2));
    ProcAddress = (FARPROC)`TestControlReporting'::`2'::s_pfnTestControlReporting;
    if ( `TestControlReporting'::`2'::s_pfnTestControlReporting
      || (KernelBaseModuleHandle = tip_details_GetKernelBaseModuleHandle(),
          ProcAddress = GetProcAddress(KernelBaseModuleHandle, "TestControlReporting"),
          (`TestControlReporting'::`2'::s_pfnTestControlReporting = (__int64)ProcAddress) != 0) )
    {
      ((void (__fastcall *)(_QWORD))ProcAddress)(0LL);
    }
  }
  tip2::test_watcher<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::~test_watcher<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>((__int64)v4);
}
