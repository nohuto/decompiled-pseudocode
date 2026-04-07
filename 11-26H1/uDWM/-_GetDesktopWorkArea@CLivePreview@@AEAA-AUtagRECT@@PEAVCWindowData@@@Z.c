/*
 * XREFs of ?_GetDesktopWorkArea@CLivePreview@@AEAA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x18002CAEC
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z @ 0x18002B330 (-Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z.c)
 *     ?_GetCoverageStateOfWindow@CLivePreview@@AEAA?AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z @ 0x1800332CC (-_GetCoverageStateOfWindow@CLivePreview@@AEAA-AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?GetDesktopWorkAreaAtIndex@CImmersiveState@@QEAAPEAUDesktopWorkAreaInfo@@I@Z @ 0x18008BFB4 (-GetDesktopWorkAreaAtIndex@CImmersiveState@@QEAAPEAUDesktopWorkAreaInfo@@I@Z.c)
 */

struct tagRECT *__fastcall CLivePreview::_GetDesktopWorkArea(
        CLivePreview *this,
        struct tagRECT *__return_ptr retstr,
        HWND *a3)
{
  CImmersiveState *v6; // rcx
  unsigned int i; // r8d
  struct DesktopWorkAreaInfo *DesktopWorkAreaAtIndex; // rax
  int v9; // r8d
  __int64 v10; // r9

  *retstr = 0LL;
  if ( a3 )
  {
    if ( *((_QWORD *)this + 50) )
    {
      if ( MonitorFromWindow(a3[5], 0) )
      {
        v6 = (CImmersiveState *)*((_QWORD *)this + 50);
        for ( i = 0; i < *((_DWORD *)v6 + 10); i = v9 + 1 )
        {
          DesktopWorkAreaAtIndex = CImmersiveState::GetDesktopWorkAreaAtIndex(v6, i);
          if ( DesktopWorkAreaAtIndex && v10 == *((_QWORD *)DesktopWorkAreaAtIndex + 2) )
            *retstr = *(struct tagRECT *)DesktopWorkAreaAtIndex;
        }
      }
    }
  }
  return retstr;
}
