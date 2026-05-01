/*
 * XREFs of ??$as@UShellAnimationCoordinator@Animations@Shell@Internal@Windows@winrt@@U1implementation@23456@$0A@@impl@winrt@@YA?AUShellAnimationCoordinator@Animations@Shell@Internal@Windows@1@PEAU2implementation@34561@@Z @ 0x1802AA1D0
 * Callers:
 *     ?Create@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@SA?AU134567@XZ @ 0x1801D1B54 (-Create@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@SA-AU1.c)
 *     ?InitializeEdgyRelationshipManager@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1802AA138 (-InitializeEdgyRelationshipManager@ShellAnimationCoordinator@implementation@Animations@Shell@Int.c)
 * Callees:
 *     ?AddRef@?$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@QEAAIXZ @ 0x1801C7F30 (-AddRef@-$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?query_interface_common@?$root_implements@URemoteSystemStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1802E05CC (-query_interface_common@-$root_implements@URemoteSystemStateChangedEventArgs@implementation@Shel.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall winrt::impl::as<winrt::Windows::Internal::Shell::Animations::ShellAnimationCoordinator,winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator,0>(
        __int64 *a1,
        __int64 *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  int v7; // [rsp+28h] [rbp-20h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h]
  char v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  if ( a2 )
  {
    v5 = *a2;
    v7 = 0;
    v8 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v5 + 48))(
            a2,
            &winrt::impl::guid_v<winrt::Windows::Internal::Shell::Animations::IShellAnimationCoordinator>);
    if ( v10 )
      winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef((__int64)a2);
    else
      v2 = winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs,winrt::Windows::Internal::Shell::RemoteSystemStateChangedEventArgs>::query_interface_common(
             a2,
             &winrt::impl::guid_v<winrt::Windows::Internal::Shell::Animations::IShellAnimationCoordinator>,
             &v10);
    winrt::check_hresult(&v9, v2, &v7);
    *a1 = v10;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
