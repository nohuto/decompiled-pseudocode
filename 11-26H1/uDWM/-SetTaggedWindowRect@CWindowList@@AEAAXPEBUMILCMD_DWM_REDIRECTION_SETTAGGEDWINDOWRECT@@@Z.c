/*
 * XREFs of ?SetTaggedWindowRect@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_SETTAGGEDWINDOWRECT@@@Z @ 0x180076EE0
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180080150 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180029500 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 */

void __fastcall CWindowList::SetTaggedWindowRect(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_SETTAGGEDWINDOWRECT *a2)
{
  struct CWindowData *WindowDataByHwnd; // rax

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(this, *(HWND *)((char *)a2 + 4));
  if ( WindowDataByHwnd )
  {
    *((_BYTE *)WindowDataByHwnd + 742) |= 0x10u;
    *(_OWORD *)((char *)WindowDataByHwnd + 828) = *(_OWORD *)((char *)a2 + 12);
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
}
