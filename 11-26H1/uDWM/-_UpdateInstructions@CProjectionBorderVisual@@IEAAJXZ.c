/*
 * XREFs of ?_UpdateInstructions@CProjectionBorderVisual@@IEAAJXZ @ 0x1800BED6C
 * Callers:
 *     ?ValidateVisual@CProjectionBorderVisual@@UEAAJXZ @ 0x1800BECD0 (-ValidateVisual@CProjectionBorderVisual@@UEAAJXZ.c)
 * Callees:
 *     ?SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18000A8A4 (-SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x1800204DC (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800421D8 (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_CreateOrUpdateBrush@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@PEAVCNineGridVisual@@@Z @ 0x18004BEFC (-_CreateOrUpdateBrush@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@PEAVCNineG.c)
 *     ?Create@CNineGridVisual@@SAJPEAPEAV1@@Z @ 0x18006F188 (-Create@CNineGridVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 __fastcall CProjectionBorderVisual::_UpdateInstructions(CProjectionBorderVisual *this)
{
  int v2; // esi
  __int64 v3; // rcx
  bool v4; // zf
  struct CNineGridVisual **v5; // rdi
  int updated; // ebp
  __int64 v7; // rdx
  struct tagRECT *v9; // r14
  struct CVisual **v10; // rdi
  int v11; // ebx
  __int64 v12; // rdx
  int v13; // r8d
  CProjectionBorderVisual *v14; // rcx
  struct _D3DCOLORVALUE v15; // [rsp+30h] [rbp-58h] BYREF
  struct _D3DCOLORVALUE v16; // [rsp+40h] [rbp-48h] BYREF
  struct tagRECT rc; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  if ( *((_BYTE *)this + 216) )
  {
    v2 = 2;
    *(struct _D3DCOLORVALUE *)&v15.r = (struct _D3DCOLORVALUE)_mm_load_si128((const __m128i *)&_xmm);
    *(struct _D3DCOLORVALUE *)&v16.r = (struct _D3DCOLORVALUE)xmmword_1800F9288;
    if ( CDesktopManager::IsHighContrastMode() )
    {
      v4 = *(_DWORD *)(v3 + 220) == 0;
      v15.a = 1.0;
      if ( v4 )
        v2 = 4;
    }
    v5 = (struct CNineGridVisual **)(v3 + 184);
    if ( !*(_QWORD *)(v3 + 184) )
    {
      wil::com_ptr_t<CImage,wil::err_exception_policy>::reset((CBaseObject **)(v3 + 184));
      updated = CNineGridVisual::Create(v5);
      if ( updated < 0 )
      {
        v7 = 66LL;
LABEL_8:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (int)"clientcore\\windows\\dwm\\udwm\\projectionbordervisual.cpp",
          (const char *)(unsigned int)updated);
        return (unsigned int)updated;
      }
      updated = CContainerVisual::AddChild(this, *v5);
      if ( updated < 0 )
      {
        v7 = 67LL;
        goto LABEL_8;
      }
    }
    v9 = (struct tagRECT *)((char *)this + 200);
    updated = CProjectionBorderVisual::_CreateOrUpdateBrush(
                (CProjectionBorderVisual *)v3,
                (const struct tagRECT *)((char *)this + 200),
                v2,
                &v15,
                *v5);
    if ( updated < 0 )
    {
      v7 = 70LL;
      goto LABEL_8;
    }
    CRectangleVisual::SetRect(*v5, (const struct tagRECT *)((char *)this + 200));
    v10 = (struct CVisual **)((char *)this + 192);
    if ( !*((_QWORD *)this + 24) )
    {
      wil::com_ptr_t<CImage,wil::err_exception_policy>::reset((CBaseObject **)this + 24);
      updated = CNineGridVisual::Create((struct CNineGridVisual **)this + 24);
      if ( updated < 0 )
      {
        v7 = 76LL;
        goto LABEL_8;
      }
      v11 = CContainerVisual::AddChild(this, *v10);
      if ( v11 < 0 )
      {
        v12 = 77LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (int)"clientcore\\windows\\dwm\\udwm\\projectionbordervisual.cpp",
          (const char *)(unsigned int)v11);
        return (unsigned int)v11;
      }
    }
    rc = *v9;
    v13 = -(int)((double)v2 * *((double *)CDesktopManager::s_pDesktopManagerInstance + 52));
    InflateRect(&rc, v13, v13);
    v11 = CProjectionBorderVisual::_CreateOrUpdateBrush(v14, &rc, 1, &v16, *v10);
    if ( v11 < 0 )
    {
      v12 = 83LL;
      goto LABEL_18;
    }
    CRectangleVisual::SetRect(*v10, &rc);
  }
  return 0LL;
}
