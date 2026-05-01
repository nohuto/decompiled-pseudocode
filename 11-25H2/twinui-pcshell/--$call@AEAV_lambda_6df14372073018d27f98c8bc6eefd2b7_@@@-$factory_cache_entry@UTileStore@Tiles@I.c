/*
 * XREFs of ??$call@AEAV_lambda_6df14372073018d27f98c8bc6eefd2b7_@@@?$factory_cache_entry@UTileStore@Tiles@Internal@Windows@winrt@@UITileStoreFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_6df14372073018d27f98c8bc6eefd2b7_@@@Z @ 0x18022157C
 * Callers:
 *     ??0TileStore@Tiles@Internal@Windows@winrt@@QEAA@AEBUUser@System@34@@Z @ 0x1802C004C (--0TileStore@Tiles@Internal@Windows@winrt@@QEAA@AEBUUser@System@34@@Z.c)
 * Callees:
 *     ?Parse@?$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18005D0B4 (-Parse@-$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winr.c)
 *     ??R_lambda_89d5cc9e848954b376ddd65d03be1168_@@QEBA@AEBUIHttpFormUrlEncodedContentFactory@Http@Web@Windows@winrt@@@Z @ 0x18005D510 (--R_lambda_89d5cc9e848954b376ddd65d03be1168_@@QEBA@AEBUIHttpFormUrlEncodedContentFactory@Http@We.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DBABD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UITileStoreFactory@Tiles@Internal@Windows@winrt@@@winrt@@YA?AUITileStoreFactory@Tiles@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x180558E9C (--$get_activation_factory@UITileStoreFactory@Tiles@Internal@Windows@winrt@@@winrt@@YA-AUITileSto.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::ITileStoreFactory>::call<_lambda_6df14372073018d27f98c8bc6eefd2b7_ &>(
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
  v10[0] = 1;
  v10[1] = 32;
  v11 = L"Windows.Internal.Tiles.TileStore";
  v9 = v10;
  winrt::get_activation_factory<winrt::Windows::Internal::Tiles::ITileStoreFactory>(&v12, &v9);
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
    v8[1] = (__int64)&qword_18089CBD8;
    _InterlockedIncrement64(&qword_18089CBD8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::ITileStoreFactory>,
            (signed __int64)v12,
            0LL) )
    {
      v12 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18089CBE0);
    }
    _lambda_89d5cc9e848954b376ddd65d03be1168_::operator()(
      a3,
      a2,
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::ITileStoreFactory>);
    _InterlockedDecrement64(&qword_18089CBD8);
    v6 = v12 == 0LL;
  }
  else
  {
    winrt::impl::consume_Windows_Data_Json_IJsonObjectStatics<winrt::Windows::Data::Json::IJsonObjectStatics>::Parse(
      &v12,
      a2,
      *a3);
    v6 = v5 == 0LL;
  }
  if ( !v6 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v12);
  return a2;
}
