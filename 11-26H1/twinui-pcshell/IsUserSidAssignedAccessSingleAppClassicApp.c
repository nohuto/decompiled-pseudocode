/*
 * XREFs of IsUserSidAssignedAccessSingleAppClassicApp @ 0x1800F660C
 * Callers:
 *     IsCurrentUserAssignedAccessSingleAppClassicApp @ 0x1800F5BAC (IsCurrentUserAssignedAccessSingleAppClassicApp.c)
 *     ?LoadAssignedAccessConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1801F8984 (-LoadAssignedAccessConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguratio.c)
 * Callees:
 *     GetAssignedAccessTypeForUser_0 @ 0x1800F6824 (GetAssignedAccessTypeForUser_0.c)
 */

__int64 __fastcall IsUserSidAssignedAccessSingleAppClassicApp(unsigned __int16 *a1)
{
  GetAssignedAccessTypeForUser_0(a1);
  return 0LL;
}
