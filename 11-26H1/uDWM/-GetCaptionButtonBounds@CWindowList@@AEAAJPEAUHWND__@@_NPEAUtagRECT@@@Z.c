/*
 * XREFs of ?GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@_NPEAUtagRECT@@@Z @ 0x18002165C
 * Callers:
 *     ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x180021580 (-GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 * Callees:
 *     ?GetCurrentStyle@CTopLevelWindow@@SA?AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z @ 0x18001F2B4 (-GetCurrentStyle@CTopLevelWindow@@SA-AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z.c)
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x1800202D0 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?GetMetricsForCaptionBarEx@CWindowData@@QEBAHH_N@Z @ 0x180021844 (-GetMetricsForCaptionBarEx@CWindowData@@QEBAHH_N@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180021870 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     floorf @ 0x18008EED0 (floorf.c)
 */

__int64 __fastcall CWindowList::GetCaptionButtonBounds(CWindowList *this, HWND a2, bool a3, struct tagRECT *a4)
{
  unsigned int v5; // edi
  CWindowData *v7; // rbp
  int CurrentStyle; // esi
  int v9; // ecx
  int v10; // edx
  int v11; // ebx
  int v12; // r14d
  int MetricsForCaptionBar; // r15d
  float v14; // xmm7_4
  float v15; // xmm6_4
  int v16; // edx
  int v18; // ecx
  int v19; // ecx
  CWindowData *v20; // [rsp+20h] [rbp-58h] BYREF

  v5 = 0;
  v20 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v20);
  v7 = v20;
  if ( !v20 )
    return (unsigned int)-2147024809;
  CurrentStyle = CTopLevelWindow::GetCurrentStyle((__int64)v20);
  if ( !CTopLevelWindow::HasRenderedBorder(CurrentStyle) )
    return (unsigned int)-2147024809;
  v9 = *((_DWORD *)v7 + 28);
  v10 = 53;
  v11 = 0;
  v12 = v9 + 1;
  if ( (CurrentStyle & 0x20) == 0 )
    v12 = v9 - 1;
  if ( (CurrentStyle & 2) == 0 )
    v10 = 31;
  MetricsForCaptionBar = CWindowData::GetMetricsForCaptionBarEx(v7, v10, a3);
  v14 = (float)MetricsForCaptionBar;
  v15 = (float)MetricsForCaptionBar * 2.2272727;
  if ( (CurrentStyle & 0x400) != 0 )
    v11 = (int)floorf(v15 + 0.5);
  if ( (CurrentStyle & 0x200) != 0 )
    v11 += (int)floorf((float)(v14 * 2.1818182) + 0.5);
  if ( (CurrentStyle & 0x100) != 0 )
  {
    if ( (CurrentStyle & 0x800) != 0 )
      v11 += (int)floorf((float)(v14 * 2.1818182) + 0.5);
    goto LABEL_13;
  }
  if ( (CurrentStyle & 0x800) != 0 )
LABEL_13:
    v11 += (int)floorf(v15 + 0.5);
  a4->top = 0;
  v16 = 0;
  a4->bottom = MetricsForCaptionBar + *((_DWORD *)v7 + 28);
  if ( *((_DWORD *)v7 + 57) - *((_DWORD *)v7 + 55) >= 0 )
    v16 = *((_DWORD *)v7 + 57) - *((_DWORD *)v7 + 55);
  a4->right = v16 - v12;
  a4->left = v16 - v12 - v11;
  if ( (CurrentStyle & 0x20000) != 0 && (*((_DWORD *)v7 + 30) & 0x400000) == 0 )
  {
    v18 = 0;
    if ( v11 < 0 )
      v11 = 0;
    if ( *((_DWORD *)v7 + 57) - *((_DWORD *)v7 + 55) >= 0 )
      v18 = *((_DWORD *)v7 + 57) - *((_DWORD *)v7 + 55);
    v19 = v18 - v16;
    a4->left = v19 + v12;
    a4->right = v11 + v19 + v12;
  }
  return v5;
}
