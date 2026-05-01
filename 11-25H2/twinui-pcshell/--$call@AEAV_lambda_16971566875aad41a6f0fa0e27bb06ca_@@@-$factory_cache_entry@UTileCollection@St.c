/*
 * XREFs of ??$call@AEAV_lambda_16971566875aad41a6f0fa0e27bb06ca_@@@?$factory_cache_entry@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@UITileCollectionStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_16971566875aad41a6f0fa0e27bb06ca_@@@Z @ 0x1801F27B0
 * Callers:
 *     ?RegisterUTMListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800A8DC4 (-RegisterUTMListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ??$call_factory@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@UITileCollectionStatics@2345@V_lambda_16971566875aad41a6f0fa0e27bb06ca_@@@impl@winrt@@YA?A_P$$QEAV_lambda_16971566875aad41a6f0fa0e27bb06ca_@@@Z @ 0x1802C3970 (--$call_factory@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@UITileCollectionStatics@2345@V_.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??R_lambda_706f938a80e432de8be00e3d53e53638_@@QEBA@AEBUISnapLayoutManagerStatics@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1800F1F24 (--R_lambda_706f938a80e432de8be00e3d53e53638_@@QEBA@AEBUISnapLayoutManagerStatics@Shell@UI@Window.c)
 *     ?ReportImpressionAsync@?$consume_WindowsUdk_Services_Iris_IIrisServiceProvider@UIIrisServiceProvider@Iris@Services@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUIrisCreative@Iris@Services@WindowsUdk@3@@Z @ 0x1800F25FC (-ReportImpressionAsync@-$consume_WindowsUdk_Services_Iris_IIrisServiceProvider@UIIrisServiceProv.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DBABD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UITileCollectionStatics@StartScreen@UI@WindowsUdk@winrt@@@winrt@@YA?AUITileCollectionStatics@StartScreen@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x180514998 (--$get_activation_factory@UITileCollectionStatics@StartScreen@UI@WindowsUdk@winrt@@@winrt@@YA-AU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::StartScreen::TileCollection,winrt::WindowsUdk::UI::StartScreen::ITileCollectionStatics>::call<_lambda_16971566875aad41a6f0fa0e27bb06ca_ &>(
        __int64 *a1,
        _QWORD *a2,
        __int64 **a3)
{
  __int64 *v5; // rbx
  bool v6; // zf
  __int64 v8[2]; // [rsp+28h] [rbp-38h] BYREF
  _DWORD *v9; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v10[4]; // [rsp+40h] [rbp-20h] BYREF
  const wchar_t *v11; // [rsp+50h] [rbp-10h]
  __int64 *v12; // [rsp+80h] [rbp+20h] BYREF
  __int64 v13; // [rsp+98h] [rbp+38h] BYREF

  v12 = a1;
  if ( aWindowsudkUiSt_1[40] )
    abort();
  v10[0] = 1;
  v10[1] = 40;
  v11 = L"WindowsUdk.UI.StartScreen.TileCollection";
  v9 = v10;
  winrt::get_activation_factory<winrt::WindowsUdk::UI::StartScreen::ITileCollectionStatics>(&v12, &v9);
  v5 = v12;
  if ( v12
    && (v13 = 0LL,
        (*(void (__fastcall **)(__int64 *, __int64 *, __int64 *))*v12)(
          v12,
          &winrt::impl::guid_v<winrt::impl::IAgileObject>,
          &v13),
        (v8[0] = v13) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v8);
    v8[1] = (__int64)&qword_18089BB48;
    _InterlockedIncrement64(&qword_18089BB48);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::StartScreen::TileCollection,winrt::WindowsUdk::UI::StartScreen::ITileCollectionStatics>,
            (signed __int64)v12,
            0LL) )
    {
      v12 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18089BB50);
    }
    _lambda_706f938a80e432de8be00e3d53e53638_::operator()(
      a3,
      (__int64)a2,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::StartScreen::TileCollection,winrt::WindowsUdk::UI::StartScreen::ITileCollectionStatics>);
    _InterlockedDecrement64(&qword_18089BB48);
    v6 = v12 == 0LL;
  }
  else
  {
    winrt::impl::consume_WindowsUdk_Services_Iris_IIrisServiceProvider<winrt::WindowsUdk::Services::Iris::IIrisServiceProvider>::ReportImpressionAsync(
      &v12,
      a2,
      *a3);
    v6 = v5 == 0LL;
  }
  if ( !v6 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v12);
  return a2;
}
