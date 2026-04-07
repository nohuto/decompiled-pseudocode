/*
 * XREFs of ?WillEndAnimationCloaked@CWindowData@@QEBA_NXZ @ 0x18004485C
 * Callers:
 *     ?_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800431F0 (-_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ.c)
 *     ?PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ @ 0x1800447C8 (-PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ.c)
 *     ?ShouldShowAnimation@CHidePopup@@UEBA_NPEAVCWindowData@@@Z @ 0x1800C8AC0 (-ShouldShowAnimation@CHidePopup@@UEBA_NPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z @ 0x18004489C (-GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z.c)
 */

bool __fastcall CWindowData::WillEndAnimationCloaked(CWindowData *this)
{
  HWND v1; // rdx
  bool v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (HWND)*((_QWORD *)this + 5);
  v3 = *((_BYTE *)this + 676) & 1;
  CWindowPropertyTracker::GetWindowEndCloak(
    (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
    v1,
    &v3);
  return v3;
}
