/*
 * XREFs of ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x1800CD870
 * Callers:
 *     ?StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800CD3C4 (-StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800CD530 (-StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800CD684 (-StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800CDB20 (-UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ.c)
 * Callees:
 *     ?UpdateInsets@CNineGridVisual@@QEAAJMMMM@Z @ 0x180009A58 (-UpdateInsets@CNineGridVisual@@QEAAJMMMM@Z.c)
 *     ?Width@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18000A88C (-Width@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?Height@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18000A898 (-Height@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?SetRect@CRectangleVisual@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A8D8 (-SetRect@CRectangleVisual@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?UpdateColor@CSolidRectangleVisual@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18004CCFC (-UpdateColor@CSolidRectangleVisual@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?WUColorFromD2DColor@@YA?AUColor@UI@Windows@@AEBU_D3DCOLORVALUE@@@Z @ 0x18004D000 (-WUColorFromD2DColor@@YA-AUColor@UI@Windows@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Deflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x1800CD08C (-Deflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?EnsureBorderSprite@CTouchPressHoldVisual@@IEAAJPEAPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x1800CD0E4 (-EnsureBorderSprite@CTouchPressHoldVisual@@IEAAJPEAPEAUICompositionColorBrush@Composition@UI@Win.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CTouchPressHoldVisual::UpdateOpacityAndLocation(CTouchPressHoldVisual *this)
{
  float v2; // xmm7_4
  int v3; // ecx
  unsigned int v4; // ecx
  float v5; // xmm6_4
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int updated; // ebx
  __int64 v11; // rdx
  unsigned int v12; // eax
  double v13; // xmm0_8
  double v14; // xmm0_8
  __int64 v15; // rdx
  struct CVisual *v17; // rdx
  __int128 v18; // [rsp+30h] [rbp-50h] BYREF
  struct _D3DCOLORVALUE v19; // [rsp+40h] [rbp-40h] BYREF
  struct _D3DCOLORVALUE v20; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]
  struct Windows::UI::Composition::ICompositionColorBrush *v22; // [rsp+90h] [rbp+10h] BYREF

  v2 = *((float *)this + 64);
  v3 = *((_DWORD *)this + 61);
  if ( v3 < 10 )
  {
    *((_DWORD *)this + 61) = 10;
    v3 = 10;
  }
  if ( *((int *)this + 62) < 10 )
    *((_DWORD *)this + 62) = 10;
  v4 = (unsigned int)v3 >> 1;
  v5 = (float)(int)(*((_DWORD *)this + 57) - v4);
  *(float *)&v18 = v5;
  v6 = *((_DWORD *)this + 58) - *((_DWORD *)this + 63) - v4;
  *((float *)&v18 + 1) = (float)(int)(v6 + MulDiv(-5, *((_DWORD *)this + 66), 100));
  v7 = *((_DWORD *)this + 61);
  *((float *)&v18 + 2) = (float)v7 + v5;
  v8 = *((_DWORD *)this + 62);
  *((float *)&v18 + 3) = (float)v8 + *((float *)&v18 + 1);
  v20.r = 1.0;
  v20.g = 1.0;
  v20.b = 1.0;
  v20.a = v2 * 0.30000001;
  v19.r = 0.10196079;
  v19.g = 0.10196079;
  v19.b = 0.10196079;
  v19.a = v2 * 0.94999999;
  if ( v7 <= 4 || v8 <= 4 )
  {
    v17 = (struct CVisual *)*((_QWORD *)this + 38);
    if ( v17 )
    {
      CContainerVisual::RemoveChild(this, v17);
      *((_BYTE *)this + 260) = 0;
    }
    updated = CSolidRectangleVisual::UpdateColor(this, &v19);
    if ( updated < 0 )
    {
      v15 = 311LL;
      goto LABEL_22;
    }
    goto LABEL_17;
  }
  v22 = 0LL;
  v9 = CTouchPressHoldVisual::EnsureBorderSprite((CBaseObject **)this, &v22);
  updated = v9;
  if ( v9 >= 0 )
  {
    v12 = WUColorFromD2DColor(&v19.r);
    v9 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ICompositionColorBrush *, _QWORD))(*(_QWORD *)v22 + 56LL))(
           v22,
           v12);
    updated = v9;
    if ( v9 < 0 )
    {
      v11 = 331LL;
      goto LABEL_11;
    }
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v22);
    v19.r = -2.0;
    v19.g = -2.0;
    v13 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Width((__int64)&v18);
    v19.b = *(float *)&v13 - 2.0;
    v14 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Height((__int64)&v18);
    v19.a = *(float *)&v14 - 2.0;
    CRectangleVisual::SetRect(*((_QWORD *)this + 38), (__int128 *)&v19);
    updated = CNineGridVisual::UpdateInsets(*((CNineGridVisual **)this + 38), 2.0, 2.0, 2.0, SLODWORD(FLOAT_2_0));
    if ( updated < 0 )
    {
      v15 = 343LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (int)"clientcore\\windows\\dwm\\udwm\\touchpressholdvisual.cpp",
        (const char *)(unsigned int)updated);
      return (unsigned int)updated;
    }
    updated = CSolidRectangleVisual::UpdateColor(this, &v20);
    if ( updated < 0 )
    {
      v15 = 346LL;
      goto LABEL_22;
    }
    TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Deflate((float *)&v18, 2.0, 2.0);
LABEL_17:
    CRectangleVisual::SetRect((__int64)this, &v18);
    return 0LL;
  }
  v11 = 330LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"clientcore\\windows\\dwm\\udwm\\touchpressholdvisual.cpp",
    (const char *)(unsigned int)v9);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v22);
  return (unsigned int)updated;
}
