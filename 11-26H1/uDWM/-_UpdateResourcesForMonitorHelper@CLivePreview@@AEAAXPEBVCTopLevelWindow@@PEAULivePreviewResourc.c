/*
 * XREFs of ?_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAXPEBVCTopLevelWindow@@PEAULivePreviewResource@@@Z @ 0x1800B9B80
 * Callers:
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x1800B98EC (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 * Callees:
 *     ?GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ @ 0x1800332BC (-GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ.c)
 *     ?GetLivePreviewWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x180073458 (-GetLivePreviewWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

void __fastcall CLivePreview::_UpdateResourcesForMonitorHelper(
        CLivePreview *this,
        const struct CTopLevelWindow *a2,
        struct LivePreviewResource *a3)
{
  BOOL v5; // esi
  CTopLevelWindow *v6; // rcx
  struct tagRECT rcDst; // [rsp+20h] [rbp-28h] BYREF

  CTopLevelWindow::GetLivePreviewWindowRect(a2, &rcDst);
  v5 = IntersectRect(&rcDst, &rcDst, (const RECT *)a3 + 5);
  if ( v5 && (*((_BYTE *)CTopLevelWindow::GetWindowData(a2) + 739) & 1) == 0 )
    UnionRect((LPRECT)((char *)a3 + 24), (const RECT *)((char *)a3 + 24), &rcDst);
  if ( *((char *)CTopLevelWindow::GetWindowData(a2) + 738) >= 0
    && *((_DWORD *)CTopLevelWindow::GetWindowData(v6) + 32) == 1 )
  {
    if ( v5 )
      UnionRect((LPRECT)a3 + 4, (const RECT *)a3 + 4, &rcDst);
  }
}
