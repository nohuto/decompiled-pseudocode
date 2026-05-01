/*
 * XREFs of ??$as@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@U123@$0A@@impl@winrt@@YA?AU?$com_ptr@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@1@PEAUTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@Z @ 0x180465F14
 * Callers:
 *     ??R?$__func@V_lambda_27e2a3ac73e95be6f7403a2f326512f5_@@$$A6AXXZ@__function@wistd@@UEAAXXZ @ 0x18046B570 (--R-$__func@V_lambda_27e2a3ac73e95be6f7403a2f326512f5_@@$$A6AXXZ@__function@wistd@@UEAAXXZ.c)
 *     ??R?$__func@V_lambda_919ed0165ca58c719ea15f04406310d9_@@$$A6AXAEBK@Z@__function@wistd@@UEAAXAEBK@Z @ 0x18046B660 (--R-$__func@V_lambda_919ed0165ca58c719ea15f04406310d9_@@$$A6AXAEBK@Z@__function@wistd@@UEAAXAEBK.c)
 * Callees:
 *     ?AddRef@?$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@QEAAIXZ @ 0x1800E6A6C (-AddRef@-$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?query_interface_common@?$root_implements@URemoteSystemStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1802D93E4 (-query_interface_common@-$root_implements@URemoteSystemStateChangedEventArgs@implementation@Shel.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall winrt::impl::as<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,0>(
        __int64 *a1,
        volatile signed __int64 *a2)
{
  int v2; // ebx
  volatile signed __int64 v5; // rax
  int v7; // [rsp+28h] [rbp-20h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  if ( a2 )
  {
    v5 = *a2;
    v7 = 0;
    v8 = 0LL;
    v10 = (*(__int64 (__fastcall **)(volatile signed __int64 *, __int64 *))(v5 + 48))(
            a2,
            &winrt::impl::guid_v<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting>);
    if ( v10 )
      winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef((__int64)a2);
    else
      v2 = winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs,winrt::Windows::Internal::Shell::RemoteSystemStateChangedEventArgs>::query_interface_common(
             a2,
             &winrt::impl::guid_v<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting>,
             &v10);
    winrt::check_hresult(&v9, v2, (__int64)&v7);
    *a1 = (v10 - 16) & -(__int64)(v10 != 0);
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
