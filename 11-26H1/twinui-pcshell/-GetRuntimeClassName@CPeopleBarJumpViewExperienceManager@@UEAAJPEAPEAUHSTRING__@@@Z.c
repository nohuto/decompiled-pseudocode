/*
 * XREFs of ?GetRuntimeClassName@CPeopleBarJumpViewExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180383900
 * Callers:
 *     ?GetRuntimeClassName@CPeopleBarJumpViewExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180383930 (-GetRuntimeClassName@CPeopleBarJumpViewExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CPeopleBarJumpViewExperienceManager::GetRuntimeClassName(
        CPeopleBarJumpViewExperienceManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.PeopleBarJumpViewExperienceManager", 0x44u, a2);
}
