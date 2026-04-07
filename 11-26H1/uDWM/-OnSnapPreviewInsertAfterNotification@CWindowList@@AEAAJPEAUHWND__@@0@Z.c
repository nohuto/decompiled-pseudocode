/*
 * XREFs of ?OnSnapPreviewInsertAfterNotification@CWindowList@@AEAAJPEAUHWND__@@0@Z @ 0x18002B0F4
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180080150 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180029500 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?ZOrderAcrylicSheet@CWindowList@@QEAAJXZ @ 0x18006FC10 (-ZOrderAcrylicSheet@CWindowList@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::OnSnapPreviewInsertAfterNotification(CWindowList *this, HWND a2, HWND a3)
{
  struct CWindowData *WindowDataByHwnd; // rax
  unsigned int v7; // ebx
  int v9; // eax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(this, a2);
  if ( WindowDataByHwnd
    && a3 != *((HWND *)WindowDataByHwnd + 83)
    && (*((_QWORD *)WindowDataByHwnd + 83) = a3, WindowDataByHwnd == *((struct CWindowData **)this + 87))
    && *((_QWORD *)this + 67)
    && (v9 = CWindowList::ZOrderAcrylicSheet(this), v7 = v9, v9 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F44,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v9,
      v10);
  }
  else
  {
    v7 = 0;
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v7;
}
