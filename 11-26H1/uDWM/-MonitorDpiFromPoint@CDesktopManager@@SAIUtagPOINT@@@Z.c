/*
 * XREFs of ?MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z @ 0x180012244
 * Callers:
 *     ?GetMinimumContactWidth@CContactManager@@SAHUtagPOINT@@@Z @ 0x18001345C (-GetMinimumContactWidth@CContactManager@@SAHUtagPOINT@@@Z.c)
 *     ?Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z @ 0x18004F36C (-Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z.c)
 *     ?GetMaximumContactWidth@CContactManager@@SAHUtagPOINT@@@Z @ 0x18007E8CC (-GetMaximumContactWidth@CContactManager@@SAHUtagPOINT@@@Z.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x180085558 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?ScaleForMonitorDPI@CTouchDragVisual@@CAMAEBUD2D_POINT_2F@@M@Z @ 0x1800CC960 (-ScaleForMonitorDPI@CTouchDragVisual@@CAMAEBUD2D_POINT_2F@@M@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::MonitorDpiFromPoint(POINT a1)
{
  unsigned int v1; // ebx
  HMONITOR v2; // rax
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF
  int v5; // [rsp+40h] [rbp+18h] BYREF

  v1 = 96;
  v5 = 0;
  v4 = 96;
  v2 = MonitorFromPoint(a1, 0);
  if ( !v2 || (unsigned int)GetDpiForMonitorInternal(v2, 0LL, &v5, &v4) )
    return v4;
  return v1;
}
