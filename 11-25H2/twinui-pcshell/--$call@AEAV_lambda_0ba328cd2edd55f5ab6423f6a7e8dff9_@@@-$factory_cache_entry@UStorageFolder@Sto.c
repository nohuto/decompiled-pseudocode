/*
 * XREFs of ??$call@AEAV_lambda_0ba328cd2edd55f5ab6423f6a7e8dff9_@@@?$factory_cache_entry@UStorageFolder@Storage@Windows@winrt@@UIStorageFolderStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_0ba328cd2edd55f5ab6423f6a7e8dff9_@@@Z @ 0x18005CF6C
 * Callers:
 *     ?Create@JsonGameMruManager@@SA?AV?$unique_ptr@VJsonGameMruManager@@U?$default_delete@VJsonGameMruManager@@@std@@@std@@V?$basic_string_view@GU?$char_traits@G@std@@@3@E@Z @ 0x18005C9BC (-Create@JsonGameMruManager@@SA-AV-$unique_ptr@VJsonGameMruManager@@U-$default_delete@VJsonGameMr.c)
 * Callees:
 *     ?Parse@?$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18005D0B4 (-Parse@-$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winr.c)
 *     ??$get_activation_factory@UIStorageFolderStatics@Storage@Windows@winrt@@@winrt@@YA?AUIStorageFolderStatics@Storage@Windows@0@AEBUhstring@param@0@@Z @ 0x18005D118 (--$get_activation_factory@UIStorageFolderStatics@Storage@Windows@winrt@@@winrt@@YA-AUIStorageFol.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??R_lambda_89d5cc9e848954b376ddd65d03be1168_@@QEBA@AEBUIHttpFormUrlEncodedContentFactory@Http@Web@Windows@winrt@@@Z @ 0x18005D510 (--R_lambda_89d5cc9e848954b376ddd65d03be1168_@@QEBA@AEBUIHttpFormUrlEncodedContentFactory@Http@We.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DBABD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Storage::StorageFolder,winrt::Windows::Storage::IStorageFolderStatics>::call<_lambda_0ba328cd2edd55f5ab6423f6a7e8dff9_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        _QWORD *a3)
{
  void (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rbx
  _QWORD v7[2]; // [rsp+28h] [rbp-38h] BYREF
  _DWORD *v8; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v9[4]; // [rsp+40h] [rbp-20h] BYREF
  const wchar_t *v10; // [rsp+50h] [rbp-10h]
  void (__fastcall ***v11)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+20h] BYREF
  __int64 v12; // [rsp+98h] [rbp+38h] BYREF

  v11 = a1;
  if ( aWindowsStorage_3[29] )
    abort();
  v9[0] = 1;
  v9[1] = 29;
  v10 = L"Windows.Storage.StorageFolder";
  v8 = v9;
  winrt::get_activation_factory<winrt::Windows::Storage::IStorageFolderStatics>(&v11, &v8);
  v5 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v11;
  if ( v11 && (v12 = 0LL, (**v11)(v11, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v12), (v7[0] = v12) != 0LL) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v7);
    v7[1] = &qword_18089AB18;
    _InterlockedIncrement64(&qword_18089AB18);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::StorageFolder,winrt::Windows::Storage::IStorageFolderStatics>,
            (signed __int64)v11,
            0LL) )
    {
      v11 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &ListEntry);
    }
    _lambda_89d5cc9e848954b376ddd65d03be1168_::operator()(
      a3,
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::StorageFolder,winrt::Windows::Storage::IStorageFolderStatics>);
    _InterlockedDecrement64(&qword_18089AB18);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
  }
  else
  {
    winrt::impl::consume_Windows_Data_Json_IJsonObjectStatics<winrt::Windows::Data::Json::IJsonObjectStatics>::Parse(
      &v11,
      a2,
      *a3);
    if ( v5 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v11);
  }
  return a2;
}
