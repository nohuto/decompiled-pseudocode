/*
 * XREFs of ?AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800DD3F4
 * Callers:
 *     ?SetBitmap@UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCBitmapSource@@@Z @ 0x1800DD800 (-SetBitmap@UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18000A8A4 (-SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?EnableBorder@CWindowBorder@@QEAAJ_N@Z @ 0x18000F71C (-EnableBorder@CWindowBorder@@QEAAJ_N@Z.c)
 *     ?SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z @ 0x18000FAD4 (-SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z @ 0x18001007C (-SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4Sh.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x1800204DC (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?Create@CWindowBorder@@SAJPEAPEAV1@@Z @ 0x1800229C0 (-Create@CWindowBorder@@SAJPEAPEAV1@@Z.c)
 *     ?UpdateColor@CSolidRectangleVisual@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18004CCFC (-UpdateColor@CSolidRectangleVisual@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z @ 0x18004FE5C (-Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D13DC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
  struct CVisual ***v8; // rdi
  CBaseObject *v9; // rcx
  int v10; // eax
  CVisualProxy ***v11; // rbx
  CBaseObject *v12; // rcx
  int v13; // eax
  bool v14; // r8
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int updated; // eax
  int v20; // [rsp+20h] [rbp-50h]
  int v21; // [rsp+20h] [rbp-50h]
  struct _D3DCOLORVALUE v22; // [rsp+40h] [rbp-30h] BYREF
  int v23[4]; // [rsp+50h] [rbp-20h] BYREF
  struct tagRECT si128; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  si128 = (struct tagRECT)_mm_load_si128((const __m128i *)&_xmm);
  if ( CDesktopManager::IsHighContrastMode() )
  {
    SysColor = GetSysColor(5);
    v4 = GetSysColor(8);
    v22.a = 1.0;
    v22.r = (float)(unsigned __int8)v4 / 255.0;
    v22.g = (float)BYTE1(v4) / 255.0;
    v22.b = (float)BYTE2(v4) / 255.0;
    v5 = *(__int128 *)&v22.r;
    v22.a = 1.0;
    *(_OWORD *)v23 = v5;
    v22.r = (float)(unsigned __int8)SysColor / 255.0;
    v22.g = (float)BYTE1(SysColor) / 255.0;
    v22.b = (float)BYTE2(SysColor) / 255.0;
  }
  else
  {
    v6 = *(_BYTE *)(v2 + 32) == 0;
    *(_OWORD *)v23 = 0LL;
    if ( v6 )
      *(struct _D3DCOLORVALUE *)&v7.r = (struct _D3DCOLORVALUE)_mm_load_si128((const __m128i *)&_xmm);
    else
      *(struct _D3DCOLORVALUE *)&v7.r = (struct _D3DCOLORVALUE)_mm_load_si128((const __m128i *)&_xmm);
    *(struct _D3DCOLORVALUE *)&v22.r = *(struct _D3DCOLORVALUE *)&v7.r;
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
      194LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.userresizevisual.cpp",
      (const char *)(unsigned int)v10,
      v20);
  v11 = (CVisualProxy ***)((char *)this + 56);
  v12 = (CBaseObject *)*((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  if ( v12 )
    CBaseObject::Release(v12);
  v13 = CSolidRectangleVisual::Create((struct CSolidRectangleVisual **)this + 7);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      195LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.userresizevisual.cpp",
      (const char *)(unsigned int)v13,
      v20);
  v15 = CWindowBorder::SetContent(*v8, *v11, v14);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      196LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.userresizevisual.cpp",
      (const char *)(unsigned int)v15,
      v20);
  v16 = CContainerVisual::AddChild((CContainerVisual *)*v11, *((struct CVisual **)this + 9));
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      197LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.userresizevisual.cpp",
      (const char *)(unsigned int)v16,
      v20);
  v17 = CWindowBorder::SetBorderParameters(
          (__int64)*v8,
          &si128,
          8.0,
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 232LL) + 348LL),
          (float *)v23,
          0,
          0);
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      204LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.userresizevisual.cpp",
      (const char *)(unsigned int)v17,
      v21);
  v18 = CWindowBorder::EnableBorder(*v8, 1);
  if ( v18 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      206LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.userresizevisual.cpp",
      (const char *)(unsigned int)v18,
      v21);
  CRectangleVisual::SetRect((CRectangleVisual *)*v11, &si128);
  updated = CSolidRectangleVisual::UpdateColor((CSolidRectangleVisual *)*v11, &v22);
  if ( updated < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      209LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.userresizevisual.cpp",
      (const char *)(unsigned int)updated,
      v21);
}
