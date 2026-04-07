/*
 * XREFs of ?SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18007E59C
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800E23B0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001AA00 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180021870 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x18007132C (-BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x18008B634 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     ?BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z @ 0x1800B6E20 (-BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::SetIconicThumbnail(
        CWindowList *this,
        unsigned int a2,
        const struct MILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL *a3,
        const struct _REMOTE_PORT_VIEW *a4)
{
  __int64 v8; // rcx
  HWND v9; // rdi
  unsigned int v10; // ebx
  __int64 v11; // rcx
  struct CWindowData *v12; // rsi
  bool IsImmersiveWindow; // al
  unsigned int v14; // r9d
  int v15; // eax
  CWindowData *v17; // [rsp+90h] [rbp+18h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = *(HWND *)((char *)a3 + 4);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0p_EtwEventWriteTransfer(v8, &UdwmProcessSetIconicThumbnail_Start, *(_QWORD *)((char *)a3 + 4));
  v10 = 0;
  v17 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(this, v9, &v17);
  v12 = v17;
  if ( v17 )
  {
    IsImmersiveWindow = CWindowData::IsImmersiveWindow(v17);
    v14 = *((_DWORD *)a3 + 3);
    if ( IsImmersiveWindow )
      v15 = CImmersiveIconicBitmapRegistry::BitmapReceived(
              *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 29),
              v12,
              a2,
              v14,
              *((_DWORD *)a3 + 4),
              a4->ViewBase,
              a4->ViewSize);
    else
      v15 = CIconicBitmapRegistry::BitmapReceived(
              *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 28),
              v12,
              a2,
              v14,
              *((_DWORD *)a3 + 4),
              a4->ViewBase,
              a4->ViewSize,
              *((_DWORD *)a3 + 5));
    v10 = v15;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0p_EtwEventWriteTransfer(v11, &UdwmProcessSetIconicThumbnail_Stop, v9);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v10;
}
