/*
 * XREFs of ?GetMonitorRectAtIndex@CDesktopManager@@SA_NIPEAUtagRECT@@@Z @ 0x1800987CC
 * Callers:
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800407B4 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV-$TMilRect_@MUD2D_RECT_F@@UD2D_POINT.c)
 * Callees:
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

bool __fastcall CDesktopManager::GetMonitorRectAtIndex(unsigned int a1, struct tagRECT *a2)
{
  bool result; // al
  __int64 v4; // rax
  __int64 v5; // rcx
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-38h] BYREF

  *a2 = 0LL;
  result = 0;
  if ( a1 < *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 32) )
  {
    v4 = a1;
    v5 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 13);
    memset(&mi, 0, sizeof(mi));
    mi.cbSize = 40;
    GetMonitorInfoW(*(HMONITOR *)(v5 + 8 * v4), &mi);
    result = 1;
    *a2 = mi.rcMonitor;
  }
  return result;
}
