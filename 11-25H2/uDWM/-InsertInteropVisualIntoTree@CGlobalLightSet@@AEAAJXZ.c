/*
 * XREFs of ?InsertInteropVisualIntoTree@CGlobalLightSet@@AEAAJXZ @ 0x1800354D0
 * Callers:
 *     ?CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180035064 (-CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x1800078BC (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180007D54 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001C7A4 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x180028C78 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 *     ?GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z @ 0x18004BA08 (-GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CGlobalLightSet::InsertInteropVisualIntoTree(CGlobalLightSet *this)
{
  CContainerVisual *RenderTargetRootVisualForDesktop; // rbp
  struct CMagnifierControl *MagnifierControlForDesktop; // rax
  struct CVisualProxy **v4; // rdi
  int inserted; // ebx
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                                      + 53));
  MagnifierControlForDesktop = CWindowList::GetMagnifierControlForDesktop(
                                 *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                                 *((_QWORD *)this + 11));
  v4 = (struct CVisualProxy **)*((_QWORD *)MagnifierControlForDesktop + 4);
  if ( v4[3] == RenderTargetRootVisualForDesktop )
  {
    inserted = CContainerVisual::InsertChildAfter(
                 RenderTargetRootVisualForDesktop,
                 *((struct CVisual **)this + 12),
                 *((struct CVisual **)MagnifierControlForDesktop + 4));
    if ( inserted < 0 )
    {
      v7 = 100LL;
    }
    else
    {
      inserted = CContainerVisual::RemoveChild(RenderTargetRootVisualForDesktop, v4);
      if ( inserted < 0 )
      {
        v7 = 103LL;
      }
      else
      {
        inserted = CContainerVisual::AddChild(*((CContainerVisual **)this + 13), (struct CVisual *)v4);
        if ( inserted >= 0 )
          return 0LL;
        v7 = 104LL;
      }
    }
  }
  else
  {
    inserted = -2147024809;
    v7 = 97LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
    (const char *)(unsigned int)inserted,
    v8);
  return (unsigned int)inserted;
}
