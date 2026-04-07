/*
 * XREFs of ?MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z @ 0x18002D634
 * Callers:
 *     ?Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z @ 0x18002BA14 (-Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z.c)
 *     ?GetMinimumContactWidth@CContactManager@@SAHUtagPOINT@@@Z @ 0x18002D548 (-GetMinimumContactWidth@CContactManager@@SAHUtagPOINT@@@Z.c)
 *     ?GetMaximumContactWidth@CContactManager@@SAHUtagPOINT@@@Z @ 0x18008F5E8 (-GetMaximumContactWidth@CContactManager@@SAHUtagPOINT@@@Z.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x180093928 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::MonitorDpiFromPoint(POINT a1)
{
  unsigned int v1; // ebx
  HMONITOR v2; // rax
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF
  int v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0;
  v1 = 96;
  v4 = 96;
  v2 = MonitorFromPoint(a1, 0);
  if ( !v2 || (unsigned int)GetDpiForMonitorInternal(v2, 0LL, &v5, &v4) )
    return v4;
  return v1;
}
