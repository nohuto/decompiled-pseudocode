/*
 * XREFs of ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x1800BF8D8
 * Callers:
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800458AC (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCVisualBrush@@AEBUD2D_POINTANDSIZE_L@@@Z @ 0x1800BF784 (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCVisualBrush@@AEBUD2D_POINTANDSIZE_L@.c)
 * Callees:
 *     ?SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18000A8A4 (-SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     ??$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x18000ABC4 (--$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUIComposi.c)
 *     ?RemoveAllChildren@CContainerVisualProxy@@QEAAJXZ @ 0x18001BD60 (-RemoveAllChildren@CContainerVisualProxy@@QEAAJXZ.c)
 *     ?InsertChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@0_N@Z @ 0x18001C620 (-InsertChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@0_N@Z.c)
 *     ?GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z @ 0x180022944 (-GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z.c)
 *     ?GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ @ 0x1800293B4 (-GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ.c)
 *     ?SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18006B24C (-SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?GetTLWRootVisualType@CSecondaryWindowRepresentation@@AEAA?AW4TLWRootVisualType@@XZ @ 0x180073D88 (-GetTLWRootVisualType@CSecondaryWindowRepresentation@@AEAA-AW4TLWRootVisualType@@XZ.c)
 *     ??$SetBrush@$$T@CSpriteVisual@@QEAAJ$$T@Z @ 0x180082BF4 (--$SetBrush@$$T@CSpriteVisual@@QEAAJ$$T@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ApplyViewportTransformForView@CSurfaceBrush@@QEAAJAEBUtagRECT@@@Z @ 0x180083CD4 (-ApplyViewportTransformForView@CSurfaceBrush@@QEAAJAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?CreateRedirectVisualProxy@CCompositor@@QEAAJPEAPEAVCRedirectVisualProxy@@@Z @ 0x1800A7FCC (-CreateRedirectVisualProxy@CCompositor@@QEAAJPEAPEAVCRedirectVisualProxy@@@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::UpdateOwnedWindowVisualTreeRootVisual(
        CSecondaryWindowRepresentation *this)
{
  __int64 v2; // rcx
  int v3; // edi
  __int64 v4; // rdx
  LONG v6; // edx
  int v7; // ecx
  int RedirectVisualProxy; // esi
  __int64 v9; // rdx
  _QWORD *v10; // rbp
  CRedirectVisualProxy **v11; // rdi
  struct IDwmChannel **v12; // rcx
  int TLWRootVisualType; // eax
  __int64 RootVisualNoAddRef; // rax
  int inserted; // eax
  unsigned int v16; // ebx
  struct tagRECT v17; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *((_QWORD *)this + 7);
  if ( !v2 )
    return 0LL;
  v3 = CContainerVisualProxy::RemoveAllChildren(*(CContainerVisualProxy **)(v2 + 16));
  if ( v3 < 0 )
  {
    v4 = 199LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"clientcore\\windows\\dwm\\udwm\\secondarywindowrepresentation.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = CSpriteVisual::SetBrush<std::nullptr_t>(*((_QWORD *)this + 7));
  if ( v3 < 0 )
  {
    v4 = 200LL;
    goto LABEL_4;
  }
  if ( *((_QWORD *)this + 27) )
  {
    v6 = *((_DWORD *)this + 59);
    v17.left = *((_DWORD *)this + 58);
    v17.right = *((_DWORD *)this + 60) + v17.left;
    v7 = *((_DWORD *)this + 61);
    v17.top = v6;
    v17.bottom = v6 + v7;
    RedirectVisualProxy = CSurfaceBrush::ApplyViewportTransformForView(
                            (CSecondaryWindowRepresentation *)((char *)this + 216),
                            &v17);
    if ( RedirectVisualProxy < 0 )
    {
      v9 = 205LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"clientcore\\windows\\dwm\\udwm\\secondarywindowrepresentation.cpp",
        (const char *)(unsigned int)RedirectVisualProxy);
      return (unsigned int)RedirectVisualProxy;
    }
    v3 = CSpriteVisual::SetBrush<Windows::UI::Composition::ICompositionColorBrush *>(
           *((_QWORD *)this + 7),
           *((_QWORD *)this + 27));
    if ( v3 < 0 )
    {
      v4 = 206LL;
      goto LABEL_4;
    }
    CRectangleVisual::SetRect(*((CRectangleVisual **)this + 7), &v17);
    return 0LL;
  }
  v10 = (_QWORD *)*((_QWORD *)CWindowRepresentation::GetRepresentationWindowData((CSecondaryWindowRepresentation *)((char *)this + 64))
                  + 55);
  if ( !v10 )
    return 0LL;
  v11 = (CRedirectVisualProxy **)((char *)this + 224);
  if ( !*((_QWORD *)this + 28) )
  {
    v12 = (struct IDwmChannel **)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
    *v11 = 0LL;
    RedirectVisualProxy = CCompositor::CreateRedirectVisualProxy(v12, (struct CRedirectVisualProxy **)this + 28);
    if ( RedirectVisualProxy < 0 )
    {
      v9 = 217LL;
      goto LABEL_10;
    }
  }
  TLWRootVisualType = CSecondaryWindowRepresentation::GetTLWRootVisualType((__int64)this);
  RootVisualNoAddRef = CTopLevelWindow::GetRootVisualNoAddRef(v10, TLWRootVisualType);
  RedirectVisualProxy = CRedirectVisualProxy::SetRedirectedVisual(
                          *v11,
                          *(struct CVisualProxy **)(RootVisualNoAddRef + 16));
  if ( RedirectVisualProxy < 0 )
  {
    v9 = 221LL;
    goto LABEL_10;
  }
  inserted = CContainerVisualProxy::InsertChild(*(CContainerVisualProxy **)(*((_QWORD *)this + 7) + 16LL), *v11, 0LL, 0);
  v16 = inserted;
  if ( inserted >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE0,
    (int)"clientcore\\windows\\dwm\\udwm\\secondarywindowrepresentation.cpp",
    (const char *)(unsigned int)inserted);
  return v16;
}
