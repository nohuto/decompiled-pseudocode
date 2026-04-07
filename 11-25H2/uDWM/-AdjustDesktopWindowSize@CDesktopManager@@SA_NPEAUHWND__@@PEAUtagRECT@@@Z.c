/*
 * XREFs of ?AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180028298
 * Callers:
 *     ?CalculateWindowMetrics@CSecondaryWindowRepresentation@@AEAA_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x18001DE00 (-CalculateWindowMetrics@CSecondaryWindowRepresentation@@AEAA_NPEAUtagSIZE@@PEAU_MARGINS@@@Z.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800283D0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

char __fastcall CDesktopManager::AdjustDesktopWindowSize(HWND a1, struct tagRECT *a2)
{
  char v4; // bl
  struct CWindowData *WindowDataByHwnd; // rax
  struct _RTL_GENERIC_TABLE *v6; // rcx
  _QWORD *v7; // rax
  HWND v8; // rax
  HMONITOR v10; // rax
  _QWORD Buffer[2]; // [rsp+20h] [rbp-49h] BYREF
  __int128 v12; // [rsp+30h] [rbp-39h]
  __int128 v13; // [rsp+40h] [rbp-29h]
  __int128 v14; // [rsp+50h] [rbp-19h]
  __int64 v15; // [rsp+60h] [rbp-9h]
  char v16; // [rsp+68h] [rbp-1h]
  __int128 v17; // [rsp+70h] [rbp+7h]
  struct tagMONITORINFO mi; // [rsp+80h] [rbp+17h] BYREF

  v4 = 0;
  WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                       *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                       a1);
  if ( !WindowDataByHwnd )
    goto LABEL_5;
  v15 = -1LL;
  Buffer[1] = 0LL;
  v12 = 0LL;
  v6 = (struct _RTL_GENERIC_TABLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53) + 8LL);
  Buffer[0] = *((_QWORD *)WindowDataByHwnd + 17);
  v13 = 0LL;
  v14 = 0LL;
  v16 = 0;
  v17 = 0LL;
  v7 = RtlLookupElementGenericTable(v6, Buffer);
  v8 = v7 ? (HWND)v7[8] : 0LL;
  if ( a1 == v8 )
  {
    v10 = MonitorFromWindow(0LL, 1u);
    memset(&mi, 0, sizeof(mi));
    mi.cbSize = 40;
    if ( GetMonitorInfoW(v10, &mi) )
    {
      v4 = 1;
      *a2 = mi.rcMonitor;
    }
  }
  else
  {
LABEL_5:
    *a2 = 0LL;
  }
  return v4;
}
