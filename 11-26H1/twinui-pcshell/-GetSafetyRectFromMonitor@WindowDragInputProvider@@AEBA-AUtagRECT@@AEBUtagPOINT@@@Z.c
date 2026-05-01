/*
 * XREFs of ?GetSafetyRectFromMonitor@WindowDragInputProvider@@AEBA?AUtagRECT@@AEBUtagPOINT@@@Z @ 0x1802ABF44
 * Callers:
 *     ?OnGetArrangementRects@WindowDragInputProvider@@AEAAXAEAU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x18026B964 (-OnGetArrangementRects@WindowDragInputProvider@@AEAAXAEAU_WINDOW_ARRANGEMENT_INFO@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

struct tagRECT *__fastcall WindowDragInputProvider::GetSafetyRectFromMonitor(
        WindowDragInputProvider *this,
        struct tagRECT *__return_ptr retstr,
        const struct tagPOINT *a3)
{
  char v5; // si
  HMONITOR v6; // rax
  RECT rcWork; // xmm0
  LONG y; // ecx
  LONG v9; // edx
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-38h] BYREF

  v5 = 0;
  v6 = MonitorFromPoint(*a3, 0);
  if ( v6 && (mi.cbSize = 40, memset(&mi.rcMonitor, 0, 36), GetMonitorInfoW(v6, &mi)) && !PtInRect(&mi.rcWork, *a3) )
  {
    rcWork = mi.rcWork;
    v5 = 1;
  }
  else
  {
    rcWork = *(RECT *)&mi.cbSize;
  }
  y = a3->y;
  v9 = a3->x + 1;
  if ( v5 )
  {
    *retstr = rcWork;
  }
  else
  {
    retstr->left = a3->x;
    retstr->top = y;
    retstr->right = v9;
    retstr->bottom = y + 1;
  }
  return retstr;
}
