/*
 * XREFs of ?CanUserInstallStoreApps@@YA_NXZ @ 0x1803B06F8
 * Callers:
 *     ?ShouldInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAA_NXZ @ 0x1803B90BC (-ShouldInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAA_NXZ.c)
 * Callees:
 *     ?IsUserAnAdmin@UserHelpers@@YA_NPEAUIUser@System@Windows@@@Z @ 0x1803B5840 (-IsUserAnAdmin@UserHelpers@@YA_NPEAUIUser@System@Windows@@@Z.c)
 */

char CanUserInstallStoreApps(void)
{
  char v0; // bl
  struct Windows::System::IUser *v1; // rdx
  UserHelpers *v2; // rcx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v4 = 0;
  if ( (int)PolicyManager_GetPolicyInt(L"ApplicationManagement", L"BlockNonAdminUserInstall", &v4) < 0
    || !v4
    || UserHelpers::IsUserAnAdmin(v2, v1) )
  {
    return 1;
  }
  return v0;
}
