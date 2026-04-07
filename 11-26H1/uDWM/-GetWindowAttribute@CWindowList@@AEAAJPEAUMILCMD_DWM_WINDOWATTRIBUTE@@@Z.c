/*
 * XREFs of ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x180021580
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800E23B0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@_NPEAUtagRECT@@@Z @ 0x18002165C (-GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@_NPEAUtagRECT@@@Z.c)
 *     ?GetNcAdornmentInfoAttribute@CWindowList@@AEAAJPEAUHWND__@@PEAUNCADORNMENT_INFO@@@Z @ 0x1800E14F0 (-GetNcAdornmentInfoAttribute@CWindowList@@AEAAJPEAUHWND__@@PEAUNCADORNMENT_INFO@@@Z.c)
 *     ?IsWCOSContainer@@YA_NXZ @ 0x1800E58A8 (-IsWCOSContainer@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::GetWindowAttribute(CWindowList *this, struct MILCMD_DWM_WINDOWATTRIBUTE *a2)
{
  int CaptionButtonBounds; // ebx
  HWND v5; // rbp

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  CaptionButtonBounds = -2147024872;
  v5 = (HWND)*((_QWORD *)a2 + 1);
  if ( *((_DWORD *)a2 + 4) == 5 )
  {
    if ( *((_DWORD *)a2 + 5) == 16 )
    {
      if ( *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8) == 7 )
        IsWCOSContainer();
      CaptionButtonBounds = CWindowList::GetCaptionButtonBounds(this, v5, 0, (struct tagRECT *)((char *)a2 + 24));
    }
  }
  else if ( *((_DWORD *)a2 + 4) == 12 )
  {
    if ( *((_DWORD *)a2 + 5) == 20 )
    {
      CaptionButtonBounds = CWindowList::GetNcAdornmentInfoAttribute(
                              this,
                              *((HWND *)a2 + 1),
                              (struct MILCMD_DWM_WINDOWATTRIBUTE *)((char *)a2 + 24));
      if ( CaptionButtonBounds >= 0 && *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8) == 7 )
        IsWCOSContainer();
    }
  }
  else
  {
    CaptionButtonBounds = -2147024809;
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)CaptionButtonBounds;
}
