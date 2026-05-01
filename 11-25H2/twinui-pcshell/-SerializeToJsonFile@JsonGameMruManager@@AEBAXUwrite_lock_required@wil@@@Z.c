/*
 * XREFs of ?SerializeToJsonFile@JsonGameMruManager@@AEBAXUwrite_lock_required@wil@@@Z @ 0x18005D5B4
 * Callers:
 *     ?AddMruItem@JsonGameMruManager@@QEAAXV?$shared_ptr@UGameMruItem@@@std@@@Z @ 0x18031B510 (-AddMruItem@JsonGameMruManager@@QEAAXV-$shared_ptr@UGameMruItem@@@std@@@Z.c)
 * Callees:
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x18002A564 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z @ 0x18005CD48 (-check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18005D894 (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 *     _anonymous_namespace_::GameMruItemToJsonObject @ 0x18005D8D4 (_anonymous_namespace_--GameMruItemToJsonObject.c)
 *     ??0JsonObject@Json@Data@Windows@winrt@@QEAA@XZ @ 0x18005E044 (--0JsonObject@Json@Data@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180287DF0 (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@.c)
 *     ?GetJsonStorageFile@JsonGameMruManager@@AEBA?AUStorageFile@Storage@Windows@winrt@@XZ @ 0x1802A1584 (-GetJsonStorageFile@JsonGameMruManager@@AEBA-AUStorageFile@Storage@Windows@winrt@@XZ.c)
 *     ?WriteTextAsync@?$consume_Windows_Storage_IFileIOStatics@UIFileIOStatics@Storage@Windows@winrt@@@impl@winrt@@QEBA@AEBUIStorageFile@Storage@Windows@3@AEBUhstring@param@3@AEBW4UnicodeEncoding@Streams@563@@Z @ 0x1802A3E0C (-WriteTextAsync@-$consume_Windows_Storage_IFileIOStatics@UIFileIOStatics@Storage@Windows@winrt@@.c)
 *     ??0JsonArray@Json@Data@Windows@winrt@@QEAA@XZ @ 0x1802A87D0 (--0JsonArray@Json@Data@Windows@winrt@@QEAA@XZ.c)
 *     ??$call@AEAV_lambda_ab3e553f5135d66a1c20f494927a541c_@@@?$factory_cache_entry@UFileIO@Storage@Windows@winrt@@UIFileIOStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_ab3e553f5135d66a1c20f494927a541c_@@@Z @ 0x18031ADF0 (--$call@AEAV_lambda_ab3e553f5135d66a1c20f494927a541c_@@@-$factory_cache_entry@UFileIO@Storage@Wi.c)
 *     ??$wait_for_completed@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBUIAsyncAction@Foundation@Windows@1@I@Z @ 0x18031B370 (--$wait_for_completed@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@YA-A_PAEBUIAsyncActio.c)
 *     ?Append@?$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJsonValue@2345@@impl@winrt@@QEBA@AEBUIJsonValue@Json@Data@Windows@3@@Z @ 0x18031B694 (-Append@-$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJ.c)
 *     ?Insert@?$consume_Windows_Foundation_Collections_IMap@UJsonObject@Json@Data@Windows@winrt@@Uhstring@5@UIJsonValue@2345@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUIJsonValue@Json@Data@Windows@3@@Z @ 0x18031B738 (-Insert@-$consume_Windows_Foundation_Collections_IMap@UJsonObject@Json@Data@Windows@winrt@@Uhstr.c)
 *     ?ToString@?$consume_Windows_Foundation_IStringable@UJsonObject@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18031B848 (-ToString@-$consume_Windows_Foundation_IStringable@UJsonObject@Json@Data@Windows@winrt@@@impl@wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall JsonGameMruManager::SerializeToJsonFile(__int64 a1, char a2)
{
  __int64 result; // rax
  const char *v4; // r9
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  void (__fastcall ***v8)(_QWORD, void *, __int64 *); // rcx
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // [rsp+30h] [rbp-C8h] BYREF
  void (__fastcall ***v13)(_QWORD, void *, __int64 *); // [rsp+38h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+58h] [rbp-A0h] BYREF
  _BYTE v18[8]; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v19[8]; // [rsp+68h] [rbp-90h] BYREF
  _DWORD *v20; // [rsp+70h] [rbp-88h] BYREF
  _DWORD v21[4]; // [rsp+78h] [rbp-80h] BYREF
  const wchar_t *v22; // [rsp+88h] [rbp-70h]
  _QWORD v23[4]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v24; // [rsp+B0h] [rbp-48h] BYREF
  _QWORD v25[7]; // [rsp+C0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]
  int v27; // [rsp+108h] [rbp+10h] BYREF
  __int64 v28; // [rsp+110h] [rbp+18h] BYREF
  __int64 v29; // [rsp+118h] [rbp+20h] BYREF

  LOBYTE(v27) = a2;
  result = JsonGameMruManager::GetJsonStorageFile(a1, &v29);
  try
  {
    if ( v29 )
    {
      winrt::Windows::Data::Json::JsonObject::JsonObject((winrt::Windows::Data::Json::JsonObject *)&v14);
      winrt::Windows::Data::Json::JsonArray::JsonArray((winrt::Windows::Data::Json::JsonArray *)&v13);
      v5 = *(_QWORD **)(a1 + 56);
      v6 = *(_QWORD **)(a1 + 64);
      while ( v5 != v6 )
      {
        v7 = std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v24, v5);
        v8 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))anonymous_namespace_::GameMruItemToJsonObject(v18, v7);
        if ( v8 )
        {
          v16 = 0LL;
          (**v8)(v8, &winrt::impl::guid_v<winrt::Windows::Data::Json::IJsonValue>, &v16);
          v15 = v16;
        }
        else
        {
          v15 = 0LL;
        }
        winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Data::Json::IJsonValue>::Append(
          &v13,
          &v15);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v18);
        v5 += 2;
      }
      if ( v13 )
      {
        v17 = 0LL;
        (**v13)(v13, &winrt::impl::guid_v<winrt::Windows::Data::Json::IJsonValue>, &v17);
        v12 = v17;
      }
      else
      {
        v12 = 0LL;
      }
      if ( aTitles[6] )
        abort();
      v21[0] = 1;
      v21[1] = 6;
      v22 = L"titles";
      v20 = v21;
      winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Data::Json::JsonObject,winrt::hstring,winrt::Windows::Data::Json::IJsonValue>::Insert(
        &v14,
        &v20,
        &v12);
      if ( v12 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v12);
      v27 = 0;
      v25[0] = *(_QWORD *)winrt::impl::consume_Windows_Foundation_IStringable<winrt::Windows::Data::Json::JsonObject>::ToString(
                            &v14,
                            v19);
      v23[0] = &v29;
      v23[1] = v25;
      v23[2] = &v27;
      v23[3] = &qword_18089AB38;
      _InterlockedIncrement64(&qword_18089AB38);
      if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::FileIO,winrt::Windows::Storage::IFileIOStatics> )
      {
        winrt::impl::consume_Windows_Storage_IFileIOStatics<winrt::Windows::Storage::IFileIOStatics>::WriteTextAsync(
          (unsigned int)&winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::FileIO,winrt::Windows::Storage::IFileIOStatics>,
          (unsigned int)&v28,
          (unsigned int)&v29,
          (unsigned int)v25,
          (__int64)&v27);
        _InterlockedDecrement64(&qword_18089AB38);
      }
      else
      {
        _InterlockedDecrement64(&qword_18089AB38);
        winrt::impl::factory_cache_entry<winrt::Windows::Storage::FileIO,winrt::Windows::Storage::IFileIOStatics>::call<_lambda_ab3e553f5135d66a1c20f494927a541c_ &>(
          v9,
          &v28,
          v23);
      }
      v10 = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<bool>>::Status(&v28);
      if ( !v10 )
        v10 = winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncAction>(&v28);
      winrt::impl::check_status_canceled((winrt::impl *)v10, v11);
      winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel(&v28);
      if ( v28 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v28);
      result = winrt::handle_type<winrt::impl::hstring_traits>::close(v19);
      if ( v13 )
        result = winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v13);
      if ( v14 )
        result = winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v14);
    }
    if ( v29 )
      result = winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v29);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0xEF,
             (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\gamemrumanager.cpp",
             v4);
  }
  return result;
}
