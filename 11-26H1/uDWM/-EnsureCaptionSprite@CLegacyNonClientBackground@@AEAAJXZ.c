/*
 * XREFs of ?EnsureCaptionSprite@CLegacyNonClientBackground@@AEAAJXZ @ 0x18000B35C
 * Callers:
 *     ?SetCaptionRect@CLegacyNonClientBackground@@QEAAJAEBUtagRECT@@@Z @ 0x18000B1D8 (-SetCaptionRect@CLegacyNonClientBackground@@QEAAJAEBUtagRECT@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x180025A50 (-InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?UpdateColor@CSolidRectangleVisual@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18004CCFC (-UpdateColor@CSolidRectangleVisual@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z @ 0x18004FE5C (-Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLegacyNonClientBackground::EnsureCaptionSprite(CLegacyNonClientBackground *this)
{
  int v3; // eax
  unsigned int v4; // ebx
  struct CVisual *v5; // rbx
  int updated; // esi
  __int64 v7; // rdx
  CBaseObject *v8; // rcx
  struct _D3DCOLORVALUE v9; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CBaseObject *v11; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 24) )
    return 0LL;
  v11 = 0LL;
  v3 = CSolidRectangleVisual::Create(&v11);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x96,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
      (const char *)(unsigned int)v3,
      SLODWORD(v9.r));
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v11);
    return v4;
  }
  else
  {
    *(struct _D3DCOLORVALUE *)&v9.r = (struct _D3DCOLORVALUE)*((_OWORD *)this + 13);
    v9.a = 1.0;
    v5 = v11;
    updated = CSolidRectangleVisual::UpdateColor(v11, &v9);
    if ( updated >= 0 )
    {
      updated = CContainerVisual::InsertChildBefore(this, v5, 0LL);
      if ( updated >= 0 )
      {
        v8 = (CBaseObject *)*((_QWORD *)this + 24);
        *((_QWORD *)this + 24) = v5;
        if ( v8 )
          CBaseObject::Release(v8);
        return 0LL;
      }
      v7 = 157LL;
    }
    else
    {
      v7 = 154LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
      (const char *)(unsigned int)updated,
      SLODWORD(v9.r));
    if ( v5 )
      CBaseObject::Release(v5);
    return (unsigned int)updated;
  }
}
