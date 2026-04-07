/*
 * XREFs of ?WillEndAnimationCloaked@CWindowData@@QEBA_NXZ @ 0x180059A84
 * Callers:
 *     ?_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x18002E220 (-_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ.c)
 *     ?PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ @ 0x1800599F0 (-PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ.c)
 *     ?ShouldShowAnimation@CHidePopup@@UEBA_NPEAVCWindowData@@@Z @ 0x1800C2AE0 (-ShouldShowAnimation@CHidePopup@@UEBA_NPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z @ 0x180017A20 (-GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z.c)
 */

bool __fastcall CWindowData::WillEndAnimationCloaked(CWindowData *this)
{
  HWND v1; // rdx
  bool v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (HWND)*((_QWORD *)this + 5);
  v3 = *((_BYTE *)this + 740) & 1;
  CWindowPropertyTracker::GetWindowEndCloak(
    (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
    v1,
    &v3);
  return v3;
}
