/*
 * XREFs of ?InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@@Z @ 0x180068DD8
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800E23B0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001AA00 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180021870 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z @ 0x180068EC0 (-InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x18008B634 (McTemplateU0p_EtwEventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::InvalidateIconicBitmaps(
        CWindowList *this,
        unsigned int a2,
        const struct MILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS *a3)
{
  __int64 v6; // rcx
  HWND v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rcx
  struct CWindowData *v10; // rsi
  CWindowData *v12; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+58h] [rbp+20h]

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v7 = *(HWND *)((char *)a3 + 4);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0p_EtwEventWriteTransfer(v6, &UdwmProcessInvalidateIconicBitmaps_Start, *(_QWORD *)((char *)a3 + 4));
  v8 = 0;
  v12 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(this, v7, &v12);
  v10 = v12;
  if ( v12 && !CWindowData::IsImmersiveWindow(v12) )
    v8 = CIconicBitmapRegistry::InvalidateBitmaps(
           *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 28),
           v10,
           a2);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0p_EtwEventWriteTransfer(v9, &UdwmProcessInvalidateIconicBitmaps_Stop, v7);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v8;
}
