/*
 * XREFs of ?GetRuntimeClassName@CControlCenterExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180365710
 * Callers:
 *     ?GetRuntimeClassName@CControlCenterExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180365740 (-GetRuntimeClassName@CControlCenterExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CControlCenterExperienceManager@@WCA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180365750 (-GetRuntimeClassName@CControlCenterExperienceManager@@WCA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CControlCenterExperienceManager@@WEA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180365760 (-GetRuntimeClassName@CControlCenterExperienceManager@@WEA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CControlCenterExperienceManager::GetRuntimeClassName(
        CControlCenterExperienceManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.ControlCenterExperienceManager", 0x40u, a2);
}
