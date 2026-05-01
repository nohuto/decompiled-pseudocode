/*
 * XREFs of ??0TileStore@Tiles@Internal@Windows@winrt@@QEAA@AEBUUser@System@34@@Z @ 0x1802B5998
 * Callers:
 *     ?subscribe_to_services@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800A1C30 (-subscribe_to_services@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServ.c)
 *     ?Initialize@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x1801373A4 (-Initialize@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ.c)
 * Callees:
 *     ??R_lambda_89d5cc9e848954b376ddd65d03be1168_@@QEBA@AEBUIHttpFormUrlEncodedContentFactory@Http@Web@Windows@winrt@@@Z @ 0x1800B736C (--R_lambda_89d5cc9e848954b376ddd65d03be1168_@@QEBA@AEBUIHttpFormUrlEncodedContentFactory@Http@We.c)
 *     ??$call@AEAV_lambda_6df14372073018d27f98c8bc6eefd2b7_@@@?$factory_cache_entry@UTileStore@Tiles@Internal@Windows@winrt@@UITileStoreFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_6df14372073018d27f98c8bc6eefd2b7_@@@Z @ 0x180212CDC (--$call@AEAV_lambda_6df14372073018d27f98c8bc6eefd2b7_@@@-$factory_cache_entry@UTileStore@Tiles@I.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Internal::Tiles::TileStore *__fastcall winrt::Windows::Internal::Tiles::TileStore::TileStore(
        winrt::Windows::Internal::Tiles::TileStore *this,
        const struct winrt::Windows::System::User *a2)
{
  __int64 *v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v5; // [rsp+38h] [rbp+10h]

  v4 = (__int64 *)a2;
  v5 = &qword_1808DD298;
  _InterlockedIncrement64(&qword_1808DD298);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::ITileStoreFactory> )
  {
    _lambda_89d5cc9e848954b376ddd65d03be1168_::operator()(
      &v4,
      (__int64)this,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::ITileStoreFactory>);
    _InterlockedDecrement64(&qword_1808DD298);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DD298);
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::ITileStoreFactory>::call<_lambda_6df14372073018d27f98c8bc6eefd2b7_ &>(
      (__int64 *)this,
      this,
      &v4);
  }
  return this;
}
