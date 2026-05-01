/*
 * XREFs of ?AddGameToMruList@BroadcastDVRComponent@@AEAAXPEAUBroadcastDVRActiveAppInfo@@@Z @ 0x18013CA24
 * Callers:
 *     ?OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x180035E18 (-OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VI.c)
 *     ?ApplicationChangedTask@BroadcastDVRComponent@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@@Z @ 0x18018DDA8 (-ApplicationChangedTask@BroadcastDVRComponent@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x180030514 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Take_contents@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXAEAV12@@Z @ 0x1800336B0 (-_Take_contents@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXAEAV12@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?ReportImpressionAsync@?$consume_WindowsUdk_Services_Iris_IIrisServiceProvider@UIIrisServiceProvider@Iris@Services@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUIrisCreative@Iris@Services@WindowsUdk@3@@Z @ 0x180124100 (-ReportImpressionAsync@-$consume_WindowsUdk_Services_Iris_IIrisServiceProvider@UIIrisServiceProv.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18013BBB8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18013D314 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?TryGetTitleFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x18013D51C (-TryGetTitleFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBV1.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??$call@AEAV_lambda_93cf3dd1a637ea07f09c92a2c241488e_@@@?$factory_cache_entry@UAppInfo@ApplicationModel@Windows@winrt@@UIAppInfoStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_93cf3dd1a637ea07f09c92a2c241488e_@@@Z @ 0x18030FD6C (--$call@AEAV_lambda_93cf3dd1a637ea07f09c92a2c241488e_@@@-$factory_cache_entry@UAppInfo@Applicati.c)
 *     ??$make_shared@UGameMruItem@@AEAV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@4@AEAV54@AEAV54@@std@@YA?AV?$shared_ptr@UGameMruItem@@@0@AEAV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@0@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@11@Z @ 0x18030FF04 (--$make_shared@UGameMruItem@@AEAV-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$.c)
 *     ?DisplayName@?$consume_Windows_ApplicationModel_IPackage2@UPackage@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1803119BC (-DisplayName@-$consume_Windows_ApplicationModel_IPackage2@UPackage@ApplicationModel@Windows@winr.c)
 *     ?Package@?$consume_Windows_ApplicationModel_IAppInfo2@UAppInfo@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180313978 (-Package@-$consume_Windows_ApplicationModel_IAppInfo2@UAppInfo@ApplicationModel@Windows@winrt@@@.c)
 *     ?AddMruItem@JsonGameMruManager@@QEAAXV?$shared_ptr@UGameMruItem@@@std@@@Z @ 0x180317AF0 (-AddMruItem@JsonGameMruManager@@QEAAXV-$shared_ptr@UGameMruItem@@@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall BroadcastDVRComponent::AddGameToMruList(BroadcastDVRComponent *this, HWND *a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rax
  WCHAR *v6; // rdx
  unsigned __int64 v7; // r8
  HWND v8; // rcx
  __int64 *v9; // rbx
  _OWORD *TitleFromExePath; // rsi
  __int64 v11; // rbx
  __int64 v12; // rax
  const char *v13; // r9
  DWORD dwProcessId[2]; // [rsp+30h] [rbp-2E8h] BYREF
  __int64 v15; // [rsp+38h] [rbp-2E0h] BYREF
  volatile signed __int32 *v16; // [rsp+40h] [rbp-2D8h] BYREF
  __int64 *v17; // [rsp+48h] [rbp-2D0h] BYREF
  __int64 ticks; // [rsp+58h] [rbp-2C0h] BYREF
  _DWORD *v19; // [rsp+60h] [rbp-2B8h] BYREF
  _DWORD v20[4]; // [rsp+68h] [rbp-2B0h] BYREF
  _QWORD *v21; // [rsp+78h] [rbp-2A0h]
  _QWORD v22[2]; // [rsp+80h] [rbp-298h] BYREF
  __int64 v23; // [rsp+90h] [rbp-288h]
  unsigned __int64 v24; // [rsp+98h] [rbp-280h]
  _OWORD v25[2]; // [rsp+A0h] [rbp-278h] BYREF
  _QWORD v26[4]; // [rsp+C0h] [rbp-258h] BYREF
  WCHAR Filename[264]; // [rsp+E0h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+318h] [rbp+0h]

  if ( *((_QWORD *)this + 70) )
  {
    ticks = _Xtime_get_ticks();
    std::wstring::wstring((__int64)v25);
    std::wstring::wstring((__int64)v22);
    std::wstring::wstring((__int64)v26);
    try
    {
      if ( a2[11] )
      {
        std::wstring::operator=(v22);
        v4 = v22;
        if ( v24 > 7 )
          v4 = (_QWORD *)v22[0];
        if ( (_DWORD)v23 )
        {
          if ( *((_WORD *)v4 + (unsigned int)v23) )
            abort();
          v20[0] = 1;
          v20[1] = v23;
          v21 = v4;
          v19 = v20;
        }
        else
        {
          v19 = 0LL;
        }
        v16 = (volatile signed __int32 *)&v19;
        v17 = &qword_1808DB1C8;
        _InterlockedIncrement64(&qword_1808DB1C8);
        if ( winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::AppInfo,winrt::Windows::ApplicationModel::IAppInfoStatics> )
        {
          winrt::impl::consume_WindowsUdk_Services_Iris_IIrisServiceProvider<winrt::WindowsUdk::Services::Iris::IIrisServiceProvider>::ReportImpressionAsync(
            (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::AppInfo,winrt::Windows::ApplicationModel::IAppInfoStatics>,
            dwProcessId,
            (__int64 *)&v19);
          _InterlockedDecrement64(&qword_1808DB1C8);
        }
        else
        {
          _InterlockedDecrement64(&qword_1808DB1C8);
          winrt::impl::factory_cache_entry<winrt::Windows::ApplicationModel::AppInfo,winrt::Windows::ApplicationModel::IAppInfoStatics>::call<_lambda_93cf3dd1a637ea07f09c92a2c241488e_ &>(
            v4,
            dwProcessId,
            &v16);
        }
        winrt::impl::consume_Windows_ApplicationModel_IAppInfo2<winrt::Windows::ApplicationModel::AppInfo>::Package(
          dwProcessId,
          &v15);
        v5 = *(_QWORD *)winrt::impl::consume_Windows_ApplicationModel_IPackage2<winrt::Windows::ApplicationModel::Package>::DisplayName(
                          &v15,
                          &v16);
        if ( v5 )
        {
          v6 = *(WCHAR **)(v5 + 16);
          v7 = *(unsigned int *)(v5 + 4);
        }
        else
        {
          v6 = (WCHAR *)&pvData;
          v7 = 0LL;
        }
        std::wstring::assign((char *)v25, v6, v7);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v16);
        if ( v15 )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v15);
        if ( *(_QWORD *)dwProcessId )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)dwProcessId);
      }
      else
      {
        dwProcessId[0] = 0;
        v8 = *a2;
        if ( !*a2 )
          v8 = a2[1];
        GetWindowThreadProcessId(v8, dwProcessId);
        if ( dwProcessId[0] )
        {
          v9 = (__int64 *)OpenProcess(0x1000u, 0, dwProcessId[0]);
          v17 = v9;
          if ( (((unsigned __int64)v9 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          {
            memset_0(Filename, 0, 0x208uLL);
            if ( K32GetModuleFileNameExW(v9, 0LL, Filename, 0x104u) )
            {
              std::wstring::operator=((char *)v26, Filename);
              TitleFromExePath = (_OWORD *)TryGetTitleFromExePath(&v19, v26);
              if ( v25 != TitleFromExePath )
              {
                std::wstring::_Tidy_deallocate(v25);
                std::wstring::_Take_contents(v25, (__int64)TitleFromExePath);
              }
              std::wstring::_Tidy_deallocate(&v19);
            }
          }
          if ( (unsigned __int64)v9 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
            CloseHandle(v9);
        }
      }
      if ( v23 || v26[2] )
      {
        v11 = *((_QWORD *)this + 70);
        v12 = std::make_shared<GameMruItem,std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>> &,std::wstring &,std::wstring &,std::wstring &>(
                (unsigned int)&v17,
                (unsigned int)&ticks,
                (unsigned int)v25,
                (unsigned int)v22,
                (__int64)v26);
        JsonGameMruManager::AddMruItem(v11, v12);
        *((_DWORD *)a2 + 14) |= 0x100u;
      }
      std::wstring::_Tidy_deallocate(v26);
      std::wstring::_Tidy_deallocate(v22);
      std::wstring::_Tidy_deallocate(v25);
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
        v13);
    }
  }
}
