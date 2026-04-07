/*
 * XREFs of ?OnDwmShrinkMoveSizeWindowNotification@CWindowList@@AEAAJPEAUHWND__@@IUtagPOINT@@@Z @ 0x1800E6498
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18007A330 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800283D0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z @ 0x18008A8F0 (-OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartGrowAnimationForThumbnail@CTopLevelWindow3D@@QEAAJXZ @ 0x1800D0A44 (-StartGrowAnimationForThumbnail@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartShrinkAnimationForThumbnail@CTopLevelWindow3D@@QEAAJMUtagPOINT@@@Z @ 0x1800D0B24 (-StartShrinkAnimationForThumbnail@CTopLevelWindow3D@@QEAAJMUtagPOINT@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::OnDwmShrinkMoveSizeWindowNotification(
        CWindowList *this,
        HWND a2,
        int a3,
        struct tagPOINT a4)
{
  struct CWindowData *WindowDataByHwnd; // rax
  struct CWindowData *v9; // rdi
  unsigned int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // edx
  char v14; // cl
  char v15; // si
  int started; // eax
  char v17; // al
  CTopLevelWindow *v18; // rcx
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v20 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(this, a2);
  v9 = WindowDataByHwnd;
  if ( !WindowDataByHwnd )
  {
    v10 = -2147024809;
    v11 = 2147942487LL;
    v12 = 7732LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)v11);
    goto LABEL_23;
  }
  v13 = *((_DWORD *)WindowDataByHwnd + 14) - *((_DWORD *)WindowDataByHwnd + 12);
  if ( v13 < 0 )
    v13 = 0;
  v14 = *((_BYTE *)WindowDataByHwnd + 678);
  v15 = v14 & 1;
  if ( a3 )
  {
    v17 = *((_BYTE *)WindowDataByHwnd + 678);
    if ( v13 > (unsigned int)a3 && !v15 && *((_QWORD *)v9 + 56) )
    {
      started = CTopLevelWindow3D::StartShrinkAnimationForThumbnail(
                  *((CTopLevelWindow3D **)v9 + 56),
                  (float)a3 / (float)v13,
                  a4);
      v10 = started;
      if ( started < 0 )
      {
        v12 = 7749LL;
        goto LABEL_9;
      }
      *((_BYTE *)v9 + 678) |= 1u;
      v17 = *((_BYTE *)v9 + 678);
    }
  }
  else
  {
    if ( v15 )
    {
      *((_BYTE *)WindowDataByHwnd + 678) = v14 & 0xFE;
      started = CTopLevelWindow3D::StartGrowAnimationForThumbnail(*((CTopLevelWindow3D **)WindowDataByHwnd + 56));
      v10 = started;
      if ( started < 0 )
      {
        v12 = 7743LL;
LABEL_9:
        v11 = (unsigned int)started;
        goto LABEL_10;
      }
      v14 = *((_BYTE *)v9 + 678);
    }
    v17 = v14;
  }
  if ( v15 != (v17 & 1) )
  {
    v18 = (CTopLevelWindow *)*((_QWORD *)v9 + 55);
    if ( v18 )
      CTopLevelWindow::OnIsInWindowMove(v18, (*((_BYTE *)v9 + 677) & 0x10) != 0, (const struct tagRECT *)v9 + 3);
  }
  v10 = 0;
LABEL_23:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v20);
  return v10;
}
