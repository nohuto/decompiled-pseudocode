/*
 * XREFs of ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x18005E6A8
 * Callers:
 *     ?ValidateVisual@CAcrylicSheet@@EEAAJXZ @ 0x18005DD70 (-ValidateVisual@CAcrylicSheet@@EEAAJXZ.c)
 *     ?Initialize@CAcrylicSheet@@EEAAJXZ @ 0x18006FB90 (-Initialize@CAcrylicSheet@@EEAAJXZ.c)
 * Callees:
 *     ?SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18000A8A4 (-SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?EnableBorder@CWindowBorder@@QEAAJ_N@Z @ 0x18000F71C (-EnableBorder@CWindowBorder@@QEAAJ_N@Z.c)
 *     ?SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z @ 0x18000FAD4 (-SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z @ 0x18001007C (-SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4Sh.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180012220 (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x1800204DC (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?Create@CWindowBorder@@SAJPEAPEAV1@@Z @ 0x1800229C0 (-Create@CWindowBorder@@SAJPEAPEAV1@@Z.c)
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800421D8 (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?UpdateColor@CSolidRectangleVisual@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18004CCFC (-UpdateColor@CSolidRectangleVisual@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z @ 0x18004FE5C (-Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CAccentAcrylicBlurBehind@@SAJPEAPEAV1@@Z @ 0x1800681AC (-Create@CAccentAcrylicBlurBehind@@SAJPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureAcrylicAccentColor@CAcrylicSheet@@AEAAJXZ @ 0x180095924 (-EnsureAcrylicAccentColor@CAcrylicSheet@@AEAAJXZ.c)
 */

__int64 __fastcall CAcrylicSheet::EnsureBackgroundEffects(CAcrylicSheet *this)
{
  CBaseObject **v1; // r14
  CVisualProxy ***v3; // r12
  char v4; // dl
  DWORD SysColor; // esi
  DWORD v6; // eax
  __int64 *v7; // rbx
  LONG v8; // r13d
  LONG v9; // r15d
  int v10; // r15d
  __int64 v11; // rdx
  int v13; // eax
  unsigned int v14; // esi
  int v15; // edi
  bool v16; // r8
  __int64 v17; // rdx
  int updated; // ebx
  __int64 v19; // rdx
  bool v20; // r8
  CVisualProxy **v21; // rcx
  CVisualProxy **v22; // rcx
  int v23; // [rsp+20h] [rbp-50h]
  struct tagRECT v24; // [rsp+40h] [rbp-30h] BYREF
  int v25[4]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  int v27; // [rsp+B0h] [rbp+40h]
  LONG v28; // [rsp+B8h] [rbp+48h]

  v1 = (CBaseObject **)((char *)this + 208);
  wil::com_ptr_t<CImage,wil::err_exception_policy>::reset((CBaseObject **)this + 26);
  v3 = (CVisualProxy ***)((char *)this + 216);
  wil::com_ptr_t<CImage,wil::err_exception_policy>::reset((CBaseObject **)this + 27);
  v4 = *((_BYTE *)this + 353);
  *(struct _D3DCOLORVALUE *)v25 = *(const struct _D3DCOLORVALUE *)&CTopLevelWindow::OVERLAPPED_BORDER_COLOR.r;
  SysColor = v4 != 0 ? 13882323 : 5526612;
  v27 = 3 - (v4 != 0);
  if ( CDesktopManager::IsHighContrastMode() )
  {
    SysColor = GetSysColor(5);
    v6 = GetSysColor(8);
    v24.bottom = 1065353216;
    *(float *)&v24.left = (float)(unsigned __int8)v6 / 255.0;
    v27 = 0;
    *(float *)&v24.top = (float)BYTE1(v6) / 255.0;
    *(float *)&v24.right = (float)BYTE2(v6) / 255.0;
    *(struct tagRECT *)v25 = v24;
  }
  v7 = (__int64 *)((char *)this + 200);
  v8 = 0;
  v9 = 0;
  if ( *((_DWORD *)this + 48) - *((_DWORD *)this + 46) >= 0 )
    v8 = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
  if ( *((_DWORD *)this + 49) - *((_DWORD *)this + 47) >= 0 )
    v9 = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
  v28 = v9;
  if ( !*v7 )
  {
    *v7 = 0LL;
    *(_QWORD *)&v24.left = 0LL;
    v24.right = v8;
    v24.bottom = v9;
    v10 = CWindowBorder::Create((struct CWindowBorder **)this + 25);
    if ( v10 < 0 )
    {
      v11 = 124LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
        (const char *)(unsigned int)v10,
        v23);
      return (unsigned int)v10;
    }
    v10 = CWindowBorder::SetBorderParameters(*v7, &v24, 8.0, *((_DWORD *)this + 89), (float *)v25, 0, v27);
    if ( v10 < 0 )
    {
      v11 = 131LL;
      goto LABEL_10;
    }
    v10 = CWindowBorder::EnableBorder((CVisual **)*v7, 1);
    if ( v10 < 0 )
    {
      v11 = 133LL;
      goto LABEL_10;
    }
    v10 = CContainerVisual::AddChild(this, (struct CVisual *)*v7);
    if ( v10 < 0 )
    {
      v11 = 134LL;
      goto LABEL_10;
    }
    v9 = v28;
  }
  if ( *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53) + 633LL) )
  {
    wil::com_ptr_t<CImage,wil::err_exception_policy>::reset(v1);
    v13 = CAccentAcrylicBlurBehind::Create(v1);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8E,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
        (const char *)(unsigned int)v13,
        v23);
      return v14;
    }
    CVisual::SetSize(*v1, v8, v9);
    v15 = CAcrylicSheet::EnsureAcrylicAccentColor(this);
    if ( v15 < 0 )
    {
      v17 = 144LL;
LABEL_23:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
        (const char *)(unsigned int)v15,
        v23);
      return (unsigned int)v15;
    }
    updated = CWindowBorder::SetContent((struct CVisual **)*v7, (CVisualProxy **)*v1, v16);
    if ( updated < 0 )
    {
      v19 = 145LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
        (const char *)(unsigned int)updated,
        v23);
      return (unsigned int)updated;
    }
  }
  else
  {
    wil::com_ptr_t<CImage,wil::err_exception_policy>::reset((CBaseObject **)this + 27);
    v15 = CSolidRectangleVisual::Create((struct CSolidRectangleVisual **)this + 27);
    if ( v15 < 0 )
    {
      v17 = 149LL;
      goto LABEL_23;
    }
    updated = CWindowBorder::SetContent((struct CVisual **)*v7, *v3, v20);
    if ( updated < 0 )
    {
      v19 = 150LL;
      goto LABEL_26;
    }
    v21 = *v3;
    *(_QWORD *)&v24.left = 0LL;
    v24.right = v8;
    v24.bottom = v9;
    CRectangleVisual::SetRect((CRectangleVisual *)v21, &v24);
    v22 = *v3;
    v24.bottom = 1065353216;
    *(float *)&v24.left = (float)(unsigned __int8)SysColor / 255.0;
    *(float *)&v24.top = (float)BYTE1(SysColor) / 255.0;
    *(float *)&v24.right = (float)BYTE2(SysColor) / 255.0;
    updated = CSolidRectangleVisual::UpdateColor((CSolidRectangleVisual *)v22, (const struct _D3DCOLORVALUE *)&v24);
    if ( updated < 0 )
    {
      v19 = 164LL;
      goto LABEL_26;
    }
  }
  return 0LL;
}
