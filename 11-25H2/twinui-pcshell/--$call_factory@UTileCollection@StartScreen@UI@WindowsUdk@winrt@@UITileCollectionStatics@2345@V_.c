/*
 * XREFs of ??$call_factory@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@UITileCollectionStatics@2345@V_lambda_16971566875aad41a6f0fa0e27bb06ca_@@@impl@winrt@@YA?A_P$$QEAV_lambda_16971566875aad41a6f0fa0e27bb06ca_@@@Z @ 0x1802C3970
 * Callers:
 *     ?CreateAsync@TileCollection@StartScreen@UI@WindowsUdk@winrt@@SA@AEBUTileCollectionCreateOptions@2345@@Z @ 0x18022176C (-CreateAsync@TileCollection@StartScreen@UI@WindowsUdk@winrt@@SA@AEBUTileCollectionCreateOptions@.c)
 * Callees:
 *     ??R_lambda_706f938a80e432de8be00e3d53e53638_@@QEBA@AEBUISnapLayoutManagerStatics@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1800F1F24 (--R_lambda_706f938a80e432de8be00e3d53e53638_@@QEBA@AEBUISnapLayoutManagerStatics@Shell@UI@Window.c)
 *     ??$call@AEAV_lambda_16971566875aad41a6f0fa0e27bb06ca_@@@?$factory_cache_entry@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@UITileCollectionStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_16971566875aad41a6f0fa0e27bb06ca_@@@Z @ 0x1801F27B0 (--$call@AEAV_lambda_16971566875aad41a6f0fa0e27bb06ca_@@@-$factory_cache_entry@UTileCollection@St.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::call_factory<winrt::WindowsUdk::UI::StartScreen::TileCollection,winrt::WindowsUdk::UI::StartScreen::ITileCollectionStatics,_lambda_16971566875aad41a6f0fa0e27bb06ca_>(
        _QWORD *a1,
        __int64 **a2)
{
  _InterlockedIncrement64(&qword_18089BB48);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::StartScreen::TileCollection,winrt::WindowsUdk::UI::StartScreen::ITileCollectionStatics> )
  {
    _lambda_706f938a80e432de8be00e3d53e53638_::operator()(
      a2,
      (__int64)a1,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::StartScreen::TileCollection,winrt::WindowsUdk::UI::StartScreen::ITileCollectionStatics>);
    _InterlockedDecrement64(&qword_18089BB48);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089BB48);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::StartScreen::TileCollection,winrt::WindowsUdk::UI::StartScreen::ITileCollectionStatics>::call<_lambda_16971566875aad41a6f0fa0e27bb06ca_ &>(
      &qword_18089BB48,
      a1,
      a2);
  }
  return a1;
}
