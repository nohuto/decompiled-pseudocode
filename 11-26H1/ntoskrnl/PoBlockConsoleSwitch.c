/*
 * XREFs of PoBlockConsoleSwitch @ 0x140B54220
 * Callers:
 *     PoPowerOffMonitor @ 0x14050090C (PoPowerOffMonitor.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1407CC0E0 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PopIssueActionRequest @ 0x140A37878 (PopIssueActionRequest.c)
 *     PnprQuiesceDevices @ 0x140BF20F0 (PnprQuiesceDevices.c)
 * Callees:
 *     PoBlockConsoleSwitchEx @ 0x140450E68 (PoBlockConsoleSwitchEx.c)
 */

__int64 __fastcall PoBlockConsoleSwitch(__int64 a1)
{
  unsigned int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  PoBlockConsoleSwitchEx(a1, &v2, 0LL);
  return v2;
}
