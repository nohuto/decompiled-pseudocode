/*
 * XREFs of ?IsTargetAppWindow@CopilotHotkeyManager@@SA_NPEAUHWND__@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1806324B0
 * Callers:
 *     ?EnumWindowsCallback@CopilotHotkeyManager@@SAHPEAUHWND__@@_J@Z @ 0x180623FE0 (-EnumWindowsCallback@CopilotHotkeyManager@@SAHPEAUHWND__@@_J@Z.c)
 *     ?FindMessageWindow@CopilotHotkeyManager@@QEAA_NPEAUFastpathWindowProperty@@@Z @ 0x180624054 (-FindMessageWindow@CopilotHotkeyManager@@QEAA_NPEAUFastpathWindowProperty@@@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??1?$_Optional_destruct_base@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0A@@std@@QEAA@XZ @ 0x180335398 (--1-$_Optional_destruct_base@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$0A@@.c)
 *     ?TryGetAppUserModelForProcess@CopilotHotkeyManager@@SA?AV?$optional@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@K@Z @ 0x180635158 (-TryGetAppUserModelForProcess@CopilotHotkeyManager@@SA-AV-$optional@V-$basic_string@GU-$char_tra.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall CopilotHotkeyManager::IsTargetAppWindow(HWND a1, _QWORD *a2)
{
  bool v3; // di
  char *v4; // rcx
  char *v5; // rax
  signed __int64 v6; // rcx
  int v7; // edx
  int v8; // r8d
  DWORD dwProcessId; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v11[4]; // [rsp+28h] [rbp-40h] BYREF
  char v12; // [rsp+48h] [rbp-20h]
  _QWORD *v13; // [rsp+50h] [rbp-18h]

  v13 = a2;
  v3 = 0;
  dwProcessId = 0;
  if ( GetWindowThreadProcessId(a1, &dwProcessId) )
  {
    CopilotHotkeyManager::TryGetAppUserModelForProcess(v11, dwProcessId);
    if ( v12 )
    {
      v4 = (char *)a2;
      if ( a2[3] > 7uLL )
        v4 = (char *)*a2;
      v5 = (char *)v11;
      if ( v11[3] > 7uLL )
        v5 = (char *)v11[0];
      v6 = v4 - v5;
      do
      {
        v7 = *(unsigned __int16 *)&v5[v6];
        v8 = *(unsigned __int16 *)v5 - v7;
        if ( v8 )
          break;
        v5 += 2;
      }
      while ( v7 );
      v3 = v8 == 0;
    }
    std::_Optional_destruct_base<std::wstring,0>::~_Optional_destruct_base<std::wstring,0>((__int64)v11);
  }
  std::wstring::_Tidy_deallocate(a2);
  return v3;
}
