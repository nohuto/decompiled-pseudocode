/*
 * XREFs of ?SetGlyphImage@CButtonVisual@@QEAAXPEAVCBitmapSource@@@Z @ 0x180008F84
 * Callers:
 *     ?DrawStateW@CButton@@AEAAXPEAVCButtonVisual@@W4ButtonStates@1@@Z @ 0x180008C74 (-DrawStateW@CButton@@AEAAXPEAVCButtonVisual@@W4ButtonStates@1@@Z.c)
 * Callees:
 *     ?SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x180008D8C (-SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?SetParentMarginOffset@CButtonGlyph@@QEAAXAEBUtagPOINT@@@Z @ 0x1800090D0 (-SetParentMarginOffset@CButtonGlyph@@QEAAXAEBUtagPOINT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180022CA0 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Create@CButtonGlyph@@SAJPEAPEAV1@@Z @ 0x180027EB0 (-Create@CButtonGlyph@@SAJPEAPEAV1@@Z.c)
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800421D8 (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CButtonVisual::SetGlyphImage(CButtonVisual *this, struct CBitmapSource *a2)
{
  CVisual **v4; // rbx
  struct CVisual *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  bool v9; // r8
  struct tagPOINT v10; // rsi
  int v11; // eax
  CBaseObject *v12; // rcx
  int v13; // eax
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT v16; // [rsp+38h] [rbp+10h] BYREF

  v4 = (CVisual **)((char *)this + 240);
  v5 = (struct CVisual *)*((_QWORD *)this + 30);
  if ( a2 )
  {
    if ( !v5 )
    {
      v16 = 0LL;
      v8 = CButtonGlyph::Create((struct CButtonGlyph **)&v16);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1BC,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\button.cpp",
          (const char *)(unsigned int)v8,
          v14);
      v10 = v16;
      v11 = CContainerVisual::AddChild(this, *(struct CVisual **)&v16, v9);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1BD,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\button.cpp",
          (const char *)(unsigned int)v11,
          v14);
      v12 = *v4;
      *v4 = (CVisual *)v10;
      if ( v12 )
        CBaseObject::Release(v12);
    }
    v6 = *((_QWORD *)this + 29);
    if ( v6 )
    {
      CVisual::SetInsetFromParent(*v4, (const struct _MARGINS *)(v6 + 168));
      v7 = *((_QWORD *)this + 29);
      v16.x = *(_DWORD *)(v7 + 152);
      v16.y = *(_DWORD *)(v7 + 160);
      CButtonGlyph::SetParentMarginOffset(*v4, &v16);
    }
    CImage::SetBitmapSource(*v4, a2);
  }
  else if ( v5 )
  {
    v13 = CContainerVisual::RemoveChild(this, v5);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1D3,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\button.cpp",
        (const char *)(unsigned int)v13,
        v14);
    wil::com_ptr_t<CImage,wil::err_exception_policy>::reset(v4);
  }
}
