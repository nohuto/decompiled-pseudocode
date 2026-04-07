/*
 * XREFs of ?ZOrderAcrylicSheet@CWindowList@@QEAAJXZ @ 0x18006FC10
 * Callers:
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180017A70 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?OnSnapPreviewInsertAfterNotification@CWindowList@@AEAAJPEAUHWND__@@0@Z @ 0x18002B0F4 (-OnSnapPreviewInsertAfterNotification@CWindowList@@AEAAJPEAUHWND__@@0@Z.c)
 *     ?EnsureAcrylicSheet@CWindowList@@AEAAJXZ @ 0x18006F9CC (-EnsureAcrylicSheet@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001BE20 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180029500 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x18008D348 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 */

__int64 __fastcall CWindowList::ZOrderAcrylicSheet(CWindowList *this)
{
  __int64 v1; // rdx
  CBaseObject ***v3; // rbx
  struct CWindowData *WindowDataByHwnd; // rax
  CBaseObject ***v5; // rax
  struct CContainerVisual *RootVisualForDesktop; // rax
  int inserted; // eax
  unsigned int v8; // ebx
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *((_QWORD *)this + 87);
  v3 = *(CBaseObject ****)(v1 + 440);
  WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(this, *(HWND *)(v1 + 664));
  if ( WindowDataByHwnd )
  {
    v5 = (CBaseObject ***)*((_QWORD *)WindowDataByHwnd + 55);
    if ( v5 )
      v3 = v5;
  }
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *(_QWORD *)(*((_QWORD *)this + 87) + 136LL));
  inserted = VisualCollection::InsertRelative(
               (struct CContainerVisual *)((char *)RootVisualForDesktop + 136),
               *((CBaseObject ****)this + 67),
               v3,
               0);
  v8 = inserted;
  if ( inserted >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1FB3,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)inserted,
    v10);
  return v8;
}
