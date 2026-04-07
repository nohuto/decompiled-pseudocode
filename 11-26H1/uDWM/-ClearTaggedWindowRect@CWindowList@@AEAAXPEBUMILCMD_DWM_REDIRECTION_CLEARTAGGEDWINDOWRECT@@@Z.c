/*
 * XREFs of ?ClearTaggedWindowRect@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_CLEARTAGGEDWINDOWRECT@@@Z @ 0x1800DFF28
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180080150 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180029500 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

void __fastcall CWindowList::ClearTaggedWindowRect(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_CLEARTAGGEDWINDOWRECT *a2)
{
  struct CWindowData *WindowDataByHwnd; // rax
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(this, *(HWND *)((char *)a2 + 4));
  if ( WindowDataByHwnd )
    *((_BYTE *)WindowDataByHwnd + 742) &= ~0x10u;
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v5);
}
