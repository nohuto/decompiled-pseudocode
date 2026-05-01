/*
 * XREFs of SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync$_InitCoro$2 @ 0x18059AC28
 * Callers:
 *     ?HandleWinShiftHotKeyNarratorAnnouncementsAsync@SnapAccessibilityHelpers@@YA?AUfire_and_forget@winrt@@PEAUHWND__@@W4_SHELLSETWINDOWPOS_STATE@@UCRect@Geometry@@2PEAUIImmersiveMonitorManager@@@Z @ 0x18059B1BC (-HandleWinShiftHotKeyNarratorAnnouncementsAsync@SnapAccessibilityHelpers@@YA-AUfire_and_forget@w.c)
 * Callees:
 *     SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync$_ResumeCoro$1 @ 0x18059ACC0 (SnapAccessibilityHelpers--HandleWinShiftHotKeyNarratorAnnouncementsAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync__InitCoro_2(
        _BYTE *a1,
        _DWORD *a2,
        char *a3,
        __int64 a4,
        int *a5,
        _OWORD *a6,
        _OWORD *a7,
        __int64 a8)
{
  int v8; // r10d

  v8 = *a5;
  *(_QWORD *)(a3 + 209) = a4;
  *(_DWORD *)(a3 + 217) = v8;
  *(_OWORD *)(a3 + 221) = *a6;
  *(_OWORD *)(a3 + 237) = *a7;
  *(_QWORD *)(a3 + 257) = a8;
  *(_QWORD *)a3 = SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync__ResumeCoro_1;
  *((_DWORD *)a3 + 2) = *a2 != 0 ? 2 : 65538;
  *a1 = 0;
  a3[208] = 0;
  return SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync__ResumeCoro_1(a3);
}
