/*
 * XREFs of ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x1800C53F0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5e3513c216c4aa17901f526f5b36627d___::Run @ 0x1800C53E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5e3513c216c4aa17901f526f5b36627d___--Run.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Query@?$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002C774 (-Query@-$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180030E44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Construct@$01PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031D64 (--$_Construct@$01PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180032474 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?IsAllowedSku@@YA_NXZ @ 0x1800C4E4C (-IsAllowedSku@@YA_NXZ.c)
 *     ??Kfilesystem@std@@YA?AVpath@01@AEBV201@0@Z @ 0x1800C58A8 (--Kfilesystem@std@@YA-AVpath@01@AEBV201@0@Z.c)
 *     ?IsMRPInstalled@BroadcastDVRComponent@@AEAA_NXZ @ 0x1800C59EC (-IsMRPInstalled@BroadcastDVRComponent@@AEAA_NXZ.c)
 *     ?Initialize@GameDVR_OutputDebug@@SAJXZ @ 0x1800C6B18 (-Initialize@GameDVR_OutputDebug@@SAJXZ.c)
 *     ?IsGameDVREnabled@BroadcastDVRComponent@@AEAA_NXZ @ 0x1800C7330 (-IsGameDVREnabled@BroadcastDVRComponent@@AEAA_NXZ.c)
 *     ?RegisterNotifications@BroadcastDVRComponent@@QEAAXXZ @ 0x1800C7FDC (-RegisterNotifications@BroadcastDVRComponent@@QEAAXXZ.c)
 *     ?BroadcastDVRComponent_CompleteInitializationTask_OnEntry@GameDVRTraceProvider@@SAXXZ @ 0x1800C830C (-BroadcastDVRComponent_CompleteInitializationTask_OnEntry@GameDVRTraceProvider@@SAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GameMRU@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180125060 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GameMRU@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ?Create@JsonGameMruManager@@SA?AV?$unique_ptr@VJsonGameMruManager@@U?$default_delete@VJsonGameMruManager@@@std@@@std@@V?$basic_string_view@GU?$char_traits@G@std@@@3@E@Z @ 0x180139E90 (-Create@JsonGameMruManager@@SA-AV-$unique_ptr@VJsonGameMruManager@@U-$default_delete@VJsonGameMr.c)
 *     ?CreateIsGameManager@@YAJPEAPEAUIIsGameManager@@@Z @ 0x18017DC34 (-CreateIsGameManager@@YAJPEAPEAUIIsGameManager@@@Z.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18017DF48 (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ?exists@filesystem@std@@YA_NAEBVpath@12@@Z @ 0x1801D7210 (-exists@filesystem@std@@YA_NAEBVpath@12@@Z.c)
 *     ?BroadcastDVRComponent_CompleteInitializationTask_OnExit@GameDVRTraceProvider@@SAXXZ @ 0x180227758 (-BroadcastDVRComponent_CompleteInitializationTask_OnExit@GameDVRTraceProvider@@SAXXZ.c)
 *     ?GetDefault@UserDataPaths@Storage@Windows@winrt@@SA@XZ @ 0x1802B631C (-GetDefault@UserDataPaths@Storage@Windows@winrt@@SA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     __std_fs_create_directory @ 0x1802CD55C (__std_fs_create_directory.c)
 *     ??R?$default_delete@VJsonGameMruManager@@@std@@QEBAXPEAVJsonGameMruManager@@@Z @ 0x1803109D8 (--R-$default_delete@VJsonGameMruManager@@@std@@QEBAXPEAVJsonGameMruManager@@@Z.c)
 *     ?_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z @ 0x180315134 (-_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=20
void __fastcall BroadcastDVRComponent::CompleteInitializationTask(BroadcastDVRComponent *this)
{
  _BYTE *v2; // rsi
  BroadcastDVRComponent *v3; // rcx
  int v4; // eax
  const char *v5; // r9
  _QWORD *v6; // rdi
  int IsGameManager; // eax
  __int64 v8; // rdx
  int v9; // eax
  __int64 **Default; // rax
  winrt::hstring *v11; // rax
  const struct std::filesystem::path *v12; // rdx
  const WCHAR *v13; // rcx
  unsigned __int64 v14; // rax
  _OWORD *v15; // rdx
  const wchar_t *v16; // rax
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  const char *v20; // r9
  const wchar_t *v21; // [rsp+20h] [rbp-158h] BYREF
  __int64 v22; // [rsp+28h] [rbp-150h]
  HANDLE hObject; // [rsp+30h] [rbp-148h] BYREF
  volatile signed __int32 *v24; // [rsp+38h] [rbp-140h] BYREF
  char *v25; // [rsp+40h] [rbp-138h]
  __int128 v26; // [rsp+48h] [rbp-130h] BYREF
  __int128 v27; // [rsp+58h] [rbp-120h]
  LPCWSTR lpFileName[4]; // [rsp+68h] [rbp-110h] BYREF
  _QWORD v29[4]; // [rsp+88h] [rbp-F0h] BYREF
  _QWORD v30[4]; // [rsp+A8h] [rbp-D0h] BYREF
  _QWORD v31[4]; // [rsp+C8h] [rbp-B0h] BYREF
  _QWORD v32[4]; // [rsp+E8h] [rbp-90h] BYREF
  _QWORD v33[4]; // [rsp+108h] [rbp-70h] BYREF
  _QWORD v34[4]; // [rsp+128h] [rbp-50h] BYREF
  _QWORD v35[4]; // [rsp+148h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  v2 = (char *)this + 432;
  v25 = (char *)this + 432;
  if ( !*((_BYTE *)this + 432) && IsAllowedSku() && BroadcastDVRComponent::IsMRPInstalled(v3) )
  {
    v4 = GameDVR_OutputDebug::Initialize();
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xEC,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)(unsigned int)v4);
    GameDVRTraceProvider::BroadcastDVRComponent_CompleteInitializationTask_OnEntry();
    hObject = CreateEventW(0LL, 1, 0, L"Local\\BcastdvrStartup73BD1D72-A850-47FF-82E1-8F30D2C38FFE");
    wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator=(
      (char *)this + 400,
      &hObject);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    if ( !*((_QWORD *)this + 50) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0xF2,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        v5);
    v6 = (_QWORD *)((char *)this + 256);
    IsGameManager = CreateIsGameManager((struct IIsGameManager **)this + 32);
    if ( IsGameManager < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xF4,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)(unsigned int)IsGameManager);
    BroadcastDVRComponent::RegisterNotifications(this);
    if ( *v6 )
    {
      (*(void (__fastcall **)(_QWORD, void (__fastcall *)(void *), BroadcastDVRComponent *))(*(_QWORD *)*v6 + 80LL))(
        *v6,
        BroadcastDVRComponent::KGLRefreshedCallback,
        this);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 48LL))(*v6);
    }
    BroadcastDVRComponent::IsGameDVREnabled(this);
    if ( *v6 )
    {
      LOBYTE(v8) = *((_BYTE *)this + 444);
      v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v6 + 72LL))(*v6, v8);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x108,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
          (const char *)(unsigned int)v9);
    }
    LOBYTE(v8) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GameMRU>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_GameMRU>::GetImpl'::`2'::impl,
      v8);
    try
    {
      Default = (__int64 **)winrt::Windows::Storage::UserDataPaths::GetDefault();
      v11 = (winrt::hstring *)winrt::impl::consume_Windows_Foundation_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::Query(
                                Default,
                                &v24);
      v21 = winrt::hstring::c_str(v11);
      v22 = std::_WChar_traits<wchar_t>::length((__int64)v21);
      std::wstring::wstring((__int64)v32, (__int64)&v21);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v24);
      if ( hObject )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&hObject);
      v21 = L"Microsoft\\GameDVR";
      v22 = 17LL;
      std::wstring::wstring((__int64)&v26, (__int64)&v21);
      std::wstring::wstring((__int64)v29, v32);
      std::filesystem::operator/(v35);
      std::wstring::_Tidy_deallocate(v29);
      std::wstring::_Tidy_deallocate(&v26);
      v21 = L"GameMRU";
      v22 = 7LL;
      std::wstring::wstring((__int64)v31, (__int64)&v21);
      std::wstring::wstring((__int64)v33, v35);
      std::filesystem::operator/(lpFileName);
      std::wstring::_Tidy_deallocate(v33);
      std::wstring::_Tidy_deallocate(v31);
      if ( !std::filesystem::exists((std::filesystem *)lpFileName, v12) )
      {
        v13 = (const WCHAR *)lpFileName;
        if ( lpFileName[3] > (LPCWSTR)7 )
          v13 = lpFileName[0];
        v14 = (unsigned __int64)_std_fs_create_directory(v13) >> 32;
        if ( (_DWORD)v14 )
          std::filesystem::_Throw_fs_error("create_directory", (unsigned int)v14, lpFileName);
      }
      v21 = L"LocalMruGameList.json";
      v22 = 21LL;
      std::wstring::wstring((__int64)v29, (__int64)&v21);
      std::wstring::wstring((__int64)v34, lpFileName);
      std::filesystem::operator/(v30);
      std::wstring::_Tidy_deallocate(v34);
      std::wstring::_Tidy_deallocate(v29);
      v26 = 0LL;
      v27 = 0LL;
      v15 = v30;
      if ( v30[3] > 7uLL )
        v15 = (_OWORD *)v30[0];
      std::wstring::_Construct<2,unsigned short const *>(&v26, v15, v30[2]);
      v16 = (const wchar_t *)&v26;
      if ( *((_QWORD *)&v27 + 1) > 7uLL )
        v16 = (const wchar_t *)v26;
      v21 = v16;
      v22 = v27;
      v17 = (__int64 *)JsonGameMruManager::Create(&v24, &v21);
      v18 = *v17;
      *v17 = 0LL;
      v19 = *((_QWORD *)this + 70);
      *((_QWORD *)this + 70) = v18;
      if ( v19 )
        std::default_delete<JsonGameMruManager>::operator()();
      if ( v24 )
        std::default_delete<JsonGameMruManager>::operator()();
      std::wstring::_Tidy_deallocate(&v26);
      std::wstring::_Tidy_deallocate(v30);
      std::wstring::_Tidy_deallocate(lpFileName);
      std::wstring::_Tidy_deallocate(v35);
      std::wstring::_Tidy_deallocate(v32);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x122,
        (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        v20);
      v2 = v25;
    }
    *v2 = 1;
    GameDVRTraceProvider::BroadcastDVRComponent_CompleteInitializationTask_OnExit();
  }
}
