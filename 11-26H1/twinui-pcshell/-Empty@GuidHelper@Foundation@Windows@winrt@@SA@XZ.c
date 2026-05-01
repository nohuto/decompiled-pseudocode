/*
 * XREFs of ?Empty@GuidHelper@Foundation@Windows@winrt@@SA@XZ @ 0x1802A1704
 * Callers:
 *     ?OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelActiveTabChangedEventArgs@38456@@Z @ 0x180265390 (-OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTa.c)
 * Callees:
 *     ?Id@?$consume_Windows_Internal_Tiles_ITileNotification@UITileNotification@Tiles@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002AB30 (-Id@-$consume_Windows_Internal_Tiles_ITileNotification@UITileNotification@Tiles@Internal@Windows.c)
 *     ??$call@P6A?AUguid@winrt@@AEBUIGuidHelperStatics@Foundation@Windows@2@@Z@?$factory_cache_entry@UGuidHelper@Foundation@Windows@winrt@@UIGuidHelperStatics@234@@impl@winrt@@QEAA?A_P$$QEAP6A?AUguid@2@AEBUIGuidHelperStatics@Foundation@Windows@2@@Z@Z @ 0x18033F2D0 (--$call@P6A-AUguid@winrt@@AEBUIGuidHelperStatics@Foundation@Windows@2@@Z@-$factory_cache_entry@U.c)
 */

_OWORD *__fastcall winrt::Windows::Foundation::GuidHelper::Empty(_OWORD *a1)
{
  __int64 *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = &qword_1808D9F68;
  _InterlockedIncrement64(&qword_1808D9F68);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::GuidHelper,winrt::Windows::Foundation::IGuidHelperStatics> )
  {
    winrt::impl::consume_Windows_Internal_Tiles_ITileNotification<winrt::Windows::Internal::Tiles::ITileNotification>::Id(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::GuidHelper,winrt::Windows::Foundation::IGuidHelperStatics>,
      a1);
    _InterlockedDecrement64(&qword_1808D9F68);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808D9F68);
    v3 = (__int64 *)_lambda_c3d528fab69363bea486f57b2866680a_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Foundation::GuidHelper,winrt::Windows::Foundation::IGuidHelperStatics>::call<winrt::guid (*)(winrt::Windows::Foundation::IGuidHelperStatics const &)>(
      a1,
      a1,
      &v3);
  }
  return a1;
}
