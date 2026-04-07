/*
 * XREFs of ?CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z @ 0x1800CAEE0
 * Callers:
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180016FEC (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateWindowTarget@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z @ 0x1800E04A0 (-CreateWindowTarget@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z.c)
 * Callees:
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18001B974 (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x18004EED0 (-UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DestroyWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x1800CB02C (-DestroyWindowTarget@CTopLevelWindow@@QEAAJXZ.c)
 *     ?CreateFromSharedHandle@CWindowTarget@@SAJPEAXPEAPEAV1@@Z @ 0x1800E5454 (-CreateFromSharedHandle@CWindowTarget@@SAJPEAXPEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CTopLevelWindow::CreateWindowTarget(struct CWindowTarget **this, void *a2)
{
  struct CVisual **v3; // rdi
  int v4; // eax
  unsigned int v5; // esi
  int inserted; // eax
  unsigned int v8; // edi
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( this[29] && this[67] )
  {
    v3 = this + 93;
    if ( !this[93] )
    {
      v4 = CWindowTarget::CreateFromSharedHandle(a2, this + 93);
      v5 = v4;
      if ( v4 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x17E8,
          (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)(unsigned int)v4);
        CTopLevelWindow::DestroyWindowTarget((CTopLevelWindow *)this);
        return v5;
      }
      *((_BYTE *)*v3 + 36) &= ~8u;
      *((_DWORD *)*v3 + 30) = -2;
      inserted = CContainerVisual::InsertChildAfter(this[29], *v3, this[67]);
      v8 = inserted;
      if ( inserted < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x17EC,
          (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)(unsigned int)inserted);
        CTopLevelWindow::DestroyWindowTarget((CTopLevelWindow *)this);
        return v8;
      }
      updated = CTopLevelWindow::UpdateWindowTarget((CTopLevelWindow *)this);
      v8 = updated;
      if ( updated < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x17EE,
          (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)(unsigned int)updated);
        CTopLevelWindow::DestroyWindowTarget((CTopLevelWindow *)this);
        return v8;
      }
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17DD,
      (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
