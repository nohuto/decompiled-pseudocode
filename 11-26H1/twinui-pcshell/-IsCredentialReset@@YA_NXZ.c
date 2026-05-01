/*
 * XREFs of ?IsCredentialReset@@YA_NXZ @ 0x1802A8FB4
 * Callers:
 *     ?IsUserOOBEOrCredentialReset@@YA_NXZ @ 0x1800F5784 (-IsUserOOBEOrCredentialReset@@YA_NXZ.c)
 *     ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x1803C6000 (-UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x1801085C4 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 */

bool __fastcall IsCredentialReset(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
  SHRegGetBOOLWithREGSAM(
    HKEY_LOCAL_MACHINE,
    L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Authentication\\CFL\\ExperienceManagerData",
    L"LaunchCflScenario",
    a4,
    &v5);
  return v5 != 0;
}
