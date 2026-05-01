/*
 * XREFs of CopilotHotkeyManager::LaunchCustomUriAsync$_InitCoro$2 @ 0x18060D7FC
 * Callers:
 *     ?LaunchCustomUriAsync@CopilotHotkeyManager@@QEAA?AUfire_and_forget@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBULauncherOptions@System@Windows@3@@Z @ 0x18060DA10 (-LaunchCustomUriAsync@CopilotHotkeyManager@@QEAA-AUfire_and_forget@winrt@@V-$basic_string@GU-$ch.c)
 * Callees:
 *     CopilotHotkeyManager::LaunchCustomUriAsync$_ResumeCoro$1 @ 0x18060D8A0 (CopilotHotkeyManager--LaunchCustomUriAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CopilotHotkeyManager::LaunchCustomUriAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  *(_QWORD *)(a2 + 113) = a6;
  *(_OWORD *)(a2 + 121) = 0LL;
  *(_QWORD *)(a2 + 137) = 0LL;
  *(_QWORD *)(a2 + 145) = 0LL;
  *(_OWORD *)(a2 + 121) = *(_OWORD *)a4;
  *(_OWORD *)(a2 + 137) = *(_OWORD *)(a4 + 16);
  *(_QWORD *)(a4 + 16) = 0LL;
  *(_QWORD *)(a4 + 24) = 7LL;
  *(_WORD *)a4 = 0;
  *(_QWORD *)(a2 + 153) = a5;
  *(_QWORD *)a2 = CopilotHotkeyManager::LaunchCustomUriAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 112) = 0;
  return CopilotHotkeyManager::LaunchCustomUriAsync__ResumeCoro_1(a2);
}
