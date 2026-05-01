/*
 * XREFs of ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x18010D48C
 * Callers:
 *     ?QueryInterface@?$weak_ref@$00$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1802E0260 (-QueryInterface@-$weak_ref@$00$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z.c)
 *     ?query_interface_common@?$root_implements@URemoteSystemStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1802E05CC (-query_interface_common@-$root_implements@URemoteSystemStateChangedEventArgs@implementation@Shel.c)
 *     ?query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@0@Z @ 0x18031BB8C (-query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@-$abi@UIUn.c)
 *     ?query_interface_common@?$root_implements@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@U13456@UISearchAppHost2@3456@UISearchAppHost3@3456@UISearchAppHost4@3456@UISearchAppHost5@3456@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180333204 (-query_interface_common@-$root_implements@USearchAppHost@implementation@Shell@UI@WindowsUdk@winr.c)
 *     ?query_interface_common@?$root_implements@VSnapLayoutProvider@@UIInspectable@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1803DCAD8 (-query_interface_common@-$root_implements@VSnapLayoutProvider@@UIInspectable@@@impl@winrt@@AEAAH.c)
 *     ?query_interface_common@?$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlMetadataProvider@Markup@Xaml@UI@67@Ucomposing@7@UIApplicationOverrides@Xaml@UI@67@UIApplicationOverrides2@Xaml@UI@67@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18043FD1C (-query_interface_common@-$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell.c)
 *     ?query_interface_common@?$root_implements@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@UIXamlExplorerHostWindowLocal@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1804441BC (-query_interface_common@-$root_implements@UXamlExplorerHostWindow@implementation@XamlExplorerHos.c)
 *     ?query_interface_common@?$root_implements@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@U1345678@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@8@Ucomposing@8@UIApplicationOverrides@Xaml@UI@Microsoft@8@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180447720 (-query_interface_common@-$root_implements@UXamlApplication_WASDK@implementation@WASDK@XamlExplor.c)
 *     ?query_interface_common@?$root_implements@VGamingFallbackWindow@@UIInspectable@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1804E5484 (-query_interface_common@-$root_implements@VGamingFallbackWindow@@UIInspectable@@@impl@winrt@@AEA.c)
 *     winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____winrt::Windows::Foundation::IAsyncInfo_::query_interface_common @ 0x18055F5F4 (winrt--impl--root_implements_std--experimental--coroutine_traits_winrt--Windows--Fo_ea_18055F5F4.c)
 *     ?query_interface_common@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180597D90 (-query_interface_common@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent.c)
 *     winrt::impl::root_implements__anonymous_namespace_::ShellExecuteSite_IServiceProvider_ICreatingProcess_::query_interface_common @ 0x1805D5D80 (winrt--impl--root_implements__anonymous_namespace_--ShellExecuteSite_IServiceProvid_ea_1805D5D80.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WINRT_IMPL_CoCreateFreeThreadedMarshaler @ 0x1802D3468 (WINRT_IMPL_CoCreateFreeThreadedMarshaler.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::make_marshaler(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // r15
  struct IUnknownVtbl *lpVtbl; // rax
  __int64 v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // rbx
  char v10; // si
  __int64 v12; // [rsp+20h] [rbp-10h] BYREF
  __int64 v13; // [rsp+28h] [rbp-8h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+78h] [rbp+48h] BYREF
  __int64 v15; // [rsp+80h] [rbp+50h] BYREF
  __int64 v16; // [rsp+88h] [rbp+58h] BYREF

  LODWORD(ppunkMarshal) = 0;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    ppunkMarshal = 0LL;
    *v4 = `winrt::impl::make_marshaler'::`2'::marshaler::`vftable';
    v5 = v4 + 1;
    v4[1] = 0LL;
    WINRT_IMPL_CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal);
    if ( ppunkMarshal )
    {
      lpVtbl = ppunkMarshal->lpVtbl;
      v15 = 0LL;
      ((void (__fastcall *)(LPUNKNOWN, __int64 *, __int64 *))lpVtbl->QueryInterface)(
        ppunkMarshal,
        &winrt::impl::guid_v<winrt::impl::IMarshal>,
        &v15);
      v7 = v15;
      v8 = &v13;
      v9 = v12;
      v10 = 1;
    }
    else
    {
      v9 = 0LL;
      v8 = &v16;
      v12 = 0LL;
      v7 = 0LL;
      v10 = 6;
    }
    *v8 = 0LL;
    v4[2] = v7;
    if ( (v10 & 4) != 0 )
    {
      v10 &= ~4u;
      if ( v16 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v16);
    }
    if ( (v10 & 2) != 0 )
    {
      v10 &= ~2u;
      if ( v9 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v12);
    }
    if ( (v10 & 1) != 0 && v13 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v13);
    if ( ppunkMarshal )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&ppunkMarshal);
    *((_DWORD *)v4 + 6) = 1;
    if ( *v5 != a1 )
    {
      if ( *v5 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v4 + 1);
      *v5 = a1;
      if ( a1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    }
  }
  else
  {
    v4 = 0LL;
  }
  *a2 = v4;
  return v4 == 0LL ? 0x8007000E : 0;
}
