/*
 * XREFs of ?HandleWinShiftHotKeyNarratorAnnouncementsAsync@SnapAccessibilityHelpers@@YA?AUfire_and_forget@winrt@@PEAUHWND__@@W4_SHELLSETWINDOWPOS_STATE@@UCRect@Geometry@@2PEAUIImmersiveMonitorManager@@@Z @ 0x1805BF404
 * Callers:
 *     ?OnWindowMigrationEvent@SnapMigrationHandler@@AEAAXAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@34567@@Z @ 0x1805B6E00 (-OnWindowMigrationEvent@SnapMigrationHandler@@AEAAXAEBUIWindowManagementEvents2@WindowManagement.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync$_ResumeCoro$1 @ 0x1805BEF10 (SnapAccessibilityHelpers--HandleWinShiftHotKeyNarratorAnnouncementsAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync(
        __int64 a1,
        int a2,
        _OWORD *a3,
        _OWORD *a4,
        __int64 a5)
{
  void *v9; // r8
  char *v11; // [rsp+20h] [rbp-28h]

  v11 = (char *)operator new(0x110uLL);
  *((_QWORD *)v11 + 27) = a1;
  *((_DWORD *)v11 + 56) = a2;
  *(_OWORD *)(v11 + 228) = *a3;
  *(_OWORD *)(v11 + 244) = *a4;
  *((_QWORD *)v11 + 33) = a5;
  *(_QWORD *)v11 = SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync__ResumeCoro_1;
  *((_DWORD *)v11 + 2) = 65538;
  v11[208] = 0;
  SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync__ResumeCoro_1(v11, 0LL, v9);
  return 0;
}
