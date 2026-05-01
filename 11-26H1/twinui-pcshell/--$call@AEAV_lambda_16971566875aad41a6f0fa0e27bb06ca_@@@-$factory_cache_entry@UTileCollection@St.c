/*
 * XREFs of ??$call@AEAV_lambda_16971566875aad41a6f0fa0e27bb06ca_@@@?$factory_cache_entry@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@UITileCollectionStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_16971566875aad41a6f0fa0e27bb06ca_@@@Z @ 0x1801E9130
 * Callers:
 *     ??$call_factory@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@UITileCollectionStatics@2345@V_lambda_16971566875aad41a6f0fa0e27bb06ca_@@@impl@winrt@@YA?A_P$$QEAV_lambda_16971566875aad41a6f0fa0e27bb06ca_@@@Z @ 0x1802BAC3C (--$call_factory@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@UITileCollectionStatics@2345@V_.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??R_lambda_706f938a80e432de8be00e3d53e53638_@@QEBA@AEBUISnapLayoutManagerStatics@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1801239AC (--R_lambda_706f938a80e432de8be00e3d53e53638_@@QEBA@AEBUISnapLayoutManagerStatics@Shell@UI@Window.c)
 *     ?ReportImpressionAsync@?$consume_WindowsUdk_Services_Iris_IIrisServiceProvider@UIIrisServiceProvider@Iris@Services@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUIrisCreative@Iris@Services@WindowsUdk@3@@Z @ 0x180124100 (-ReportImpressionAsync@-$consume_WindowsUdk_Services_Iris_IIrisServiceProvider@UIIrisServiceProv.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UITileCollectionStatics@StartScreen@UI@WindowsUdk@winrt@@@winrt@@YA?AUITileCollectionStatics@StartScreen@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x18053709C (--$get_activation_factory@UITileCollectionStatics@StartScreen@UI@WindowsUdk@winrt@@@winrt@@YA-AU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::StartScreen::TileCollection,winrt::WindowsUdk::UI::StartScreen::ITileCollectionStatics>::call<_lambda_16971566875aad41a6f0fa0e27bb06ca_ &>(
        __int64 *a1,
        _QWORD *a2,
        __int64 **a3)
{
  __int64 *v5; // rbx
  _DWORD *v7; // [rsp+28h] [rbp-28h] BYREF
  _DWORD v8[4]; // [rsp+30h] [rbp-20h] BYREF
  const wchar_t *v9; // [rsp+40h] [rbp-10h]
  __int64 *v10; // [rsp+70h] [rbp+20h] BYREF
  __int64 *v11; // [rsp+88h] [rbp+38h] BYREF

  v10 = a1;
  if ( aWindowsudkUiSt_2[40] )
    abort();
  v8[0] = 1;
  v8[1] = 40;
  v9 = L"WindowsUdk.UI.StartScreen.TileCollection";
  v7 = v8;
  winrt::get_activation_factory<winrt::WindowsUdk::UI::StartScreen::ITileCollectionStatics>(&v10, &v7);
  v5 = v10;
  if ( v10
    && (v11 = 0LL,
        (*(void (__fastcall **)(__int64 *, __int64 *, __int64 **))*v10)(
          v10,
          &winrt::impl::guid_v<winrt::impl::IAgileObject>,
          &v11),
        v11) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v11);
    v11 = &qword_1808DC278;
    _InterlockedIncrement64(&qword_1808DC278);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::StartScreen::TileCollection,winrt::WindowsUdk::UI::StartScreen::ITileCollectionStatics>,
            (signed __int64)v5,
            0LL) )
    {
      v5 = 0LL;
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DC280);
    }
    _lambda_706f938a80e432de8be00e3d53e53638_::operator()(
      a3,
      (__int64)a2,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::StartScreen::TileCollection,winrt::WindowsUdk::UI::StartScreen::ITileCollectionStatics>);
    _InterlockedDecrement64(&qword_1808DC278);
  }
  else
  {
    winrt::impl::consume_WindowsUdk_Services_Iris_IIrisServiceProvider<winrt::WindowsUdk::Services::Iris::IIrisServiceProvider>::ReportImpressionAsync(
      &v10,
      a2,
      *a3);
  }
  if ( v5 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v10);
  return a2;
}
