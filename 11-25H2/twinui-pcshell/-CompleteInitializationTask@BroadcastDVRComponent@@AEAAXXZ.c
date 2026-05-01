/*
 * XREFs of ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x1800B0FCC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5e3513c216c4aa17901f526f5b36627d___::Run @ 0x1802343C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5e3513c216c4aa17901f526f5b36627d___--Run.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18005A55C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Convert_stringoid_to_wide@U_Normal_conversion@filesystem@std@@@filesystem@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@V?$basic_string_view@GU?$char_traits@G@std@@@1@U_Normal_conversion@01@@Z @ 0x18005B0F0 (--$_Convert_stringoid_to_wide@U_Normal_conversion@filesystem@std@@@filesystem@std@@YA-AV-$basic_.c)
 *     ?Create@JsonGameMruManager@@SA?AV?$unique_ptr@VJsonGameMruManager@@U?$default_delete@VJsonGameMruManager@@@std@@@std@@V?$basic_string_view@GU?$char_traits@G@std@@@3@E@Z @ 0x18005C9BC (-Create@JsonGameMruManager@@SA-AV-$unique_ptr@VJsonGameMruManager@@U-$default_delete@VJsonGameMr.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GameMRU@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800607B4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GameMRU@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180093874 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Query@?$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800AB7B0 (-Query@-$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800AEFE8 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??Kfilesystem@std@@YA?AVpath@01@AEBV201@0@Z @ 0x1800AFAA4 (--Kfilesystem@std@@YA-AVpath@01@AEBV201@0@Z.c)
 *     ?RegisterNotifications@BroadcastDVRComponent@@QEAAXXZ @ 0x1800B0680 (-RegisterNotifications@BroadcastDVRComponent@@QEAAXXZ.c)
 *     ?CreateIsGameManager@@YAJPEAPEAUIIsGameManager@@@Z @ 0x1800B0988 (-CreateIsGameManager@@YAJPEAPEAUIIsGameManager@@@Z.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800B0C98 (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ?BroadcastDVRComponent_CompleteInitializationTask_OnEntry@GameDVRTraceProvider@@SAXXZ @ 0x1800B0CEC (-BroadcastDVRComponent_CompleteInitializationTask_OnEntry@GameDVRTraceProvider@@SAXXZ.c)
 *     ?IsMRPInstalled@BroadcastDVRComponent@@AEAA_NXZ @ 0x1800B146C (-IsMRPInstalled@BroadcastDVRComponent@@AEAA_NXZ.c)
 *     ?Initialize@GameDVR_OutputDebug@@SAJXZ @ 0x1800B27D0 (-Initialize@GameDVR_OutputDebug@@SAJXZ.c)
 *     ?IsGameDVREnabled@BroadcastDVRComponent@@AEAA_NXZ @ 0x1800B325C (-IsGameDVREnabled@BroadcastDVRComponent@@AEAA_NXZ.c)
 *     ?IsAllowedSku@@YA_NXZ @ 0x1800BB138 (-IsAllowedSku@@YA_NXZ.c)
 *     ?exists@filesystem@std@@YA_NAEBVpath@12@@Z @ 0x1801E2D2C (-exists@filesystem@std@@YA_NAEBVpath@12@@Z.c)
 *     ?BroadcastDVRComponent_CompleteInitializationTask_OnExit@GameDVRTraceProvider@@SAXXZ @ 0x180235944 (-BroadcastDVRComponent_CompleteInitializationTask_OnExit@GameDVRTraceProvider@@SAXXZ.c)
 *     ?GetDefault@UserDataPaths@Storage@Windows@winrt@@SA@XZ @ 0x1802BF284 (-GetDefault@UserDataPaths@Storage@Windows@winrt@@SA@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     __std_fs_create_directory @ 0x1802D4B88 (__std_fs_create_directory.c)
 *     ??R?$default_delete@VJsonGameMruManager@@@std@@QEBAXPEAVJsonGameMruManager@@@Z @ 0x180314864 (--R-$default_delete@VJsonGameMruManager@@@std@@QEBAXPEAVJsonGameMruManager@@@Z.c)
 *     ?_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z @ 0x180318F20 (-_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=20
void __fastcall BroadcastDVRComponent::CompleteInitializationTask(char *Context)
{
  _BYTE *v2; // rsi
  BroadcastDVRComponent *v3; // rcx
  int v4; // eax
  const char *v5; // r9
  _QWORD *v6; // rdi
  int IsGameManager; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 **Default; // rax
  winrt::hstring *v13; // rax
  const unsigned __int16 *v14; // rax
  __int64 v15; // rcx
  const struct std::filesystem::path *v16; // rdx
  const WCHAR *v17; // rcx
  unsigned __int64 v18; // rax
  void **v19; // rax
  __int64 *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  const char *v23; // r9
  __int128 v24; // [rsp+20h] [rbp-118h] BYREF
  HANDLE hObject; // [rsp+30h] [rbp-108h] BYREF
  volatile signed __int32 *v26; // [rsp+38h] [rbp-100h] BYREF
  char *v27; // [rsp+40h] [rbp-F8h]
  void *v28[4]; // [rsp+48h] [rbp-F0h] BYREF
  void *v29[4]; // [rsp+68h] [rbp-D0h] BYREF
  LPCWSTR lpFileName[4]; // [rsp+88h] [rbp-B0h] BYREF
  void *v31[4]; // [rsp+A8h] [rbp-90h] BYREF
  void *v32[4]; // [rsp+C8h] [rbp-70h] BYREF
  void *v33[4]; // [rsp+E8h] [rbp-50h] BYREF
  void *Src[4]; // [rsp+108h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+0h]

  v2 = Context + 432;
  v27 = Context + 432;
  if ( !Context[432] && IsAllowedSku() && BroadcastDVRComponent::IsMRPInstalled(v3) )
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
      (void **)Context + 50,
      &hObject);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    if ( !*((_QWORD *)Context + 50) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0xF2,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        v5);
    v6 = Context + 256;
    IsGameManager = CreateIsGameManager((struct IIsGameManager **)Context + 32);
    if ( IsGameManager < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xF4,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)(unsigned int)IsGameManager);
    BroadcastDVRComponent::RegisterNotifications(Context);
    if ( *v6 )
    {
      (*(void (__fastcall **)(_QWORD, void (__fastcall *)(void *), char *))(*(_QWORD *)*v6 + 80LL))(
        *v6,
        BroadcastDVRComponent::KGLRefreshedCallback,
        Context);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 48LL))(*v6);
    }
    BroadcastDVRComponent::IsGameDVREnabled((BroadcastDVRComponent *)Context);
    if ( *v6 )
    {
      LOBYTE(v8) = Context[444];
      v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v6 + 72LL))(*v6, v8);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x108,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
          (const char *)(unsigned int)v11);
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GameMRU>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_GameMRU>::GetImpl'::`2'::impl,
      1u,
      v9,
      v10);
    try
    {
      Default = (__int64 **)winrt::Windows::Storage::UserDataPaths::GetDefault();
      v13 = (winrt::hstring *)winrt::impl::consume_Windows_Foundation_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::Query(
                                Default,
                                &v26);
      v14 = winrt::hstring::c_str(v13);
      *(_QWORD *)&v24 = v14;
      v15 = -1LL;
      do
        ++v15;
      while ( v14[v15] );
      *((_QWORD *)&v24 + 1) = v15;
      std::filesystem::_Convert_stringoid_to_wide<std::filesystem::_Normal_conversion>(v32, &v24);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v26);
      if ( hObject )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&hObject);
      *(_QWORD *)&v24 = L"Microsoft\\GameDVR";
      *((_QWORD *)&v24 + 1) = 17LL;
      std::filesystem::_Convert_stringoid_to_wide<std::filesystem::_Normal_conversion>(v28, &v24);
      std::wstring::wstring((__int64)v29, (__int64)v32);
      std::filesystem::operator/(Src, (__int64)v29, (std::filesystem::path *)v28);
      std::wstring::_Tidy_deallocate(v29);
      std::wstring::_Tidy_deallocate(v28);
      *(_QWORD *)&v24 = L"GameMRU";
      *((_QWORD *)&v24 + 1) = 7LL;
      std::filesystem::_Convert_stringoid_to_wide<std::filesystem::_Normal_conversion>(v31, &v24);
      std::wstring::wstring((__int64)v29, (__int64)Src);
      std::filesystem::operator/(lpFileName, (__int64)v29, (std::filesystem::path *)v31);
      std::wstring::_Tidy_deallocate(v29);
      std::wstring::_Tidy_deallocate(v31);
      if ( !std::filesystem::exists((std::filesystem *)lpFileName, v16) )
      {
        v17 = (const WCHAR *)lpFileName;
        if ( lpFileName[3] > (LPCWSTR)7 )
          v17 = lpFileName[0];
        v18 = (unsigned __int64)_std_fs_create_directory(v17) >> 32;
        if ( (_DWORD)v18 )
          std::filesystem::_Throw_fs_error("create_directory", (unsigned int)v18, lpFileName);
      }
      *(_QWORD *)&v24 = L"LocalMruGameList.json";
      *((_QWORD *)&v24 + 1) = 21LL;
      std::filesystem::_Convert_stringoid_to_wide<std::filesystem::_Normal_conversion>(v29, &v24);
      std::wstring::wstring((__int64)v31, (__int64)lpFileName);
      std::filesystem::operator/(v33, (__int64)v31, (std::filesystem::path *)v29);
      std::wstring::_Tidy_deallocate(v31);
      std::wstring::_Tidy_deallocate(v29);
      std::wstring::wstring((__int64)v28, (__int64)v33);
      v19 = v28;
      if ( v28[3] > (void *)7 )
        v19 = (void **)v28[0];
      *(_QWORD *)&v24 = v19;
      *((void **)&v24 + 1) = v28[2];
      v20 = JsonGameMruManager::Create((__int64 *)&v26, &v24);
      v21 = *v20;
      *v20 = 0LL;
      v22 = *((_QWORD *)Context + 70);
      *((_QWORD *)Context + 70) = v21;
      if ( v22 )
        std::default_delete<JsonGameMruManager>::operator()();
      if ( v26 )
        std::default_delete<JsonGameMruManager>::operator()();
      std::wstring::_Tidy_deallocate(v28);
      std::wstring::_Tidy_deallocate(v33);
      std::wstring::_Tidy_deallocate((void **)lpFileName);
      std::wstring::_Tidy_deallocate(Src);
      std::wstring::_Tidy_deallocate(v32);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x122,
        (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        v23);
      v2 = v27;
    }
    *v2 = 1;
    GameDVRTraceProvider::BroadcastDVRComponent_CompleteInitializationTask_OnExit();
  }
}
