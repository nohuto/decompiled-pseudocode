/*
 * XREFs of ?AddGameToMruList@BroadcastDVRComponent@@AEAAXPEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1802136EC
 * Callers:
 *     ?OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x1800B3CA0 (-OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VI.c)
 *     ?ApplicationChangedTask@BroadcastDVRComponent@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@@Z @ 0x1801952B8 (-ApplicationChangedTask@BroadcastDVRComponent@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x18002A5E8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180065104 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AEF48 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800C40C8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?ReportImpressionAsync@?$consume_WindowsUdk_Services_Iris_IIrisServiceProvider@UIIrisServiceProvider@Iris@Services@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUIrisCreative@Iris@Services@WindowsUdk@3@@Z @ 0x1800F25FC (-ReportImpressionAsync@-$consume_WindowsUdk_Services_Iris_IIrisServiceProvider@UIIrisServiceProv.c)
 *     ?TryGetTitleFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x180213AA0 (-TryGetTitleFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBV1.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ??$call@AEAV_lambda_93cf3dd1a637ea07f09c92a2c241488e_@@@?$factory_cache_entry@UAppInfo@ApplicationModel@Windows@winrt@@UIAppInfoStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_93cf3dd1a637ea07f09c92a2c241488e_@@@Z @ 0x180313C58 (--$call@AEAV_lambda_93cf3dd1a637ea07f09c92a2c241488e_@@@-$factory_cache_entry@UAppInfo@Applicati.c)
 *     ??$make_shared@UGameMruItem@@AEAV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@4@AEAV54@AEAV54@@std@@YA?AV?$shared_ptr@UGameMruItem@@@0@AEAV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@0@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@11@Z @ 0x180313DD4 (--$make_shared@UGameMruItem@@AEAV-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$.c)
 *     ?DisplayName@?$consume_Windows_ApplicationModel_IPackage2@UPackage@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180315810 (-DisplayName@-$consume_Windows_ApplicationModel_IPackage2@UPackage@ApplicationModel@Windows@winr.c)
 *     ?Package@?$consume_Windows_ApplicationModel_IAppInfo2@UAppInfo@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1803177D4 (-Package@-$consume_Windows_ApplicationModel_IAppInfo2@UAppInfo@ApplicationModel@Windows@winrt@@@.c)
 *     ?AddMruItem@JsonGameMruManager@@QEAAXV?$shared_ptr@UGameMruItem@@@std@@@Z @ 0x18031B510 (-AddMruItem@JsonGameMruManager@@QEAAXV-$shared_ptr@UGameMruItem@@@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall BroadcastDVRComponent::AddGameToMruList(
        BroadcastDVRComponent *this,
        struct BroadcastDVRActiveAppInfo *a2)
{
  __int64 ticks; // rax
  __int64 v5; // r8
  __int128 *v6; // rcx
  __int64 v7; // rax
  WCHAR *v8; // rdx
  unsigned __int64 v9; // r8
  HWND v10; // rcx
  char *v11; // rbx
  __int64 TitleFromExePath; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  const char *v15; // r9
  volatile signed __int32 *dwProcessId; // [rsp+30h] [rbp-318h] BYREF
  __int64 v17; // [rsp+38h] [rbp-310h] BYREF
  __int64 v18; // [rsp+40h] [rbp-308h] BYREF
  _DWORD **v19; // [rsp+48h] [rbp-300h] BYREF
  _QWORD v20[2]; // [rsp+50h] [rbp-2F8h] BYREF
  _DWORD *v21; // [rsp+60h] [rbp-2E8h] BYREF
  _DWORD v22[4]; // [rsp+68h] [rbp-2E0h] BYREF
  __int128 *v23; // [rsp+78h] [rbp-2D0h]
  __int64 *v24; // [rsp+80h] [rbp-2C8h]
  __int128 v25; // [rsp+88h] [rbp-2C0h] BYREF
  __int64 v26; // [rsp+98h] [rbp-2B0h]
  unsigned __int64 v27; // [rsp+A0h] [rbp-2A8h]
  __int128 v28; // [rsp+A8h] [rbp-2A0h] BYREF
  __int64 v29; // [rsp+B8h] [rbp-290h]
  __int64 v30; // [rsp+C0h] [rbp-288h]
  _OWORD v31[2]; // [rsp+C8h] [rbp-280h] BYREF
  void *v32[5]; // [rsp+E8h] [rbp-260h] BYREF
  WCHAR Filename[264]; // [rsp+110h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+348h] [rbp+0h]

  if ( *((_QWORD *)this + 70) )
  {
    ticks = _Xtime_get_ticks();
    try
    {
      v20[0] = ticks;
      v31[0] = 0LL;
      v31[1] = _mm_load_si128((const __m128i *)&_xmm);
      LOWORD(v31[0]) = 0;
      v25 = 0LL;
      v26 = 0LL;
      v27 = 7LL;
      LOWORD(v25) = 0;
      v28 = 0LL;
      v29 = 0LL;
      v30 = 7LL;
      LOWORD(v28) = 0;
      if ( *((_QWORD *)a2 + 11) )
      {
        std::wstring::operator=((char *)&v25, (char *)a2 + 72, v5);
        v6 = &v25;
        if ( v27 > 7 )
          v6 = (__int128 *)v25;
        if ( (_DWORD)v26 )
        {
          if ( *((_WORD *)v6 + (unsigned int)v26) )
            abort();
          v22[0] = 1;
          v22[1] = v26;
          v23 = v6;
          v21 = v22;
        }
        else
        {
          v21 = 0LL;
        }
        v19 = &v21;
        v24 = &qword_18089AAD8;
        _InterlockedIncrement64(&qword_18089AAD8);
        if ( winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::AppInfo,winrt::Windows::ApplicationModel::IAppInfoStatics> )
        {
          winrt::impl::consume_WindowsUdk_Services_Iris_IIrisServiceProvider<winrt::WindowsUdk::Services::Iris::IIrisServiceProvider>::ReportImpressionAsync(
            (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::AppInfo,winrt::Windows::ApplicationModel::IAppInfoStatics>,
            &v17,
            (__int64 *)&v21);
          _InterlockedDecrement64(&qword_18089AAD8);
        }
        else
        {
          _InterlockedDecrement64(&qword_18089AAD8);
          winrt::impl::factory_cache_entry<winrt::Windows::ApplicationModel::AppInfo,winrt::Windows::ApplicationModel::IAppInfoStatics>::call<_lambda_93cf3dd1a637ea07f09c92a2c241488e_ &>(
            v6,
            &v17,
            &v19);
        }
        winrt::impl::consume_Windows_ApplicationModel_IAppInfo2<winrt::Windows::ApplicationModel::AppInfo>::Package(
          &v17,
          &v18);
        v7 = *(_QWORD *)winrt::impl::consume_Windows_ApplicationModel_IPackage2<winrt::Windows::ApplicationModel::Package>::DisplayName(
                          &v18,
                          &dwProcessId);
        if ( v7 )
        {
          v8 = *(WCHAR **)(v7 + 16);
          v9 = *(unsigned int *)(v7 + 4);
        }
        else
        {
          v8 = (WCHAR *)&LocaleName;
          v9 = 0LL;
        }
        std::wstring::assign((void **)v31, v8, v9);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&dwProcessId);
        if ( v18 )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v18);
        if ( v17 )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v17);
      }
      else
      {
        LODWORD(dwProcessId) = 0;
        v10 = *(HWND *)a2;
        if ( !*(_QWORD *)a2 )
          v10 = (HWND)*((_QWORD *)a2 + 1);
        GetWindowThreadProcessId(v10, (LPDWORD)&dwProcessId);
        if ( (_DWORD)dwProcessId )
        {
          v11 = (char *)OpenProcess(0x1000u, 0, (DWORD)dwProcessId);
          v20[1] = v11;
          if ( ((unsigned __int64)(v11 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          {
            memset_0(Filename, 0, 0x208uLL);
            if ( K32GetModuleFileNameExW(v11, 0LL, Filename, 0x104u) )
            {
              std::wstring::operator=((void **)&v28, Filename);
              TitleFromExePath = TryGetTitleFromExePath(v32, &v28);
              std::wstring::operator=((__int64)v31, TitleFromExePath);
              std::wstring::_Tidy_deallocate(v32);
            }
          }
          if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            CloseHandle(v11);
        }
      }
      if ( v26 || v29 )
      {
        v13 = *((_QWORD *)this + 70);
        v14 = std::make_shared<GameMruItem,std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>> &,std::wstring &,std::wstring &,std::wstring &>(
                (unsigned int)v32,
                (unsigned int)v20,
                (unsigned int)v31,
                (unsigned int)&v25,
                (__int64)&v28);
        JsonGameMruManager::AddMruItem(v13, v14);
        *((_DWORD *)a2 + 14) |= 0x100u;
      }
      std::wstring::_Tidy_deallocate((void **)&v28);
      std::wstring::_Tidy_deallocate((void **)&v25);
      std::wstring::_Tidy_deallocate((void **)v31);
    }
    catch ( std::bad_alloc )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1037,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)0x8007000ELL);
      return;
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x1039,
        (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        v15);
    }
  }
}
