/*
 * XREFs of ?AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z @ 0x18007C47C
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180080150 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180021870 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x18004E42C (-SetWindowAnimation@CDesktopManager@@SAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::AnimationChange(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE *a2)
{
  HWND v4; // rdx
  struct CWindowData *v6; // [rsp+38h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+40h] [rbp+18h]

  v7 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(HWND *)((char *)a2 + 4);
  if ( v4 )
  {
    v6 = 0LL;
    CWindowList::GetSyncedWindowDataByHwnd(this, v4, &v6);
    if ( v6 )
      *((_BYTE *)v6 + 736) = *((_BYTE *)v6 + 736) & 0xDF | (*((_DWORD *)a2 + 3) == 0 ? 0x20 : 0);
  }
  else
  {
    CDesktopManager::SetWindowAnimation(*((_DWORD *)a2 + 3) != 0);
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return 0LL;
}
