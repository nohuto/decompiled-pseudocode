/*
 * XREFs of ??$call@AEAV_lambda_6df14372073018d27f98c8bc6eefd2b7_@@@?$factory_cache_entry@UTileStore@Tiles@Internal@Windows@winrt@@UITileStoreFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_6df14372073018d27f98c8bc6eefd2b7_@@@Z @ 0x180212CDC
 * Callers:
 *     ??0TileStore@Tiles@Internal@Windows@winrt@@QEAA@AEBUUser@System@34@@Z @ 0x1802B5998 (--0TileStore@Tiles@Internal@Windows@winrt@@QEAA@AEBUUser@System@34@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??R_lambda_89d5cc9e848954b376ddd65d03be1168_@@QEBA@AEBUIHttpFormUrlEncodedContentFactory@Http@Web@Windows@winrt@@@Z @ 0x1800B736C (--R_lambda_89d5cc9e848954b376ddd65d03be1168_@@QEBA@AEBUIHttpFormUrlEncodedContentFactory@Http@We.c)
 *     ?Parse@?$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1800B74D4 (-Parse@-$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winr.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UITileStoreFactory@Tiles@Internal@Windows@winrt@@@winrt@@YA?AUITileStoreFactory@Tiles@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x18057CF9C (--$get_activation_factory@UITileStoreFactory@Tiles@Internal@Windows@winrt@@@winrt@@YA-AUITileSto.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::ITileStoreFactory>::call<_lambda_6df14372073018d27f98c8bc6eefd2b7_ &>(
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
  v8[0] = 1;
  v8[1] = 32;
  v9 = L"Windows.Internal.Tiles.TileStore";
  v7 = v8;
  winrt::get_activation_factory<winrt::Windows::Internal::Tiles::ITileStoreFactory>(&v10, &v7);
  v5 = v10;
  v11 = 0LL;
  if ( v10
    && ((*(void (__fastcall **)(__int64 *, __int64 *, __int64 **))*v10)(
          v10,
          &winrt::impl::guid_v<winrt::impl::IAgileObject>,
          &v11),
        v11) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v11);
    v11 = &qword_1808DD298;
    _InterlockedIncrement64(&qword_1808DD298);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::ITileStoreFactory>,
            (signed __int64)v5,
            0LL) )
    {
      v5 = 0LL;
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DD2A0);
    }
    _lambda_89d5cc9e848954b376ddd65d03be1168_::operator()(
      a3,
      (__int64)a2,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::ITileStoreFactory>);
    _InterlockedDecrement64(&qword_1808DD298);
  }
  else
  {
    winrt::impl::consume_Windows_Data_Json_IJsonObjectStatics<winrt::Windows::Data::Json::IJsonObjectStatics>::Parse(
      &v10,
      a2,
      *a3);
  }
  if ( v5 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v10);
  return a2;
}
