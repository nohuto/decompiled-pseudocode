/*
 * XREFs of IsUMgrQueryUserTokenPresent @ 0x1802D13A8
 * Callers:
 *     ?GetUserTokenHandle@UserHelpers@@YA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@PEAUIUser@System@Windows@@@Z @ 0x1803B4A90 (-GetUserTokenHandle@UserHelpers@@YA-AV-$unique_any_t@V-$unique_storage@U-$handle_null_resource_p.c)
 *     ?GetProcessNamedObjectPath@UserAwareProcessIdentity@@YAJKEPEAU_UNICODE_STRING@@@Z @ 0x18064D378 (-GetProcessNamedObjectPath@UserAwareProcessIdentity@@YAJKEPEAU_UNICODE_STRING@@@Z.c)
 *     ?IsProcessAppContainer@UserAwareProcessIdentity@@YAJKPEA_N@Z @ 0x18064E0D0 (-IsProcessAppContainer@UserAwareProcessIdentity@@YAJKPEA_N@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1802D32A9 (ApiSetQueryApiSetPresence_0.c)
 */

char IsUMgrQueryUserTokenPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1808D99B8 == 1 )
    return 1;
  if ( dword_1808D99B8 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"BD", &v1) < 0 )
    return 0;
  result = v1;
  dword_1808D99B8 = 2 - (v1 != 0);
  return result;
}
