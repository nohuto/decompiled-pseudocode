/*
 * XREFs of ?CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z @ 0x1800CFCB4
 * Callers:
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18001B874 (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateWindowTarget@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z @ 0x1800E3B30 (-CreateWindowTarget@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z.c)
 * Callees:
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x1800078BC (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x18000C298 (-UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DestroyWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x1800CFE00 (-DestroyWindowTarget@CTopLevelWindow@@QEAAJXZ.c)
 *     ?CreateFromSharedHandle@CWindowTarget@@SAJPEAXPEAPEAV1@@Z @ 0x1800E9678 (-CreateFromSharedHandle@CWindowTarget@@SAJPEAXPEAPEAV1@@Z.c)
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

  if ( this[31] && this[69] )
  {
    v3 = this + 98;
    if ( !this[98] )
    {
      v4 = CWindowTarget::CreateFromSharedHandle(a2, this + 98);
      v5 = v4;
      if ( v4 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x18C4,
          (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)(unsigned int)v4);
        CTopLevelWindow::DestroyWindowTarget((CTopLevelWindow *)this);
        return v5;
      }
      *((_BYTE *)*v3 + 36) &= ~8u;
      *((_DWORD *)*v3 + 32) = -2;
      inserted = CContainerVisual::InsertChildAfter(this[31], *v3, this[69]);
      v8 = inserted;
      if ( inserted < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x18C8,
          (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
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
          (void *)0x18CA,
          (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
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
      (void *)0x18B9,
      (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
