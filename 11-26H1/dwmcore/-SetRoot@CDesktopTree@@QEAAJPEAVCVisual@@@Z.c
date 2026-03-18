/*
 * XREFs of ?SetRoot@CDesktopTree@@QEAAJPEAVCVisual@@@Z @ 0x18021BDDC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ??1CDesktopTree@@UEAA@XZ @ 0x18025FE94 (--1CDesktopTree@@UEAA@XZ.c)
 * Callees:
 *     ?RemoveChild@CVisual@@IEAAXPEAV1@@Z @ 0x180025C10 (-RemoveChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?InsertChild@CVisual@@IEAAJPEAV1@0_N@Z @ 0x1800260F4 (-InsertChild@CVisual@@IEAAJPEAV1@0_N@Z.c)
 *     ?GetChildAt@CVisual@@QEBAPEAV1@I@Z @ 0x18011A360 (-GetChildAt@CVisual@@QEBAPEAV1@I@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDesktopTree::SetRoot(CVisual **this, CVisual **a2)
{
  struct CVisual *ChildAt; // rax
  int inserted; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ChildAt = CVisual::GetChildAt(this[330], 0);
  if ( a2 != (CVisual **)ChildAt )
  {
    if ( ChildAt )
      CVisual::RemoveChild(this[330], ChildAt);
    if ( a2 )
    {
      inserted = CVisual::InsertChild(this[330], a2, 0LL, 1);
      if ( inserted < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x156,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\desktoptree.cpp",
          (const char *)(unsigned int)inserted,
          v7);
    }
  }
  return 0LL;
}
