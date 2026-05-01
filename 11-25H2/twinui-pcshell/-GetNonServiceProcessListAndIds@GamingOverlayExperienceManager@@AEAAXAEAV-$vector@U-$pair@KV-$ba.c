/*
 * XREFs of ?GetNonServiceProcessListAndIds@GamingOverlayExperienceManager@@AEAAXAEAV?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@K@Z @ 0x18034677C
 * Callers:
 *     ?GetRelevantRunningProcessList@GamingOverlayExperienceManager@@UEAAJKPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Z @ 0x180346EA0 (-GetRelevantRunningProcessList@GamingOverlayExperienceManager@@UEAAJKPEAPEAU-$IVectorView@PEAUHS.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180093874 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAAPEAU?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@QEAU21@$$QEAU21@@Z @ 0x18033DA8C (--$_Emplace_reallocate@U-$pair@KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@s.c)
 *     ?GetPathProcessNameFromProcessId@GamingOverlayExperienceManager@@AEAAJKAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180346C4C (-GetPathProcessNameFromProcessId@GamingOverlayExperienceManager@@AEAAJKAEAV-$basic_string@GU-$ch.c)
 *     ?_Tidy@?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1803526F0 (-_Tidy@-$vector@U-$pair@KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@V-$.c)
 *     ?reserve@?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@QEAAX_K@Z @ 0x1803538A4 (-reserve@-$vector@U-$pair@KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@V.c)
 *     _alloca_probe @ 0x1806A4AA0 (_alloca_probe.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall GamingOverlayExperienceManager::GetNonServiceProcessListAndIds(__int64 a1, __int64 a2, int a3)
{
  int v3; // r15d
  const char *v5; // r9
  DWORD v6; // edi
  DWORD v7; // r13d
  unsigned int v8; // r15d
  _QWORD *v9; // r12
  __int128 *v10; // rcx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int64 v13; // rdx
  __int64 v14; // rcx
  DWORD i; // r14d
  DWORD v17; // [rsp+28h] [rbp-1110h] BYREF
  __int128 v18; // [rsp+30h] [rbp-1108h] BYREF
  __int128 v19; // [rsp+40h] [rbp-10F8h]
  _QWORD v20[14]; // [rsp+50h] [rbp-10E8h] BYREF
  DWORD cbNeeded; // [rsp+C0h] [rbp-1078h] BYREF
  __int128 v22; // [rsp+C8h] [rbp-1070h] BYREF
  __int64 v23; // [rsp+D8h] [rbp-1060h]
  __int128 v24; // [rsp+E0h] [rbp-1058h] BYREF
  __int128 v25; // [rsp+F0h] [rbp-1048h]
  DWORD idProcess[1024]; // [rsp+100h] [rbp-1038h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1138h] [rbp+0h]

  v3 = a3;
  cbNeeded = 0;
  if ( K32EnumProcesses(idProcess, 0x1000u, &cbNeeded) )
  {
    try
    {
      v20[0] = L"svchost.exe";
      v20[1] = L"explorer.exe";
      v20[2] = L"runtimebroker.exe";
      v20[3] = L"services.exe";
      v20[4] = L"sihost.exe";
      v20[5] = L"dllhost.exe";
      v20[6] = L"ShellExperienceHost.exe";
      v20[7] = L"StartMenuExperienceHost.exe";
      v20[8] = L"backgroundTaskHost.exe";
      v20[9] = L"taskhostw.exe";
      v20[10] = L"TabExperienceHost.exe";
      v20[11] = L"gamebar.exe";
      v20[12] = L"GameBarPresenceWriter.exe";
      v22 = 0LL;
      v23 = 0LL;
      v6 = cbNeeded >> 2;
      std::vector<std::pair<unsigned long,std::wstring>>::reserve(&v22, cbNeeded >> 2);
      for ( i = 0; i < v6; ++i )
      {
        v24 = 0LL;
        *(_QWORD *)&v25 = 0LL;
        *((_QWORD *)&v25 + 1) = 7LL;
        LOWORD(v24) = 0;
        v7 = idProcess[i];
        if ( v7 != v3 && (int)GamingOverlayExperienceManager::GetPathProcessNameFromProcessId(v14, v7, &v24) >= 0 )
        {
          v8 = 0;
          v9 = v20;
          while ( 1 )
          {
            v10 = &v24;
            if ( *((_QWORD *)&v25 + 1) > 7uLL )
              v10 = (__int128 *)v24;
            if ( !(unsigned int)_o__wcsicmp(v10, *v9) )
              break;
            ++v8;
            ++v9;
            if ( v8 >= 0xD )
            {
              v17 = v7;
              v11 = v24;
              v18 = v24;
              v12 = v25;
              v19 = v25;
              *(_QWORD *)&v25 = 0LL;
              *((_QWORD *)&v25 + 1) = 7LL;
              LOWORD(v24) = 0;
              v13 = *((_QWORD *)&v22 + 1);
              if ( *((_QWORD *)&v22 + 1) == v23 )
              {
                std::vector<std::pair<unsigned long,std::wstring>>::_Emplace_reallocate<std::pair<unsigned long,std::wstring>>(
                  (__int64 *)&v22,
                  *((__int64 *)&v22 + 1),
                  (__int64)&v17);
              }
              else
              {
                **((_DWORD **)&v22 + 1) = v7;
                *(_OWORD *)(v13 + 8) = v11;
                *(_OWORD *)(v13 + 24) = v12;
                *(_QWORD *)&v19 = 0LL;
                *((_QWORD *)&v19 + 1) = 7LL;
                LOWORD(v18) = 0;
                *((_QWORD *)&v22 + 1) += 40LL;
              }
              std::wstring::_Tidy_deallocate((void **)&v18);
              break;
            }
          }
          v3 = a3;
        }
        std::wstring::_Tidy_deallocate((void **)&v24);
      }
      if ( (__int128 *)a2 != &v22 )
      {
        std::vector<std::pair<unsigned long,std::wstring>>::_Tidy(a2);
        *(_OWORD *)a2 = v22;
        *(_QWORD *)(a2 + 16) = v23;
        v22 = 0LL;
        v23 = 0LL;
      }
    }
    catch ( std::bad_alloc )
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0xB88,
        (__int64)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)0x8007000ELL);
    }
    std::vector<std::pair<unsigned long,std::wstring>>::_Tidy(&v22);
  }
  else
  {
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0xB48,
      (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
      v5);
  }
}
