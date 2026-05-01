/*
 * XREFs of _anonymous_namespace_::GameMruItemToJsonObject @ 0x18013934C
 * Callers:
 *     ?SerializeToJsonFile@JsonGameMruManager@@AEBAXUwrite_lock_required@wil@@@Z @ 0x180139BB0 (-SerializeToJsonFile@JsonGameMruManager@@AEBAXUwrite_lock_required@wil@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?CreateSeparator@?$consume_WindowsUdk_UI_IMenuItemStatics@UIMenuItemStatics@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1801398C8 (-CreateSeparator@-$consume_WindowsUdk_UI_IMenuItemStatics@UIMenuItemStatics@UI@WindowsUdk@winrt@.c)
 *     _anonymous_namespace_::TimePointToTimeString @ 0x18013992C (_anonymous_namespace_--TimePointToTimeString.c)
 *     ??0JsonObject@Json@Data@Windows@winrt@@QEAA@XZ @ 0x180139A30 (--0JsonObject@Json@Data@Windows@winrt@@QEAA@XZ.c)
 *     ?RemoveGroup@?$consume_Windows_UI_Notifications_IToastNotificationHistory@UIToastNotificationHistory@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x180139B68 (-RemoveGroup@-$consume_Windows_UI_Notifications_IToastNotificationHistory@UIToastNotificationHis.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$call@AEAV_lambda_ca425077811c26dd994b3d0531fe1de0_@@@?$factory_cache_entry@UJsonValue@Json@Data@Windows@winrt@@UIJsonValueStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_ca425077811c26dd994b3d0531fe1de0_@@@Z @ 0x180317450 (--$call@AEAV_lambda_ca425077811c26dd994b3d0531fe1de0_@@@-$factory_cache_entry@UJsonValue@Json@Da.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall anonymous_namespace_::GameMruItemToJsonObject(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  const char *v13; // r9
  __int64 v14; // rax
  std::_Ref_count_base *v15; // rcx
  _QWORD *result; // rax
  std::_Ref_count_base *v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-B8h] BYREF
  int **v19; // [rsp+28h] [rbp-B0h] BYREF
  int *v20; // [rsp+30h] [rbp-A8h] BYREF
  int v21; // [rsp+38h] [rbp-A0h] BYREF
  int v22; // [rsp+3Ch] [rbp-9Ch]
  _QWORD *v23; // [rsp+48h] [rbp-90h]
  __int64 v24; // [rsp+50h] [rbp-88h] BYREF
  int *v25; // [rsp+58h] [rbp-80h] BYREF
  int v26; // [rsp+60h] [rbp-78h] BYREF
  int v27; // [rsp+64h] [rbp-74h]
  const wchar_t *v28; // [rsp+70h] [rbp-68h]
  __int64 *v29; // [rsp+78h] [rbp-60h]
  _QWORD *v30; // [rsp+80h] [rbp-58h]
  _QWORD *v31; // [rsp+90h] [rbp-48h]
  _QWORD v32[4]; // [rsp+98h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  try
  {
    v30 = a1;
    v31 = a2;
    winrt::Windows::Data::Json::JsonObject::JsonObject((winrt::Windows::Data::Json::JsonObject *)&v24);
    v4 = (_QWORD *)anonymous_namespace_::TimePointToTimeString(v32, *a2);
    v5 = v4;
    v6 = v4[2];
    if ( v4[3] > 7uLL )
      v5 = (_QWORD *)*v4;
    if ( (_DWORD)v6 )
    {
      if ( *((_WORD *)v5 + (unsigned int)v6) )
        abort();
      v21 = 1;
      v22 = v6;
      v23 = v5;
      v20 = &v21;
    }
    else
    {
      v20 = 0LL;
    }
    v19 = &v20;
    v29 = &qword_1808DB328;
    _InterlockedAdd64(&qword_1808DB328, 1uLL);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics> )
    {
      winrt::impl::consume_WindowsUdk_UI_IMenuItemStatics<winrt::WindowsUdk::UI::IMenuItemStatics>::CreateSeparator(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics>,
        &v18,
        &v20);
      _InterlockedDecrement64(&qword_1808DB328);
    }
    else
    {
      _InterlockedDecrement64(&qword_1808DB328);
      winrt::impl::factory_cache_entry<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics>::call<_lambda_ca425077811c26dd994b3d0531fe1de0_ &>(
        v5,
        &v18,
        &v19);
    }
    if ( aLastlaunched[12] )
      abort();
    v26 = 1;
    v27 = 12;
    v28 = L"LastLaunched";
    v25 = &v26;
    winrt::impl::consume_Windows_UI_Notifications_IToastNotificationHistory<winrt::Windows::UI::Notifications::IToastNotificationHistory>::RemoveGroup(
      &v24,
      &v25,
      &v18);
    if ( v18 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v18);
    std::wstring::_Tidy_deallocate(v32);
    v7 = (_QWORD *)(*a2 + 8LL);
    v8 = *(_QWORD *)(*a2 + 24LL);
    if ( *(_QWORD *)(*a2 + 32LL) > 7uLL )
      v7 = (_QWORD *)*v7;
    if ( (_DWORD)v8 )
    {
      if ( *((_WORD *)v7 + (unsigned int)v8) )
        abort();
      v21 = 1;
      v22 = v8;
      v23 = v7;
      v20 = &v21;
    }
    else
    {
      v20 = 0LL;
    }
    v19 = &v20;
    v29 = &qword_1808DB328;
    _InterlockedAdd64(&qword_1808DB328, 1uLL);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics> )
    {
      winrt::impl::consume_WindowsUdk_UI_IMenuItemStatics<winrt::WindowsUdk::UI::IMenuItemStatics>::CreateSeparator(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics>,
        &v18,
        &v20);
      _InterlockedDecrement64(&qword_1808DB328);
    }
    else
    {
      _InterlockedDecrement64(&qword_1808DB328);
      winrt::impl::factory_cache_entry<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics>::call<_lambda_ca425077811c26dd994b3d0531fe1de0_ &>(
        v7,
        &v18,
        &v19);
    }
    if ( aTitle[5] )
      abort();
    v26 = 1;
    v27 = 5;
    v28 = L"Title";
    v25 = &v26;
    winrt::impl::consume_Windows_UI_Notifications_IToastNotificationHistory<winrt::Windows::UI::Notifications::IToastNotificationHistory>::RemoveGroup(
      &v24,
      &v25,
      &v18);
    if ( v18 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v18);
    v9 = (_QWORD *)(*a2 + 40LL);
    v10 = *(_QWORD *)(*a2 + 56LL);
    if ( *(_QWORD *)(*a2 + 64LL) > 7uLL )
      v9 = (_QWORD *)*v9;
    if ( (_DWORD)v10 )
    {
      if ( *((_WORD *)v9 + (unsigned int)v10) )
        abort();
      v21 = 1;
      v22 = v10;
      v23 = v9;
      v20 = &v21;
    }
    else
    {
      v20 = 0LL;
    }
    v19 = &v20;
    v29 = &qword_1808DB328;
    _InterlockedAdd64(&qword_1808DB328, 1uLL);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics> )
    {
      winrt::impl::consume_WindowsUdk_UI_IMenuItemStatics<winrt::WindowsUdk::UI::IMenuItemStatics>::CreateSeparator(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics>,
        &v18,
        &v20);
      _InterlockedDecrement64(&qword_1808DB328);
    }
    else
    {
      _InterlockedDecrement64(&qword_1808DB328);
      winrt::impl::factory_cache_entry<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics>::call<_lambda_ca425077811c26dd994b3d0531fe1de0_ &>(
        v9,
        &v18,
        &v19);
    }
    if ( aAumid[5] )
      abort();
    v26 = 1;
    v27 = 5;
    v28 = L"Aumid";
    v25 = &v26;
    winrt::impl::consume_Windows_UI_Notifications_IToastNotificationHistory<winrt::Windows::UI::Notifications::IToastNotificationHistory>::RemoveGroup(
      &v24,
      &v25,
      &v18);
    if ( v18 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v18);
    v11 = (_QWORD *)(*a2 + 72LL);
    v12 = *(_QWORD *)(*a2 + 88LL);
    if ( *(_QWORD *)(*a2 + 96LL) > 7uLL )
      v11 = (_QWORD *)*v11;
    if ( (_DWORD)v12 )
    {
      if ( *((_WORD *)v11 + (unsigned int)v12) )
        abort();
      v21 = 1;
      v22 = v12;
      v23 = v11;
      v20 = &v21;
    }
    else
    {
      v20 = 0LL;
    }
    v19 = &v20;
    v29 = &qword_1808DB328;
    _InterlockedAdd64(&qword_1808DB328, 1uLL);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics> )
    {
      winrt::impl::consume_WindowsUdk_UI_IMenuItemStatics<winrt::WindowsUdk::UI::IMenuItemStatics>::CreateSeparator(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics>,
        &v18,
        &v20);
      _InterlockedDecrement64(&qword_1808DB328);
    }
    else
    {
      _InterlockedDecrement64(&qword_1808DB328);
      winrt::impl::factory_cache_entry<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics>::call<_lambda_ca425077811c26dd994b3d0531fe1de0_ &>(
        v11,
        &v18,
        &v19);
    }
    if ( aExepath[7] )
      abort();
    v26 = 1;
    v27 = 7;
    v28 = L"ExePath";
    v25 = &v26;
    winrt::impl::consume_Windows_UI_Notifications_IToastNotificationHistory<winrt::Windows::UI::Notifications::IToastNotificationHistory>::RemoveGroup(
      &v24,
      &v25,
      &v18);
    if ( v18 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v18);
    v14 = v24;
    v24 = 0LL;
    *a1 = v14;
    v15 = (std::_Ref_count_base *)a2[1];
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
    result = a1;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x5E,
      (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\gamemrumanager.cpp",
      v13);
    *v30 = 0LL;
    v17 = (std::_Ref_count_base *)v31[1];
    if ( v17 )
      std::_Ref_count_base::_Decref(v17);
    return v30;
  }
  return result;
}
