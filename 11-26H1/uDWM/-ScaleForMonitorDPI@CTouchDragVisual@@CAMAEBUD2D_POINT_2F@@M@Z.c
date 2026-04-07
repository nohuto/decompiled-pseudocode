/*
 * XREFs of ?ScaleForMonitorDPI@CTouchDragVisual@@CAMAEBUD2D_POINT_2F@@M@Z @ 0x1800CC960
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18007D614 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z @ 0x180012244 (-MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z.c)
 */

float __fastcall CTouchDragVisual::ScaleForMonitorDPI(const struct D2D_POINT_2F *a1, float a2)
{
  POINT v3; // [rsp+40h] [rbp+8h]

  v3.x = (int)a1->x;
  v3.y = (int)a1->y;
  return (float)((float)(int)CDesktopManager::MonitorDpiFromPoint(v3) * a2) / 96.0;
}
