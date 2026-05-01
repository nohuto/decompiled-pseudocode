/*
 * XREFs of ?SerializeToJsonFile@JsonGameMruManager@@AEBAXUwrite_lock_required@wil@@@Z @ 0x180139BB0
 * Callers:
 *     ?AddMruItem@JsonGameMruManager@@QEAAXV?$shared_ptr@UGameMruItem@@@std@@@Z @ 0x180317AF0 (-AddMruItem@JsonGameMruManager@@QEAAXV-$shared_ptr@UGameMruItem@@@std@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18007A6A8 (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 *     _anonymous_namespace_::GameMruItemToJsonObject @ 0x18013934C (_anonymous_namespace_--GameMruItemToJsonObject.c)
 *     ??0JsonObject@Json@Data@Windows@winrt@@QEAA@XZ @ 0x180139A30 (--0JsonObject@Json@Data@Windows@winrt@@QEAA@XZ.c)
 *     ?check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z @ 0x18013A340 (-check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z.c)
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18027F280 (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@.c)
 *     ?GetJsonStorageFile@JsonGameMruManager@@AEBA?AUStorageFile@Storage@Windows@winrt@@XZ @ 0x180299DD0 (-GetJsonStorageFile@JsonGameMruManager@@AEBA-AUStorageFile@Storage@Windows@winrt@@XZ.c)
 *     ?WriteTextAsync@?$consume_Windows_Storage_IFileIOStatics@UIFileIOStatics@Storage@Windows@winrt@@@impl@winrt@@QEBA@AEBUIStorageFile@Storage@Windows@3@AEBUhstring@param@3@AEBW4UnicodeEncoding@Streams@563@@Z @ 0x18029D938 (-WriteTextAsync@-$consume_Windows_Storage_IFileIOStatics@UIFileIOStatics@Storage@Windows@winrt@@.c)
 *     ??0JsonArray@Json@Data@Windows@winrt@@QEAA@XZ @ 0x1802A10E8 (--0JsonArray@Json@Data@Windows@winrt@@QEAA@XZ.c)
 *     ??$call@AEAV_lambda_ab3e553f5135d66a1c20f494927a541c_@@@?$factory_cache_entry@UFileIO@Storage@Windows@winrt@@UIFileIOStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_ab3e553f5135d66a1c20f494927a541c_@@@Z @ 0x18031731C (--$call@AEAV_lambda_ab3e553f5135d66a1c20f494927a541c_@@@-$factory_cache_entry@UFileIO@Storage@Wi.c)
 *     ??$wait_for_completed@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBUIAsyncAction@Foundation@Windows@1@I@Z @ 0x180317900 (--$wait_for_completed@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@YA-A_PAEBUIAsyncActio.c)
 *     ?Append@?$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJsonValue@2345@@impl@winrt@@QEBA@AEBUIJsonValue@Json@Data@Windows@3@@Z @ 0x180317C74 (-Append@-$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJ.c)
 *     ?Insert@?$consume_Windows_Foundation_Collections_IMap@UJsonObject@Json@Data@Windows@winrt@@Uhstring@5@UIJsonValue@2345@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUIJsonValue@Json@Data@Windows@3@@Z @ 0x180317D30 (-Insert@-$consume_Windows_Foundation_Collections_IMap@UJsonObject@Json@Data@Windows@winrt@@Uhstr.c)
 *     ?ToString@?$consume_Windows_Foundation_IStringable@UJsonObject@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180317E58 (-ToString@-$consume_Windows_Foundation_IStringable@UJsonObject@Json@Data@Windows@winrt@@@impl@wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall JsonGameMruManager::SerializeToJsonFile(__int64 a1, char a2)
{
  const char *v3; // r9
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  void (__fastcall ***v7)(_QWORD, void *, __int64 **); // rcx
  __int64 v8; // rcx
  unsigned int v9; // eax
  enum AsyncStatus v10; // edx
  __int64 *v11; // [rsp+30h] [rbp-78h] BYREF
  void (__fastcall ***v12)(_QWORD, void *, __int64 **); // [rsp+38h] [rbp-70h] BYREF
  __int64 v13; // [rsp+40h] [rbp-68h] BYREF
  volatile signed __int32 *v14; // [rsp+48h] [rbp-60h] BYREF
  __int64 *v15; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v16[3]; // [rsp+58h] [rbp-50h] BYREF
  _QWORD v17[7]; // [rsp+70h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  int v19; // [rsp+B8h] [rbp+10h] BYREF
  __int64 *v20; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v21; // [rsp+C8h] [rbp+20h] BYREF

  LOBYTE(v19) = a2;
  JsonGameMruManager::GetJsonStorageFile(a1, &v21);
  try
  {
    if ( v21 )
    {
      winrt::Windows::Data::Json::JsonObject::JsonObject((winrt::Windows::Data::Json::JsonObject *)&v13);
      winrt::Windows::Data::Json::JsonArray::JsonArray((winrt::Windows::Data::Json::JsonArray *)&v12);
      v4 = *(_QWORD **)(a1 + 56);
      v5 = *(_QWORD **)(a1 + 64);
      while ( v4 != v5 )
      {
        v6 = std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v15, v4);
        v7 = (void (__fastcall ***)(_QWORD, void *, __int64 **))*anonymous_namespace_::GameMruItemToJsonObject(&v14, v6);
        if ( v7 )
        {
          v11 = 0LL;
          (**v7)(v7, &winrt::impl::guid_v<winrt::Windows::Data::Json::IJsonValue>, &v11);
          v20 = v11;
        }
        else
        {
          v20 = 0LL;
        }
        winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Data::Json::IJsonValue>::Append(
          &v12,
          &v20);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v20);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
        v4 += 2;
      }
      if ( v12 )
      {
        v11 = 0LL;
        (**v12)(v12, &winrt::impl::guid_v<winrt::Windows::Data::Json::IJsonValue>, &v11);
        v20 = v11;
      }
      else
      {
        v20 = 0LL;
      }
      if ( aTitles[6] )
        abort();
      v16[0] = 0x600000001LL;
      v16[2] = L"titles";
      v15 = v16;
      winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Data::Json::JsonObject,winrt::hstring,winrt::Windows::Data::Json::IJsonValue>::Insert(
        &v13,
        &v15,
        &v20);
      if ( v20 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v20);
      v19 = 0;
      v17[0] = *(_QWORD *)winrt::impl::consume_Windows_Foundation_IStringable<winrt::Windows::Data::Json::JsonObject>::ToString(
                            &v13,
                            &v14);
      v15 = &v21;
      v16[0] = v17;
      v16[1] = &v19;
      v11 = &qword_1808DB228;
      _InterlockedIncrement64(&qword_1808DB228);
      if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::FileIO,winrt::Windows::Storage::IFileIOStatics> )
      {
        winrt::impl::consume_Windows_Storage_IFileIOStatics<winrt::Windows::Storage::IFileIOStatics>::WriteTextAsync(
          (unsigned int)&winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::FileIO,winrt::Windows::Storage::IFileIOStatics>,
          (unsigned int)&v20,
          (unsigned int)&v21,
          (unsigned int)v17,
          (__int64)&v19);
        _InterlockedDecrement64(&qword_1808DB228);
      }
      else
      {
        _InterlockedDecrement64(&qword_1808DB228);
        winrt::impl::factory_cache_entry<winrt::Windows::Storage::FileIO,winrt::Windows::Storage::IFileIOStatics>::call<_lambda_ab3e553f5135d66a1c20f494927a541c_ &>(
          v8,
          &v20,
          &v15);
      }
      v9 = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<bool>>::Status(&v20);
      if ( !v9 )
        v9 = winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncAction>(&v20);
      winrt::impl::check_status_canceled((winrt::impl *)v9, v10);
      winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel((__int64 *)&v20);
      if ( v20 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v20);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v14);
      if ( v12 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v12);
      if ( v13 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v13);
    }
    if ( v21 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v21);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xEF,
      (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\gamemrumanager.cpp",
      v3);
  }
}
