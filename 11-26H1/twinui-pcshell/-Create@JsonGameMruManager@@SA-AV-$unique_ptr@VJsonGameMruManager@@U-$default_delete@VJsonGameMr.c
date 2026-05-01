/*
 * XREFs of ?Create@JsonGameMruManager@@SA?AV?$unique_ptr@VJsonGameMruManager@@U?$default_delete@VJsonGameMruManager@@@std@@@std@@V?$basic_string_view@GU?$char_traits@G@std@@@3@E@Z @ 0x180139E90
 * Callers:
 *     ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x1800C53F0 (-CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Construct@$01PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031D64 (--$_Construct@$01PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180032474 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 *     ?_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z @ 0x1800327E0 (-_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z.c)
 *     ?Parse@?$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1800B74D4 (-Parse@-$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winr.c)
 *     ?parent_path@path@filesystem@std@@QEBA?AV123@XZ @ 0x18013A1D8 (-parent_path@path@filesystem@std@@QEBA-AV123@XZ.c)
 *     ?check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z @ 0x18013A340 (-check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z.c)
 *     ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@UWindowTabDataModel@Shell@UI@Internal@34@@impl@winrt@@QEBA@XZ @ 0x18013A380 (-GetResults@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UWindowTabDataModel@.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@UStorageFolder@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@UStorageFolder@Storage@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x18013A4C8 (--$wait_for_completed@U-$IAsyncOperation@UStorageFolder@Storage@Windows@winrt@@@Foundation@Windo.c)
 *     ??$call@AEAV_lambda_0ba328cd2edd55f5ab6423f6a7e8dff9_@@@?$factory_cache_entry@UStorageFolder@Storage@Windows@winrt@@UIStorageFolderStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_0ba328cd2edd55f5ab6423f6a7e8dff9_@@@Z @ 0x18013A568 (--$call@AEAV_lambda_0ba328cd2edd55f5ab6423f6a7e8dff9_@@@-$factory_cache_entry@UStorageFolder@Sto.c)
 *     ??0JsonGameMruManager@@AEAA@UStorageFolder@Storage@Windows@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@E@Z @ 0x18013A870 (--0JsonGameMruManager@@AEAA@UStorageFolder@Storage@Windows@winrt@@V-$basic_string@GU-$char_trait.c)
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18027F280 (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=13 #try_helpers=1
__int64 *__fastcall JsonGameMruManager::Create(__int64 *a1, __int128 *a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // r8
  __int128 *v5; // rcx
  unsigned int v6; // eax
  enum AsyncStatus v7; // edx
  const unsigned __int16 *v8; // r8
  std::filesystem *v9; // rcx
  __int64 v10; // r11
  __int128 *v11; // rdx
  void *v12; // rdi
  __int128 *v13; // rdx
  __int64 v14; // rax
  __int64 v16[2]; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v17; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v18; // [rsp+40h] [rbp-D8h] BYREF
  _QWORD v19[3]; // [rsp+48h] [rbp-D0h] BYREF
  __int128 v20; // [rsp+60h] [rbp-B8h] BYREF
  unsigned __int64 v21; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v22; // [rsp+78h] [rbp-A0h]
  __int128 v23; // [rsp+80h] [rbp-98h] BYREF
  unsigned __int64 v24; // [rsp+90h] [rbp-88h]
  unsigned __int64 v25; // [rsp+98h] [rbp-80h]
  __int128 v26; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v27; // [rsp+B0h] [rbp-68h]
  std::filesystem *v28[4]; // [rsp+C0h] [rbp-58h] BYREF
  _QWORD v29[4]; // [rsp+E0h] [rbp-38h] BYREF

  v19[1] = a1;
  v17 = *a2;
  std::wstring::wstring((__int64)v28, (__int64)&v17);
  v3 = std::filesystem::path::parent_path(v28, v29);
  v26 = 0LL;
  v27 = 0LL;
  v4 = *(_QWORD *)(v3 + 16);
  if ( *(_QWORD *)(v3 + 24) > 7uLL )
    v3 = *(_QWORD *)v3;
  std::wstring::_Construct<2,unsigned short const *>(&v26, (_OWORD *)v3, v4);
  v5 = &v26;
  if ( *((_QWORD *)&v27 + 1) > 7uLL )
    v5 = (__int128 *)v26;
  if ( (_DWORD)v27 )
  {
    if ( *((_WORD *)v5 + (unsigned int)v27) )
      abort();
    DWORD2(v20) = 1;
    HIDWORD(v20) = v27;
    v22 = (unsigned __int64)v5;
    *(_QWORD *)&v20 = (char *)&v20 + 8;
  }
  else
  {
    *(_QWORD *)&v20 = 0LL;
  }
  v19[0] = &v20;
  *(_QWORD *)&v17 = &qword_1808DB208;
  _InterlockedIncrement64(&qword_1808DB208);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::StorageFolder,winrt::Windows::Storage::IStorageFolderStatics> )
  {
    winrt::impl::consume_Windows_Data_Json_IJsonObjectStatics<winrt::Windows::Data::Json::IJsonObjectStatics>::Parse(
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::StorageFolder,winrt::Windows::Storage::IStorageFolderStatics>,
      v16,
      (__int64 *)&v20);
    _InterlockedDecrement64(&qword_1808DB208);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DB208);
    winrt::impl::factory_cache_entry<winrt::Windows::Storage::StorageFolder,winrt::Windows::Storage::IStorageFolderStatics>::call<_lambda_0ba328cd2edd55f5ab6423f6a7e8dff9_ &>(
      v5,
      v16,
      v19);
  }
  v6 = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<bool>>::Status(v16);
  if ( !v6 )
    v6 = winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::StorageFolder>>(v16);
  winrt::impl::check_status_canceled((winrt::impl *)v6, v7);
  winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Internal::UI::Shell::WindowTabDataModel>,winrt::Windows::Internal::UI::Shell::WindowTabDataModel>::GetResults(
    v16,
    &v18);
  if ( v16[0] )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v16);
  std::wstring::_Tidy_deallocate(&v26);
  std::wstring::_Tidy_deallocate(v29);
  v9 = (std::filesystem *)v28;
  if ( v28[3] > (std::filesystem *)7 )
    v9 = v28[0];
  *(_QWORD *)&v17 = std::filesystem::_Find_filename(v9, (const unsigned __int16 *)v9 + (__int64)v28[2], v8);
  *((_QWORD *)&v17 + 1) = (v10 - (__int64)v17) >> 1;
  std::wstring::wstring((__int64)&v23, (__int64)&v17);
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v11 = &v23;
  if ( v25 > 7 )
    v11 = (__int128 *)v23;
  std::wstring::_Construct<2,unsigned short const *>(&v20, v11, v24);
  std::wstring::_Tidy_deallocate(&v23);
  v12 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  *(_QWORD *)&v17 = v12;
  if ( v12 )
  {
    v23 = 0LL;
    v24 = 0LL;
    v25 = 0LL;
    v13 = &v20;
    if ( v22 > 7 )
      v13 = (__int128 *)v20;
    std::wstring::_Construct<2,unsigned short const *>(&v23, v13, v21);
    v16[0] = v18;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v16);
    v14 = JsonGameMruManager::JsonGameMruManager(v12, v16, &v23);
  }
  else
  {
    v14 = 0LL;
  }
  *a1 = v14;
  std::wstring::_Tidy_deallocate(&v20);
  if ( v18 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v18);
  std::wstring::_Tidy_deallocate(v28);
  return a1;
}
