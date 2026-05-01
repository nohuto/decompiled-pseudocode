/*
 * XREFs of ?GetJsonStorageFile@JsonGameMruManager@@AEBA?AUStorageFile@Storage@Windows@winrt@@XZ @ 0x1802A1584
 * Callers:
 *     ?SerializeToJsonFile@JsonGameMruManager@@AEBAXUwrite_lock_required@wil@@@Z @ 0x18005D5B4 (-SerializeToJsonFile@JsonGameMruManager@@AEBAXUwrite_lock_required@wil@@@Z.c)
 *     ?DeserializeFromJsonFile@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x1800645C4 (-DeserializeFromJsonFile@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 * Callees:
 *     ?check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z @ 0x18005CD48 (-check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z.c)
 *     ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@UWindowTabDataModel@Shell@UI@Internal@34@@impl@winrt@@QEBA@XZ @ 0x18005CD88 (-GetResults@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UWindowTabDataModel@.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801C5FB4 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@Z.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@UStorageFile@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@UStorageFile@Storage@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x180242BEC (--$wait_for_completed@U-$IAsyncOperation@UStorageFile@Storage@Windows@winrt@@@Foundation@Windows.c)
 *     ?CreateFileAsync@?$consume_Windows_Storage_IStorageFolder@UIStorageFolder@Storage@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBW4CreationCollisionOption@Storage@Windows@3@@Z @ 0x180242D94 (-CreateFileAsync@-$consume_Windows_Storage_IStorageFolder@UIStorageFolder@Storage@Windows@winrt@.c)
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180287DF0 (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@.c)
 */

// Hidden C++ exception states: #wind=1
winrt *__fastcall JsonGameMruManager::GetJsonStorageFile(__int64 a1, winrt *a2)
{
  __int64 **v3; // rbx
  _QWORD *v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // rdx
  const char *v7; // r9
  winrt *result; // rax
  _QWORD v9[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v11; // [rsp+60h] [rbp+8h] BYREF
  winrt *v12; // [rsp+68h] [rbp+10h]
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  v12 = a2;
  v3 = (__int64 **)(a1 + 8);
  v11 = 3;
  winrt::param::hstring::hstring((__int64)v9, (_QWORD *)(a1 + 16));
  try
  {
    v4 = winrt::impl::consume_Windows_Storage_IStorageFolder<winrt::Windows::Storage::IStorageFolder>::CreateFileAsync(
           v3,
           &v13,
           v9,
           &v11);
    v5 = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<bool>>::Status((__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))v4);
    if ( !v5 )
      v5 = winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::StorageFile>>((__int64)v4);
    winrt::impl::check_status_canceled((winrt::impl *)v5, v6);
    winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Internal::UI::Shell::WindowTabDataModel>,winrt::Windows::Internal::UI::Shell::WindowTabDataModel>::GetResults(
      v4,
      a2);
    if ( v13 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v13);
    result = a2;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xB9,
      (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\gamemrumanager.cpp",
      v7);
    *(_QWORD *)v12 = 0LL;
    return v12;
  }
  return result;
}
