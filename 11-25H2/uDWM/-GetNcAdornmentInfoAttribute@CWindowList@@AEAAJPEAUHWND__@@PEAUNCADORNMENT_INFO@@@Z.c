/*
 * XREFs of ?GetNcAdornmentInfoAttribute@CWindowList@@AEAAJPEAUHWND__@@PEAUNCADORNMENT_INFO@@@Z @ 0x1800E56A4
 * Callers:
 *     ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x1800657F0 (-GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 * Callees:
 *     ?NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z @ 0x180017F04 (-NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180092FBC (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowList::GetNcAdornmentInfoAttribute(CWindowList *this, HWND a2, struct NCADORNMENT_INFO *a3)
{
  unsigned int v4; // ebx
  CTopLevelWindow *v5; // rcx
  struct CWindowData *v7; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0;
  v7 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v7);
  if ( v7 )
  {
    v5 = (CTopLevelWindow *)*((_QWORD *)v7 + 55);
    if ( v5 && (*((_BYTE *)v7 + 672) & 9) == 9 )
      return (unsigned int)CTopLevelWindow::NcAdornmentInfoQuery(v5, a3);
    else
      *(_OWORD *)((char *)a3 + 4) = 0LL;
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v4;
}
