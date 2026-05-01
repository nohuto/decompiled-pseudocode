/*
 * XREFs of ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@QEAAJPEA_NIH@Z @ 0x18055F48C
 * Callers:
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureContext@@AEAAJPEA_NIH@Z @ 0x18055E5D0 (-CreateAdjacentDesktop@VirtualDesktopGestureContext@@AEAAJPEA_NIH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z @ 0x18055E664 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z.c)
 *     ?GetScaleFactor@VirtualDesktopGestureWindow@@QEAAIXZ @ 0x1805601C0 (-GetScaleFactor@VirtualDesktopGestureWindow@@QEAAIXZ.c)
 */

__int64 __fastcall VirtualDesktopGestureWindow::CreateAdjacentDesktop(
        VirtualDesktopGestureWindow *this,
        bool *a2,
        unsigned int a3,
        int a4)
{
  int v5; // edi
  int v7; // r15d
  float v10; // xmm1_4
  LONG v11; // eax
  int v12; // ebx
  __int64 v13; // rdx
  int v14; // edi
  struct tagRECT v16; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = *((_DWORD *)this + 48);
  v7 = *((_DWORD *)this + 46);
  if ( *((_DWORD *)this + 57) == 2 )
  {
    v16.top = 0;
    v10 = (float)((float)(int)VirtualDesktopGestureWindow::GetScaleFactor(this) * 28.0) + (float)(v5 - v7);
    v11 = a4 * (int)v10 + *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
    v16.left = a4 * (int)v10;
    v16.right = v11;
    v16.bottom = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
    v12 = VirtualDesktopGestureWindow::CreateAdjacentDesktop(this, a2, a3, &v16);
    if ( v12 < 0 )
    {
      v13 = 559LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v12);
    }
  }
  else
  {
    v16.top = 0;
    v14 = v5 - v7;
    v16.left = a4 * v14;
    v16.right = v14 + a4 * v14;
    v16.bottom = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
    v12 = VirtualDesktopGestureWindow::CreateAdjacentDesktop(this, a2, a3, &v16);
    if ( v12 < 0 )
    {
      v13 = 563LL;
      goto LABEL_6;
    }
  }
  return (unsigned int)v12;
}
