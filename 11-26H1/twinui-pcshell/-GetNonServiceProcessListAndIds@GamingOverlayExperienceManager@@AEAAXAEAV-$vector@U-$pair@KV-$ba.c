/*
 * XREFs of ?GetNonServiceProcessListAndIds@GamingOverlayExperienceManager@@AEAAXAEAV?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@K@Z @ 0x1803497CC
 * Callers:
 *     ?GetRelevantRunningProcessList@GamingOverlayExperienceManager@@UEAAJKPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Z @ 0x18034A040 (-GetRelevantRunningProcessList@GamingOverlayExperienceManager@@UEAAJKPEAPEAU-$IVectorView@PEAUHS.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x180033808 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAAPEAU?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@QEAU21@$$QEAU21@@Z @ 0x18033D83C (--$_Emplace_reallocate@U-$pair@KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@s.c)
 *     ?GetPathProcessNameFromProcessId@GamingOverlayExperienceManager@@AEAAJKAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180349DF0 (-GetPathProcessNameFromProcessId@GamingOverlayExperienceManager@@AEAAJKAEAV-$basic_string@GU-$ch.c)
 *     ?_Tidy@?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAAXXZ @ 0x18035865C (-_Tidy@-$vector@U-$pair@KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@V-$.c)
 *     ?reserve@?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@QEAAX_K@Z @ 0x180359F9C (-reserve@-$vector@U-$pair@KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@V.c)
 *     _alloca_probe @ 0x1806CCB80 (_alloca_probe.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall GamingOverlayExperienceManager::GetNonServiceProcessListAndIds(__int64 a1, __int64 a2, int a3)
{
  int v3; // r15d
  const char *v5; // r9
  DWORD v6; // edi
  __m128i si128; // xmm6
  DWORD v8; // r13d
  unsigned int v9; // r15d
  _QWORD *v10; // r12
  __int128 *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  DWORD v14; // r14d
  DWORD v16; // [rsp+28h] [rbp-1120h] BYREF
  _QWORD v17[4]; // [rsp+30h] [rbp-1118h] BYREF
  _QWORD v18[14]; // [rsp+50h] [rbp-10F8h] BYREF
  DWORD cbNeeded; // [rsp+C0h] [rbp-1088h] BYREF
  __int128 v20; // [rsp+C8h] [rbp-1080h] BYREF
  __int64 v21; // [rsp+D8h] [rbp-1070h]
  __int128 v22; // [rsp+E0h] [rbp-1068h] BYREF
  __m128i v23; // [rsp+F0h] [rbp-1058h]
  DWORD idProcess[1024]; // [rsp+100h] [rbp-1048h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1148h] [rbp+0h]

  v3 = a3;
  cbNeeded = 0;
  if ( K32EnumProcesses(idProcess, 0x1000u, &cbNeeded) )
  {
    try
    {
      v18[0] = L"svchost.exe";
      v18[1] = L"explorer.exe";
      v18[2] = L"runtimebroker.exe";
      v18[3] = L"services.exe";
      v18[4] = L"sihost.exe";
      v18[5] = L"dllhost.exe";
      v18[6] = L"ShellExperienceHost.exe";
      v18[7] = L"StartMenuExperienceHost.exe";
      v18[8] = L"backgroundTaskHost.exe";
      v18[9] = L"taskhostw.exe";
      v18[10] = L"TabExperienceHost.exe";
      v18[11] = L"gamebar.exe";
      v18[12] = L"GameBarPresenceWriter.exe";
      v20 = 0LL;
      v21 = 0LL;
      v6 = cbNeeded >> 2;
      std::vector<std::pair<unsigned long,std::wstring>>::reserve(&v20, cbNeeded >> 2);
      v14 = 0;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      while ( v14 < v6 )
      {
        v22 = 0LL;
        v23 = si128;
        LOWORD(v22) = 0;
        v8 = idProcess[v14];
        if ( v8 != v3 && (int)GamingOverlayExperienceManager::GetPathProcessNameFromProcessId(v13, v8, &v22) >= 0 )
        {
          v9 = 0;
          v10 = v18;
          while ( 1 )
          {
            v11 = &v22;
            if ( v23.m128i_i64[1] > 7uLL )
              v11 = (__int128 *)v22;
            if ( !(unsigned int)_o__wcsicmp(v11, *v10) )
              break;
            ++v9;
            ++v10;
            if ( v9 >= 0xD )
            {
              v16 = v8;
              std::wstring::wstring((__int64)v17, (__int64)&v22);
              v12 = *((_QWORD *)&v20 + 1);
              if ( *((_QWORD *)&v20 + 1) == v21 )
              {
                std::vector<std::pair<unsigned long,std::wstring>>::_Emplace_reallocate<std::pair<unsigned long,std::wstring>>(
                  &v20,
                  *((__int64 *)&v20 + 1),
                  &v16);
              }
              else
              {
                **((_DWORD **)&v20 + 1) = v16;
                std::wstring::wstring(v12 + 8, (__int64)v17);
                *((_QWORD *)&v20 + 1) += 40LL;
              }
              std::wstring::_Tidy_deallocate(v17);
              break;
            }
          }
          v3 = a3;
        }
        std::wstring::_Tidy_deallocate(&v22);
        ++v14;
      }
      if ( (__int128 *)a2 != &v20 )
      {
        std::vector<std::pair<unsigned long,std::wstring>>::_Tidy(a2);
        *(_OWORD *)a2 = v20;
        *(_QWORD *)(a2 + 16) = v21;
        v20 = 0LL;
        v21 = 0LL;
      }
    }
    catch ( std::bad_alloc )
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0xBBF,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)0x8007000ELL);
    }
    std::vector<std::pair<unsigned long,std::wstring>>::_Tidy(&v20);
  }
  else
  {
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0xB7F,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      v5);
  }
}
