/*
 * XREFs of ?register_completed_callback@?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@AEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1805C92F0
 * Callers:
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@V?$shared_ptr@VPinOperationContext@@@std@@_N@experimental@std@@@?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@V?$shared_ptr@VPinOperationContext@@@std@@_N@experimental@std@@@experimental@std@@@Z @ 0x1805BD888 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@_ea_1805BD888.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x1800FAB4C (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$?0U?$disconnect_aware_handler@$00U?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@winrt@@@?$AsyncOperationCompletedHandler@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@U?$disconnect_aware_handler@$00U?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@3@@Z @ 0x1805BA5C8 (--$-0U-$disconnect_aware_handler@$00U-$await_adapter@U-$IAsyncOperation@U-$IReference@_N@Foundat.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,1>::register_completed_callback(
        __int64 a1,
        __int64 a2)
{
  __int64 *v4; // rdi
  __int64 v5; // rcx
  int v6; // eax
  char v7; // bl
  __int64 v9; // [rsp+20h] [rbp-50h] BYREF
  int v10; // [rsp+28h] [rbp-48h] BYREF
  __int64 v11[4]; // [rsp+30h] [rbp-40h] BYREF
  int v12; // [rsp+50h] [rbp-20h] BYREF
  __int128 v13; // [rsp+58h] [rbp-18h]

  v4 = *(__int64 **)(a1 + 8);
  winrt::impl::resume_apartment_context::resume_apartment_context((winrt::impl::resume_apartment_context *)v11);
  v11[2] = a1;
  v11[3] = a2;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::IReference<bool>>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::IReference<bool>>(
    &v9,
    v11);
  v5 = *v4;
  v12 = 0;
  v13 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, v9);
  winrt::check_hresult(&v10, v6, (__int64)&v12);
  if ( v9 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v9);
  v7 = *(_BYTE *)(a1 + 24);
  *(_BYTE *)(a1 + 24) = 0;
  return v7;
}
