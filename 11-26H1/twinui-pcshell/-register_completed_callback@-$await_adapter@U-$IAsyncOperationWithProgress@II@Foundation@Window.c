/*
 * XREFs of ?register_completed_callback@?$await_adapter@U?$IAsyncOperationWithProgress@II@Foundation@Windows@winrt@@$00@impl@winrt@@AEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1806548C4
 * Callers:
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_JUhstring@4@@experimental@std@@@?$await_adapter@U?$IAsyncOperationWithProgress@II@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_JUhstring@4@@experimental@std@@@experimental@std@@@Z @ 0x180645988 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UIRandomAccessStream@Stream.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x180136284 (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??1?$disconnect_aware_handler@$00U?$await_adapter@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@winrt@@QEAA@XZ @ 0x180328E4C (--1-$disconnect_aware_handler@$00U-$await_adapter@U-$IAsyncOperation@UTileCollection@StartScreen.c)
 *     ??$make_delegate@U?$AsyncOperationWithProgressCompletedHandler@II@Foundation@Windows@winrt@@U?$disconnect_aware_handler@$00U?$await_adapter@U?$IAsyncOperationWithProgress@II@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@4@@impl@winrt@@YA?AU?$AsyncOperationWithProgressCompletedHandler@II@Foundation@Windows@1@$$QEAU?$disconnect_aware_handler@$00U?$await_adapter@U?$IAsyncOperationWithProgress@II@Foundation@Windows@winrt@@$00@impl@winrt@@@01@@Z @ 0x1806470C8 (--$make_delegate@U-$AsyncOperationWithProgressCompletedHandler@II@Foundation@Windows@winrt@@U-$d.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>,1>::register_completed_callback(
        __int64 a1,
        __int64 a2)
{
  __int64 *v4; // rdi
  __int64 v5; // rcx
  int v6; // eax
  char v7; // bl
  int v9; // [rsp+20h] [rbp-40h] BYREF
  __int128 v10; // [rsp+28h] [rbp-38h]
  __int64 v11[5]; // [rsp+38h] [rbp-28h] BYREF
  __int64 *v12; // [rsp+80h] [rbp+20h] BYREF
  __int64 v13; // [rsp+88h] [rbp+28h] BYREF

  v4 = *(__int64 **)(a1 + 8);
  winrt::impl::resume_apartment_context::resume_apartment_context((winrt::impl::resume_apartment_context *)v11);
  v11[2] = a1;
  v11[3] = a2;
  v12 = v11;
  winrt::impl::make_delegate<winrt::Windows::Foundation::AsyncOperationWithProgressCompletedHandler<unsigned int,unsigned int>,winrt::impl::disconnect_aware_handler<1,winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>,1>>>(
    &v13,
    v11);
  winrt::impl::disconnect_aware_handler<1,winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,1>>::~disconnect_aware_handler<1,winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,1>>(v11);
  v5 = *v4;
  v9 = 0;
  v10 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 64LL))(v5, v13);
  winrt::check_hresult((int *)&v12, v6, (__int64)&v9);
  if ( v13 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v13);
  v7 = *(_BYTE *)(a1 + 24);
  *(_BYTE *)(a1 + 24) = 0;
  return v7;
}
