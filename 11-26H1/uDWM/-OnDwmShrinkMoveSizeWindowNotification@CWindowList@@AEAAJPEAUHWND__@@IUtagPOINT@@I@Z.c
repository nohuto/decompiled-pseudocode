/*
 * XREFs of ?OnDwmShrinkMoveSizeWindowNotification@CWindowList@@AEAAJPEAUHWND__@@IUtagPOINT@@I@Z @ 0x1800E1CD8
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180080150 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180029500 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z @ 0x180079AA8 (-OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartGrowAnimationForThumbnail@CTopLevelWindow3D@@QEAAJXZ @ 0x1800CC1E8 (-StartGrowAnimationForThumbnail@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartShrinkAnimationForThumbnail@CTopLevelWindow3D@@QEAAJMUtagPOINT@@@Z @ 0x1800CC2C8 (-StartShrinkAnimationForThumbnail@CTopLevelWindow3D@@QEAAJMUtagPOINT@@@Z.c)
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
  int v13; // eax
  int v14; // ecx
  unsigned __int8 v15; // al
  char v16; // si
  int started; // eax
  unsigned __int8 v18; // dl
  CTopLevelWindow *v19; // rcx
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v21 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(this, a2);
  v9 = WindowDataByHwnd;
  if ( !WindowDataByHwnd )
  {
    v10 = -2147024809;
    v11 = 2147942487LL;
    v12 = 8027LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)v11);
    goto LABEL_23;
  }
  v13 = *((_DWORD *)WindowDataByHwnd + 14) - *((_DWORD *)WindowDataByHwnd + 12);
  v14 = 0;
  if ( v13 >= 0 )
    v14 = v13;
  v15 = *((_BYTE *)v9 + 741);
  v16 = v15 >> 7;
  if ( a3 )
  {
    v18 = *((_BYTE *)v9 + 741);
    if ( v14 > (unsigned int)a3 && *((char *)v9 + 741) >= 0 && *((_QWORD *)v9 + 56) )
    {
      started = CTopLevelWindow3D::StartShrinkAnimationForThumbnail(
                  *((CTopLevelWindow3D **)v9 + 56),
                  (float)a3 / (float)v14,
                  a4);
      v10 = started;
      if ( started < 0 )
      {
        v12 = 8050LL;
        goto LABEL_9;
      }
      *((_BYTE *)v9 + 741) |= 0x80u;
      v18 = *((_BYTE *)v9 + 741);
    }
  }
  else
  {
    if ( *((char *)v9 + 741) < 0 )
    {
      *((_BYTE *)v9 + 741) = v15 & 0x7F;
      started = CTopLevelWindow3D::StartGrowAnimationForThumbnail(*((CTopLevelWindow3D **)v9 + 56));
      v10 = started;
      if ( started < 0 )
      {
        v12 = 8044LL;
LABEL_9:
        v11 = (unsigned int)started;
        goto LABEL_10;
      }
      v15 = *((_BYTE *)v9 + 741);
    }
    v18 = v15;
  }
  if ( v16 != v18 >> 7 )
  {
    v19 = (CTopLevelWindow *)*((_QWORD *)v9 + 55);
    if ( v19 )
      CTopLevelWindow::OnIsInWindowMove(v19, (v18 & 8) != 0, (const struct tagRECT *)v9 + 3);
  }
  v10 = 0;
LABEL_23:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v21);
  return v10;
}
