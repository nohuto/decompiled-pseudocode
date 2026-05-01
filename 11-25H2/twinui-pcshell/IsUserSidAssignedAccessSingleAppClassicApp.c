/*
 * XREFs of IsUserSidAssignedAccessSingleAppClassicApp @ 0x1800EC2EC
 * Callers:
 *     IsCurrentUserAssignedAccessSingleAppClassicApp @ 0x1800EBB9C (IsCurrentUserAssignedAccessSingleAppClassicApp.c)
 *     ?LoadAssignedAccessConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x18020476C (-LoadAssignedAccessConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguratio.c)
 * Callees:
 *     GetAssignedAccessTypeForUser_0 @ 0x1800EC71C (GetAssignedAccessTypeForUser_0.c)
 */

__int64 __fastcall IsUserSidAssignedAccessSingleAppClassicApp(unsigned __int16 *a1)
{
  GetAssignedAccessTypeForUser_0(a1);
  return 0LL;
}
