/*
 * XREFs of ?LaunchCustomUriAsync@CopilotHotkeyManager@@QEAA?AUfire_and_forget@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBULauncherOptions@System@Windows@3@@Z @ 0x1806327F4
 * Callers:
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@AEAV?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@@Z @ 0x180626954 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@AEAV-$tip_test@.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x180033808 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     CopilotHotkeyManager::LaunchCustomUriAsync$_ResumeCoro$1 @ 0x180632670 (CopilotHotkeyManager--LaunchCustomUriAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=3
_BYTE *__fastcall CopilotHotkeyManager::LaunchCustomUriAsync(__int64 a1, _BYTE *a2, _QWORD *a3, __int64 a4)
{
  __int64 v8; // r8
  _QWORD *v10; // [rsp+20h] [rbp-48h]

  v10 = operator new(0xB0uLL);
  v10[15] = a1;
  std::wstring::wstring((__int64)(v10 + 16), (__int64)a3);
  *(_QWORD *)(v8 + 160) = a4;
  *(_QWORD *)v8 = CopilotHotkeyManager::LaunchCustomUriAsync__ResumeCoro_1;
  *(_DWORD *)(v8 + 8) = 65538;
  *a2 = 0;
  *(_BYTE *)(v8 + 112) = 0;
  CopilotHotkeyManager::LaunchCustomUriAsync__ResumeCoro_1(v8);
  std::wstring::_Tidy_deallocate(a3);
  return a2;
}
