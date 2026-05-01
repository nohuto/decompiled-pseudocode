/*
 * XREFs of ?Create@JsonGameMruManager@@SA?AV?$unique_ptr@VJsonGameMruManager@@U?$default_delete@VJsonGameMruManager@@@std@@@std@@V?$basic_string_view@GU?$char_traits@G@std@@@3@E@Z @ 0x18005C9BC
 * Callers:
 *     ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x1800B0FCC (-CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18005A55C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Convert_stringoid_to_wide@U_Normal_conversion@filesystem@std@@@filesystem@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@V?$basic_string_view@GU?$char_traits@G@std@@@1@U_Normal_conversion@01@@Z @ 0x18005B0F0 (--$_Convert_stringoid_to_wide@U_Normal_conversion@filesystem@std@@@filesystem@std@@YA-AV-$basic_.c)
 *     ?_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z @ 0x18005BE18 (-_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z.c)
 *     ?parent_path@path@filesystem@std@@QEBA?AV123@XZ @ 0x18005BF74 (-parent_path@path@filesystem@std@@QEBA-AV123@XZ.c)
 *     ?check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z @ 0x18005CD48 (-check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z.c)
 *     ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@UWindowTabDataModel@Shell@UI@Internal@34@@impl@winrt@@QEBA@XZ @ 0x18005CD88 (-GetResults@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UWindowTabDataModel@.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@UStorageFolder@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@UStorageFolder@Storage@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x18005CECC (--$wait_for_completed@U-$IAsyncOperation@UStorageFolder@Storage@Windows@winrt@@@Foundation@Windo.c)
 *     ??$call@AEAV_lambda_0ba328cd2edd55f5ab6423f6a7e8dff9_@@@?$factory_cache_entry@UStorageFolder@Storage@Windows@winrt@@UIStorageFolderStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_0ba328cd2edd55f5ab6423f6a7e8dff9_@@@Z @ 0x18005CF6C (--$call@AEAV_lambda_0ba328cd2edd55f5ab6423f6a7e8dff9_@@@-$factory_cache_entry@UStorageFolder@Sto.c)
 *     ?Parse@?$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18005D0B4 (-Parse@-$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winr.c)
 *     ??0JsonGameMruManager@@AEAA@UStorageFolder@Storage@Windows@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@E@Z @ 0x18005D17C (--0JsonGameMruManager@@AEAA@UStorageFolder@Storage@Windows@winrt@@V-$basic_string@GU-$char_trait.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180287DF0 (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=13 #try_helpers=1
__int64 *__fastcall JsonGameMruManager::Create(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rcx
  const unsigned __int16 *v4; // r8
  _QWORD *v5; // rdx
  void **v6; // rcx
  unsigned int v7; // eax
  enum AsyncStatus v8; // edx
  const unsigned __int16 *v9; // r8
  std::filesystem *v10; // rcx
  __int64 v11; // r11
  void *v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  _QWORD v16[2]; // [rsp+20h] [rbp-128h] BYREF
  __int128 v17; // [rsp+30h] [rbp-118h] BYREF
  __int64 v18; // [rsp+40h] [rbp-108h] BYREF
  _DWORD **v19; // [rsp+48h] [rbp-100h] BYREF
  __int128 v20; // [rsp+50h] [rbp-F8h]
  __int64 *v21; // [rsp+60h] [rbp-E8h]
  _DWORD *v22; // [rsp+70h] [rbp-D8h] BYREF
  _DWORD v23[4]; // [rsp+78h] [rbp-D0h] BYREF
  void **v24; // [rsp+88h] [rbp-C0h]
  std::filesystem *v25[4]; // [rsp+90h] [rbp-B8h] BYREF
  void *v26[2]; // [rsp+B0h] [rbp-98h] BYREF
  unsigned int v27; // [rsp+C0h] [rbp-88h]
  unsigned __int64 v28; // [rsp+C8h] [rbp-80h]
  void *v29[4]; // [rsp+D0h] [rbp-78h] BYREF
  void *v30[4]; // [rsp+F0h] [rbp-58h] BYREF
  void *v31[4]; // [rsp+110h] [rbp-38h] BYREF

  v21 = a1;
  v3 = a2[1];
  *(_QWORD *)&v17 = *a2;
  *((_QWORD *)&v17 + 1) = v3;
  std::filesystem::_Convert_stringoid_to_wide<std::filesystem::_Normal_conversion>(v25, &v17);
  v5 = std::filesystem::path::parent_path((std::filesystem *)v25, v31, v4);
  std::wstring::wstring((__int64)v26, (__int64)v5);
  v6 = v26;
  if ( v28 > 7 )
    v6 = (void **)v26[0];
  if ( v27 )
  {
    if ( *((_WORD *)v6 + v27) )
      abort();
    v23[0] = 1;
    v23[1] = v27;
    v24 = v6;
    v22 = v23;
  }
  else
  {
    v22 = 0LL;
  }
  v19 = &v22;
  *(_QWORD *)&v20 = &qword_18089AB18;
  _InterlockedIncrement64(&qword_18089AB18);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::StorageFolder,winrt::Windows::Storage::IStorageFolderStatics> )
  {
    winrt::impl::consume_Windows_Data_Json_IJsonObjectStatics<winrt::Windows::Data::Json::IJsonObjectStatics>::Parse(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::StorageFolder,winrt::Windows::Storage::IStorageFolderStatics>,
      v16,
      &v22);
    _InterlockedDecrement64(&qword_18089AB18);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089AB18);
    winrt::impl::factory_cache_entry<winrt::Windows::Storage::StorageFolder,winrt::Windows::Storage::IStorageFolderStatics>::call<_lambda_0ba328cd2edd55f5ab6423f6a7e8dff9_ &>(
      v6,
      v16,
      &v19);
  }
  v7 = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<bool>>::Status(v16);
  if ( !v7 )
    v7 = winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::StorageFolder>>(v16);
  winrt::impl::check_status_canceled((winrt::impl *)v7, v8);
  winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Internal::UI::Shell::WindowTabDataModel>,winrt::Windows::Internal::UI::Shell::WindowTabDataModel>::GetResults(
    v16,
    &v18);
  if ( v16[0] )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v16);
  std::wstring::_Tidy_deallocate(v26);
  std::wstring::_Tidy_deallocate(v31);
  v10 = (std::filesystem *)v25;
  if ( v25[3] > (std::filesystem *)7 )
    v10 = v25[0];
  *(_QWORD *)&v20 = std::filesystem::_Find_filename(v10, (char *)v10 + 2 * (__int64)v25[2], v9);
  *((_QWORD *)&v20 + 1) = (v11 - (__int64)v20) >> 1;
  v17 = v20;
  std::filesystem::_Convert_stringoid_to_wide<std::filesystem::_Normal_conversion>(v29, &v17);
  std::wstring::wstring((__int64)v30, (__int64)v29);
  std::wstring::_Tidy_deallocate(v29);
  v12 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  *(_QWORD *)&v20 = v12;
  if ( v12 )
  {
    v13 = std::wstring::wstring((__int64)v29, (__int64)v30);
    *(_QWORD *)&v17 = v18;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v17);
    v14 = JsonGameMruManager::JsonGameMruManager(v12, &v17, v13);
  }
  else
  {
    v14 = 0LL;
  }
  *a1 = v14;
  std::wstring::_Tidy_deallocate(v30);
  if ( v18 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v18);
  std::wstring::_Tidy_deallocate((void **)v25);
  return a1;
}
