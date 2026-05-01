/*
 * XREFs of ?query_interface_common@?$root_implements@VGamingFallbackWindow@@UIInspectable@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1804E5484
 * Callers:
 *     ?query_interface@?$root_implements@VGamingFallbackWindow@@UIInspectable@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1804E541C (-query_interface@-$root_implements@VGamingFallbackWindow@@UIInspectable@@@impl@winrt@@AEAAHAEBUg.c)
 * Callees:
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x18010D48C (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ?make_weak_ref@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@Uhstring@4@U64@UPackageVersion@ApplicationModel@34@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@V9std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18024210C (-make_weak_ref@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windo.c)
 *     ?AddRef@?$root_implements@VGamingFallbackWindow@@UIInspectable@@@impl@winrt@@QEAAIXZ @ 0x180294780 (-AddRef@-$root_implements@VGamingFallbackWindow@@UIInspectable@@@impl@winrt@@QEAAIXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<GamingFallbackWindow,IInspectable>::query_interface_common(
        volatile signed __int64 *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 weak_ref; // rax
  __int64 v7; // rax

  if ( *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown> && a2[1] == 0x46000000000000C0LL )
    goto LABEL_3;
  if ( *a2 == winrt::impl::guid_v<winrt::impl::IWeakReferenceSource> && a2[1] == 0x46000000000000C0LL )
  {
    weak_ref = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref(a1);
    *a3 = weak_ref;
    return weak_ref == 0 ? 0x8007000E : 0;
  }
  else
  {
    if ( *a2 == winrt::impl::guid_v<winrt::impl::IAgileObject> && a2[1] == 0x905B8FCA64EEFFC0uLL )
    {
LABEL_3:
      *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      winrt::impl::root_implements<GamingFallbackWindow,IInspectable>::AddRef((__int64)a1);
      return 0LL;
    }
    if ( *a2 == winrt::impl::guid_v<winrt::impl::IMarshal> && a2[1] == 0x46000000000000C0LL )
    {
      v7 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      return winrt::impl::make_marshaler(v7, a3);
    }
    else
    {
      return (**(__int64 (__fastcall ***)(volatile signed __int64 *))a1)(a1);
    }
  }
}
