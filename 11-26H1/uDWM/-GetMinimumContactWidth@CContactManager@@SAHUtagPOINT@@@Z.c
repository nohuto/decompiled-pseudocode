/*
 * XREFs of ?GetMinimumContactWidth@CContactManager@@SAHUtagPOINT@@@Z @ 0x18001345C
 * Callers:
 *     ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z @ 0x180013600 (-GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z.c)
 *     ?Initialize@CPressTapVisual@@MEAAJXZ @ 0x1800BC110 (-Initialize@CPressTapVisual@@MEAAJXZ.c)
 * Callees:
 *     ?MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z @ 0x180012244 (-MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z.c)
 */

int __fastcall CContactManager::GetMinimumContactWidth(POINT a1)
{
  int v1; // eax

  v1 = CDesktopManager::MonitorDpiFromPoint(a1);
  return MulDiv(50, v1, 96);
}
