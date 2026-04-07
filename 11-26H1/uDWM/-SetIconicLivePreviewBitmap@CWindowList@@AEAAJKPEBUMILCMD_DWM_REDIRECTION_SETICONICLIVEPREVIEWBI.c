/*
 * XREFs of ?SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1800E4478
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800E23B0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001AA00 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180021870 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x18008B634 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x1800B68DC (-LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::SetIconicLivePreviewBitmap(
        CWindowList *this,
        int a2,
        const struct MILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP *a3,
        const struct _REMOTE_PORT_VIEW *a4)
{
  __int64 v8; // rcx
  HWND v9; // rdi
  unsigned int v10; // ebx
  __int64 v11; // rcx
  struct CWindowData *v12; // rsi
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+50h] [rbp-28h] BYREF
  CWindowData *v15; // [rsp+90h] [rbp+18h] BYREF

  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = *(HWND *)((char *)a3 + 4);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0p_EtwEventWriteTransfer(
      v8,
      (int)&UdwmProcessSetIconicLivePreviewBitmap_Start,
      *(_QWORD *)((char *)a3 + 4));
  v10 = 0;
  v15 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(this, v9, &v15);
  v12 = v15;
  if ( v15 && !CWindowData::IsImmersiveWindow(v15) )
    v10 = CIconicBitmapRegistry::LivePreviewBitmapReceived(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28),
            v12,
            a2,
            *((_DWORD *)a3 + 3),
            *((_DWORD *)a3 + 4),
            (const struct tagPOINT *)((char *)a3 + 20),
            a4->ViewBase,
            a4->ViewSize,
            *((_DWORD *)a3 + 7));
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0p_EtwEventWriteTransfer(v11, (int)&UdwmProcessSetIconicLivePreviewBitmap_Stop, (__int64)v9);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v10;
}
