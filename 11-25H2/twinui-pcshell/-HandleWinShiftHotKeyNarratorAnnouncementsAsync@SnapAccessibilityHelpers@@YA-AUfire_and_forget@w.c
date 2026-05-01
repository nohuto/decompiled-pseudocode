/*
 * XREFs of ?HandleWinShiftHotKeyNarratorAnnouncementsAsync@SnapAccessibilityHelpers@@YA?AUfire_and_forget@winrt@@PEAUHWND__@@W4_SHELLSETWINDOWPOS_STATE@@UCRect@Geometry@@2PEAUIImmersiveMonitorManager@@@Z @ 0x18059B1BC
 * Callers:
 *     ?OnWindowMigrationEvent@SnapMigrationHandler@@AEAAXAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@34567@@Z @ 0x180592E30 (-OnWindowMigrationEvent@SnapMigrationHandler@@AEAAXAEBUIWindowManagementEvents2@WindowManagement.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync$_InitCoro$2 @ 0x18059AC28 (SnapAccessibilityHelpers--HandleWinShiftHotKeyNarratorAnnouncementsAsync$_InitCoro$2.c)
 */

char __fastcall SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync(
        __int64 a1,
        int a2,
        _OWORD *a3,
        _OWORD *a4,
        __int64 a5)
{
  char *v8; // rax
  _BYTE v10[8]; // [rsp+40h] [rbp-158h] BYREF
  int v11; // [rsp+48h] [rbp-150h] BYREF
  _DWORD v12[82]; // [rsp+50h] [rbp-148h] BYREF

  v11 = a2;
  v8 = (char *)operator new(0x110uLL);
  v12[0] = 0;
  SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync__InitCoro_2(
    v10,
    v12,
    v8,
    a1,
    &v11,
    a3,
    a4,
    a5);
  return v10[0];
}
