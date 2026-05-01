/*
 * XREFs of _anonymous_namespace_::TryLoadLogoImageStream @ 0x1805EBEC8
 * Callers:
 *     _anonymous_namespace_::TryGetPackagedAppTileLogo @ 0x1805EB290 (_anonymous_namespace_--TryGetPackagedAppTileLogo.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z @ 0x18013A340 (-check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?Value@?$consume_Windows_Foundation_Collections_IKeyValuePair@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@5@UIRandomAccessStream@Streams@Storage@45@@impl@winrt@@QEBA@XZ @ 0x180355EB0 (-Value@-$consume_Windows_Foundation_Collections_IKeyValuePair@U-$IKeyValuePair@ULogoInfo@LogoLoa.c)
 *     ??$ActivateInstance@ULogoLoader@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AULogoLoader@LogoLoading@UnifiedTile@Shell@WindowsInternal@3@XZ @ 0x1805DE2E0 (--$ActivateInstance@ULogoLoader@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@@IActivatio.c)
 *     ??$call@P6A?AULogoLoader@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@AEBUIActivationFactory@Foundation@Windows@6@@Z@?$factory_cache_entry@ULogoLoader@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIActivationFactory@Foundation@Windows@6@@impl@winrt@@QEAA?A_P$$QEAP6A?AULogoLoader@LogoLoading@UnifiedTile@Shell@WindowsInternal@2@AEBUIActivationFactory@Foundation@Windows@2@@Z@Z @ 0x1805E166C (--$call@P6A-AULogoLoader@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@AEBUIActivationFac.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x1805E26EC (--$wait_for_completed@U-$IAsyncOperation@U-$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shel.c)
 *     ?CreateForPackageFullName@?$consume_WindowsInternal_Shell_UnifiedTile_IMRTHelperStatics@UIMRTHelperStatics@UnifiedTile@Shell@WindowsInternal@winrt@@@impl@winrt@@QEBA@AEBUUser@System@Windows@3@AEBUhstring@param@3@@Z @ 0x1805E51B4 (-CreateForPackageFullName@-$consume_WindowsInternal_Shell_UnifiedTile_IMRTHelperStatics@UIMRTHel.c)
 *     ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@234@@impl@winrt@@QEBA@XZ @ 0x1805E66C4 (-GetResults@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@U-$IKeyValuePair@ULo.c)
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805E9950 (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@UIRandomAccessStreamWithConte.c)
 */

// Hidden C++ exception states: #wind=6
winrt *__fastcall anonymous_namespace_::TryLoadLogoImageStream(
        winrt *a1,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a2,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a3)
{
  _QWORD *v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rdx
  const char *v9; // r9
  winrt *result; // rax
  struct IUnknown v11; // [rsp+20h] [rbp-68h] BYREF
  __int64 v12; // [rsp+28h] [rbp-60h] BYREF
  winrt *v13; // [rsp+30h] [rbp-58h]
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v14)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // [rsp+38h] [rbp-50h] BYREF
  __int64 v15; // [rsp+48h] [rbp-40h] BYREF
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v16; // [rsp+50h] [rbp-38h]
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v17; // [rsp+58h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  try
  {
    v13 = a1;
    v16 = a2;
    v17 = a3;
    v14 = (const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64))&qword_1808DD818;
    _InterlockedIncrement64(&qword_1808DD818);
    if ( winrt::impl::factory_cache_entry_v<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoLoader,winrt::Windows::Foundation::IActivationFactory> )
    {
      winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoLoader>(
        &winrt::impl::factory_cache_entry_v<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoLoader,winrt::Windows::Foundation::IActivationFactory>,
        &v11);
      _InterlockedDecrement64(&qword_1808DD818);
    }
    else
    {
      _InterlockedDecrement64(&qword_1808DD818);
      v14 = _lambda_cb9c074cd4f47cf0d3e01dbc2dd3609e_::_lambda_invoker_cdecl_;
      winrt::impl::factory_cache_entry<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoLoader,winrt::Windows::Foundation::IActivationFactory>::call<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoLoader (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
        (__int64)a1,
        (__int64)&v11,
        (void (__fastcall **)(__int64, __int64 *))&v14);
    }
    v6 = winrt::impl::consume_WindowsInternal_Shell_UnifiedTile_IMRTHelperStatics<winrt::WindowsInternal::Shell::UnifiedTile::IMRTHelperStatics>::CreateForPackageFullName(
           (__int64 **)&v11,
           &v15,
           (__int64 *)a2,
           (__int64 *)a3);
    v7 = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::Status((__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))v6);
    if ( !v7 )
      v7 = winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoInfo,winrt::Windows::Storage::Streams::IRandomAccessStream>>>(v6);
    winrt::impl::check_status_canceled((winrt::impl *)v7, v8);
    winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoInfo,winrt::Windows::Storage::Streams::IRandomAccessStream>>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoInfo,winrt::Windows::Storage::Streams::IRandomAccessStream>>::GetResults(
      v6,
      (winrt *)&v12);
    winrt::impl::consume_Windows_Foundation_Collections_IKeyValuePair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoInfo,winrt::Windows::Storage::Streams::IRandomAccessStream>,winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoInfo,winrt::Windows::Storage::Streams::IRandomAccessStream>::Value(
      &v12,
      a1);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a2);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a3);
    result = a1;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xFB,
      (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      v9);
    *(_QWORD *)v13 = 0LL;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(v16);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(v17);
    return v13;
  }
  return result;
}
