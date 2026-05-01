/*
 * XREFs of ?DeserializeFromJsonFile@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18013AFC8
 * Callers:
 *     ??0JsonGameMruManager@@AEAA@UStorageFolder@Storage@Windows@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@E@Z @ 0x18013A870 (--0JsonGameMruManager@@AEAA@UStorageFolder@Storage@Windows@winrt@@V-$basic_string@GU-$char_trait.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?SystemFallbackSettingData@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800283DC (-SystemFallbackSettingData@-$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDat.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Parse@?$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1800B74D4 (-Parse@-$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winr.c)
 *     ?GetNamedArray@?$consume_Windows_Data_Json_IJsonObject@UIJsonObject@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1800CD988 (-GetNamedArray@-$consume_Windows_Data_Json_IJsonObject@UIJsonObject@Json@Data@Windows@winrt@@@im.c)
 *     ?check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z @ 0x18013A340 (-check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z.c)
 *     _anonymous_namespace_::JsonObjectToGameMruItem @ 0x18013B2A0 (_anonymous_namespace_--JsonObjectToGameMruItem.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@QEAV21@AEBV21@@Z @ 0x18013C23C (--$_Emplace_reallocate@AEBV-$shared_ptr@UPeoplePaneViewInfo@@@std@@@-$vector@V-$shared_ptr@UPeop.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJsonValue@2345@@impl@winrt@@QEBA@I@Z @ 0x18013C358 (-GetAt@-$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJs.c)
 *     ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@Uhstring@4@@impl@winrt@@QEBA@XZ @ 0x18013C7F0 (-GetResults@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@Uhstring@winrt@@@Fou.c)
 *     ??$call@AEAV_lambda_8bcef120e7c5e2e3c02b5340d469f3bd_@@@?$factory_cache_entry@UFileIO@Storage@Windows@winrt@@UIFileIOStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_8bcef120e7c5e2e3c02b5340d469f3bd_@@@Z @ 0x18013C86C (--$call@AEAV_lambda_8bcef120e7c5e2e3c02b5340d469f3bd_@@@-$factory_cache_entry@UFileIO@Storage@Wi.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@1@I@Z @ 0x180233D08 (--$wait_for_completed@U-$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@winrt@.c)
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18027F280 (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@.c)
 *     ?GetJsonStorageFile@JsonGameMruManager@@AEBA?AUStorageFile@Storage@Windows@winrt@@XZ @ 0x180299DD0 (-GetJsonStorageFile@JsonGameMruManager@@AEBA-AUStorageFile@Storage@Windows@winrt@@XZ.c)
 *     ??$call@AEAV_lambda_6572cb39eb053ecf8aa601a8cecd7f9b_@@@?$factory_cache_entry@UJsonObject@Json@Data@Windows@winrt@@UIJsonObjectStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_6572cb39eb053ecf8aa601a8cecd7f9b_@@@Z @ 0x18029BA60 (--$call@AEAV_lambda_6572cb39eb053ecf8aa601a8cecd7f9b_@@@-$factory_cache_entry@UJsonObject@Json@D.c)
 *     ?Size@?$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJsonValue@2345@@impl@winrt@@QEBA@XZ @ 0x1802B4228 (-Size@-$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJso.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall JsonGameMruManager::DeserializeFromJsonFile(__int64 a1)
{
  __int64 v2; // rcx
  const char *v3; // r9
  __int64 result; // rax
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // edi
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  __int64 *v12; // [rsp+20h] [rbp-88h] BYREF
  __int64 *v13; // [rsp+28h] [rbp-80h] BYREF
  __int64 *v14; // [rsp+30h] [rbp-78h] BYREF
  volatile signed __int32 *v15; // [rsp+38h] [rbp-70h] BYREF
  volatile signed __int32 *v16; // [rsp+40h] [rbp-68h] BYREF
  std::_Ref_count_base *v17; // [rsp+48h] [rbp-60h]
  _DWORD *v18; // [rsp+60h] [rbp-48h] BYREF
  _DWORD v19[4]; // [rsp+68h] [rbp-40h] BYREF
  const wchar_t *v20; // [rsp+78h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v22; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v23; // [rsp+C8h] [rbp+20h] BYREF

  JsonGameMruManager::GetJsonStorageFile(a1, &v23);
  try
  {
    result = v23;
    if ( v23 )
    {
      v14 = &v23;
      v13 = &qword_1808DB228;
      _InterlockedIncrement64(&qword_1808DB228);
      if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::FileIO,winrt::Windows::Storage::IFileIOStatics> )
      {
        winrt::impl::consume_Windows_Data_Json_IJsonObjectStatics<winrt::Windows::Data::Json::IJsonObjectStatics>::Parse(
          (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::FileIO,winrt::Windows::Storage::IFileIOStatics>,
          &v22,
          &v23);
        _InterlockedDecrement64(&qword_1808DB228);
      }
      else
      {
        _InterlockedDecrement64(&qword_1808DB228);
        winrt::impl::factory_cache_entry<winrt::Windows::Storage::FileIO,winrt::Windows::Storage::IFileIOStatics>::call<_lambda_8bcef120e7c5e2e3c02b5340d469f3bd_ &>(
          v2,
          &v22,
          &v14);
      }
      v5 = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<bool>>::Status(&v22);
      if ( !v5 )
        v5 = winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<winrt::hstring>>(&v22);
      winrt::impl::check_status_canceled((winrt::impl *)v5, v6);
      winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::hstring>,winrt::hstring>::GetResults(
        &v22,
        &v15);
      if ( v22 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v22);
      if ( v15 )
      {
        v16 = v15;
        v14 = (__int64 *)&v16;
        v13 = &qword_1808DB308;
        _InterlockedIncrement64(&qword_1808DB308);
        if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonObject,winrt::Windows::Data::Json::IJsonObjectStatics> )
        {
          winrt::impl::consume_Windows_Data_Json_IJsonObjectStatics<winrt::Windows::Data::Json::IJsonObjectStatics>::Parse(
            (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonObject,winrt::Windows::Data::Json::IJsonObjectStatics>,
            &v12,
            (__int64 *)&v16);
          _InterlockedDecrement64(&qword_1808DB308);
        }
        else
        {
          _InterlockedDecrement64(&qword_1808DB308);
          winrt::impl::factory_cache_entry<winrt::Windows::Data::Json::JsonObject,winrt::Windows::Data::Json::IJsonObjectStatics>::call<_lambda_6572cb39eb053ecf8aa601a8cecd7f9b_ &>(
            v7,
            &v12,
            &v14);
        }
        if ( aTitles[6] )
          abort();
        v19[0] = 1;
        v19[1] = 6;
        v20 = L"titles";
        v18 = v19;
        winrt::impl::consume_Windows_Data_Json_IJsonObject<winrt::Windows::Data::Json::IJsonObject>::GetNamedArray(
          &v12,
          &v22,
          (__int64 *)&v18);
        v8 = 0;
        v9 = winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Data::Json::IJsonValue>::Size(&v22);
        while ( v8 != v9 )
        {
          winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Data::Json::IJsonValue>::GetAt(
            &v22,
            &v13,
            v8);
          v10 = winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::SystemFallbackSettingData(
                  &v13,
                  &v14);
          anonymous_namespace_::JsonObjectToGameMruItem(&v16, v10);
          if ( v14 )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v14);
          if ( v16 )
          {
            v11 = *(_QWORD **)(a1 + 64);
            if ( v11 == *(_QWORD **)(a1 + 72) )
            {
              std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Emplace_reallocate<std::shared_ptr<PeoplePaneViewInfo> const &>(
                a1 + 56,
                *(_QWORD *)(a1 + 64),
                &v16);
            }
            else
            {
              std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v11, &v16);
              *(_QWORD *)(a1 + 64) += 16LL;
            }
          }
          if ( v17 )
            std::_Ref_count_base::_Decref(v17);
          if ( v13 )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v13);
          ++v8;
        }
        if ( v22 )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v22);
        if ( v12 )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v12);
      }
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v15);
      result = v23;
    }
    if ( result )
      result = winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v23);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0xD1,
             (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\gamemrumanager.cpp",
             v3);
  }
  return result;
}
