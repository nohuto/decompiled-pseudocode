/*
 * XREFs of ?AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E03BC
 * Callers:
 *     ?SetBitmap@UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCBitmapSource@@@Z @ 0x1800E0830 (-SetBitmap@UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180006760 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180007D54 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x18000F520 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?Create@CWindowBorder@@SAJPEAPEAV1@@Z @ 0x180010DD0 (-Create@CWindowBorder@@SAJPEAPEAV1@@Z.c)
 *     ?SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z @ 0x180011704 (-SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x1800211D8 (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?EnableBorder@CWindowBorder@@QEAAJ_N@Z @ 0x18003A7B4 (-EnableBorder@CWindowBorder@@QEAAJ_N@Z.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180040ADC (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?SetSolidFill@CSolidRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180040BC8 (-SetSolidFill@CSolidRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?SetRect@CSolidRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180040BDC (-SetRect@CSolidRectangleInstruction@@QEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNo.c)
 *     ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z @ 0x18006D584 (-SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4Sh.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D3EFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::AddIconPlate(
        winrt::Udwm::Transitions::implementation::UserResizeVisual *this)
{
  __int64 v2; // rcx
  DWORD SysColor; // ebx
  DWORD v4; // eax
  __int128 v5; // xmm1
  bool v6; // zf
  struct _D3DCOLORVALUE v7; // xmm1
  struct CVisual ***v8; // rsi
  CBaseObject *v9; // rcx
  int v10; // eax
  CVisualProxy ***v11; // rdi
  CBaseObject *v12; // rcx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 *v16; // rbx
  CBaseObject *v17; // rcx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // [rsp+20h] [rbp-60h]
  int v24; // [rsp+20h] [rbp-60h]
  struct _D3DCOLORVALUE v25; // [rsp+40h] [rbp-40h] BYREF
  int v26[4]; // [rsp+50h] [rbp-30h] BYREF
  __m128i si128; // [rsp+60h] [rbp-20h] BYREF
  __int128 v28; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v28 = _xmm;
  if ( CDesktopManager::IsHighContrastMode() )
  {
    SysColor = GetSysColor(5);
    v4 = GetSysColor(8);
    v25.a = 1.0;
    v25.r = (float)(unsigned __int8)v4 / 255.0;
    v25.g = (float)BYTE1(v4) / 255.0;
    v25.b = (float)BYTE2(v4) / 255.0;
    v5 = *(__int128 *)&v25.r;
    v25.a = 1.0;
    *(_OWORD *)v26 = v5;
    v25.r = (float)(unsigned __int8)SysColor / 255.0;
    v25.g = (float)BYTE1(SysColor) / 255.0;
    v25.b = (float)BYTE2(SysColor) / 255.0;
  }
  else
  {
    v6 = *(_BYTE *)(v2 + 32) == 0;
    *(_OWORD *)v26 = 0LL;
    if ( v6 )
      *(struct _D3DCOLORVALUE *)&v7.r = (struct _D3DCOLORVALUE)_xmm;
    else
      *(struct _D3DCOLORVALUE *)&v7.r = (struct _D3DCOLORVALUE)_xmm;
    *(struct _D3DCOLORVALUE *)&v25.r = *(struct _D3DCOLORVALUE *)&v7.r;
  }
  v8 = (struct CVisual ***)((char *)this + 48);
  v9 = (CBaseObject *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v9 )
    CBaseObject::Release(v9);
  v10 = CWindowBorder::Create((struct CWindowBorder **)this + 6);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      199LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.userresizevisual.cpp",
      (const char *)(unsigned int)v10,
      v23);
  v11 = (CVisualProxy ***)((char *)this + 56);
  v12 = (CBaseObject *)*((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  if ( v12 )
    CBaseObject::Release(v12);
  v13 = CRenderDataVisual::Create((struct CRenderDataVisual **)this + 7);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      200LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.userresizevisual.cpp",
      (const char *)(unsigned int)v13,
      v23);
  v14 = CWindowBorder::SetContent(*v8, *v11);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      201LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.userresizevisual.cpp",
      (const char *)(unsigned int)v14,
      v23);
  v15 = CContainerVisual::AddChild((CContainerVisual *)*v11, *((struct CVisual **)this + 10));
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      202LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.userresizevisual.cpp",
      (const char *)(unsigned int)v15,
      v23);
  v16 = (__int64 *)((char *)this + 64);
  v17 = (CBaseObject *)*((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v17 )
    CBaseObject::Release(v17);
  v18 = CSolidRectangleInstruction::Create((struct CSolidRectangleInstruction **)this + 8);
  if ( v18 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      203LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.userresizevisual.cpp",
      (const char *)(unsigned int)v18,
      v23);
  v19 = CWindowBorder::SetBorderParameters(
          (__int64)*v8,
          (const struct tagRECT *)&si128,
          8.0,
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 288LL) + 348LL),
          (float *)v26,
          0,
          0);
  if ( v19 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      210LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.userresizevisual.cpp",
      (const char *)(unsigned int)v19,
      v24);
  v20 = CWindowBorder::EnableBorder((CWindowBorder *)*v8, 1);
  if ( v20 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      212LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.userresizevisual.cpp",
      (const char *)(unsigned int)v20,
      v24);
  CSolidRectangleInstruction::SetRect(*v16, &v28);
  v21 = CSolidRectangleInstruction::SetSolidFill((struct _D3DCOLORVALUE *)*v16, &v25);
  if ( v21 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      215LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.userresizevisual.cpp",
      (const char *)(unsigned int)v21,
      v24);
  v22 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)*v11, (struct CRenderDataInstruction *)*v16);
  if ( v22 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      216LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.userresizevisual.cpp",
      (const char *)(unsigned int)v22,
      v24);
}
