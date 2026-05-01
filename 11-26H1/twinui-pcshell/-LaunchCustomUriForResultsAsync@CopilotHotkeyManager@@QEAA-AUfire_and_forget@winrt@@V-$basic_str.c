/*
 * XREFs of ?LaunchCustomUriForResultsAsync@CopilotHotkeyManager@@QEAA?AUfire_and_forget@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@ULauncherOptions@System@Windows@3@@Z @ 0x180632BE0
 * Callers:
 *     ?HandlePenButtonAction@CopilotHotkeyManager@@AEAAXW4CopilotInvocationType@@AEBUPropertyDetails@@@Z @ 0x18062673C (-HandlePenButtonAction@CopilotHotkeyManager@@AEAAXW4CopilotInvocationType@@AEBUPropertyDetails@@.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x180033808 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     CopilotHotkeyManager::LaunchCustomUriForResultsAsync$_ResumeCoro$1 @ 0x1806328B0 (CopilotHotkeyManager--LaunchCustomUriForResultsAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=4
_BYTE *__fastcall CopilotHotkeyManager::LaunchCustomUriForResultsAsync(
        __int64 a1,
        _BYTE *a2,
        _QWORD *a3,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  _QWORD *v11; // [rsp+20h] [rbp-58h]

  v11 = operator new(0x110uLL);
  v11[27] = a1;
  std::wstring::wstring((__int64)(v11 + 28), (__int64)a3);
  v8 = *(_QWORD *)a4;
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(v9 + 256) = v8;
  *(_QWORD *)v9 = CopilotHotkeyManager::LaunchCustomUriForResultsAsync__ResumeCoro_1;
  *(_DWORD *)(v9 + 8) = 65538;
  *a2 = 0;
  *(_BYTE *)(v9 + 208) = 0;
  CopilotHotkeyManager::LaunchCustomUriForResultsAsync__ResumeCoro_1((char *)v9);
  std::wstring::_Tidy_deallocate(a3);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a4);
  return a2;
}
