/*
 * XREFs of ?SetIconicBitmapBackgroundColor@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICDEFAULTCOLOR@@@Z @ 0x1800E43F8
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800E23B0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001AA00 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180021870 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::SetIconicBitmapBackgroundColor(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICDEFAULTCOLOR *a2)
{
  CWindowData *v4; // rbx
  CWindowData *v6; // [rsp+38h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(this, *(HWND *)((char *)a2 + 4), &v6);
  v4 = v6;
  if ( v6 && CWindowData::IsImmersiveWindow(v6) )
    *((_DWORD *)v4 + 50) = *((_DWORD *)a2 + 3);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v7);
  return 0LL;
}
