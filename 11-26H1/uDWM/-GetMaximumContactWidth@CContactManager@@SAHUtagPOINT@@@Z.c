/*
 * XREFs of ?GetMaximumContactWidth@CContactManager@@SAHUtagPOINT@@@Z @ 0x18007E8CC
 * Callers:
 *     ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z @ 0x180013600 (-GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z.c)
 * Callees:
 *     ?MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z @ 0x180012244 (-MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z.c)
 */

int __fastcall CContactManager::GetMaximumContactWidth(POINT a1)
{
  int v1; // eax

  v1 = CDesktopManager::MonitorDpiFromPoint(a1);
  return MulDiv(150, v1, 96);
}
