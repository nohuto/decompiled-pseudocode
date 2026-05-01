/*
 * XREFs of ?StartThemeChanged@CStartExperienceManager@@QEAAJW4StartThemeUpdateType@@@Z @ 0x18010CA70
 * Callers:
 *     ?OnMessage@CStartExperienceManager@@UEAAJI_K_J@Z @ 0x180247D00 (-OnMessage@CStartExperienceManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?ReactivateHelper@CStartExperienceManager@@AEAAJPEBGI@Z @ 0x18010CAD0 (-ReactivateHelper@CStartExperienceManager@@AEAAJPEBGI@Z.c)
 */

__int64 __fastcall CStartExperienceManager::StartThemeChanged(CStartExperienceManager *a1, unsigned int a2)
{
  int v2; // eax
  unsigned int v3; // ecx

  v2 = CStartExperienceManager::ReactivateHelper(a1, L"OnStartThemeChanged", a2);
  v3 = 0;
  if ( v2 < 0 )
    return (unsigned int)v2;
  return v3;
}
