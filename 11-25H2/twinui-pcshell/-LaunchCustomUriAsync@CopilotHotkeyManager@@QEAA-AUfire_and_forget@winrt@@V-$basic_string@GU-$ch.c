/*
 * XREFs of ?LaunchCustomUriAsync@CopilotHotkeyManager@@QEAA?AUfire_and_forget@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBULauncherOptions@System@Windows@3@@Z @ 0x18060DA10
 * Callers:
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180601124 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     CopilotHotkeyManager::LaunchCustomUriAsync$_InitCoro$2 @ 0x18060D7FC (CopilotHotkeyManager--LaunchCustomUriAsync$_InitCoro$2.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall CopilotHotkeyManager::LaunchCustomUriAsync(__int64 a1, _BYTE *a2, void **a3, __int64 a4)
{
  void *v8; // rax
  _DWORD v10[46]; // [rsp+30h] [rbp-F8h] BYREF
  void **v11; // [rsp+E8h] [rbp-40h]

  v11 = a3;
  v8 = operator new(0xB0uLL);
  v10[0] = 0;
  CopilotHotkeyManager::LaunchCustomUriAsync__InitCoro_2(v10, (__int64)v8, a2, (__int64)a3, a4, a1);
  std::wstring::_Tidy_deallocate(a3);
  return a2;
}
