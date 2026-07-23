/*
 * XREFs of PoBlockConsoleSwitch @ 0x140B56AC0
 * Callers:
 *     PoPowerOffMonitor @ 0x1404FA0FC (PoPowerOffMonitor.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1407CF180 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PopIssueActionRequest @ 0x1409F3438 (PopIssueActionRequest.c)
 *     PnprQuiesceDevices @ 0x140BF80F0 (PnprQuiesceDevices.c)
 * Callees:
 *     PoBlockConsoleSwitchEx @ 0x140448F98 (PoBlockConsoleSwitchEx.c)
 */

__int64 __fastcall PoBlockConsoleSwitch(__int64 a1)
{
  ULONG v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  PoBlockConsoleSwitchEx(a1, &v2, 0LL);
  return v2;
}
