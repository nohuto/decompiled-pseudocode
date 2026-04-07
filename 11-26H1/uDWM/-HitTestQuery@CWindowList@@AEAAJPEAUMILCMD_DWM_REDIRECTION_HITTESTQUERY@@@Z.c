/*
 * XREFs of ?HitTestQuery@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_HITTESTQUERY@@@Z @ 0x1800236A8
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800E23B0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z @ 0x180014F5C (-HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180021870 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::HitTestQuery(CWindowList *this, struct MILCMD_DWM_REDIRECTION_HITTESTQUERY *a2)
{
  unsigned int v4; // ebp
  int v5; // esi
  struct CVisual **v6; // rcx
  char v7; // r8
  unsigned int v9; // [rsp+68h] [rbp+10h] BYREF
  struct CWindowData *v10; // [rsp+70h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+78h] [rbp+20h]

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = -2;
  v9 = -2;
  v5 = 0;
  v10 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(this, *(HWND *)((char *)a2 + 4), &v10);
  if ( v10 )
  {
    v6 = (struct CVisual **)*((_QWORD *)v10 + 55);
    if ( v6 )
    {
      v7 = 1;
      if ( (*((_BYTE *)a2 + 24) & 1) == 0 && *((_DWORD *)a2 + 3) != 513 )
        v7 = *((_DWORD *)a2 + 3) == 161;
      CTopLevelWindow::HitTestQuery(v6, (const struct tagPOINT *)a2 + 2, v7, *((_DWORD *)a2 + 10), &v9);
      v4 = v9;
    }
  }
  *((_DWORD *)a2 + 11) = v4;
  LOBYTE(v5) = v4 != -2;
  *((_DWORD *)a2 + 12) = v5;
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return 0LL;
}
