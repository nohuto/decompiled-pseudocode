/*
 * XREFs of ?SetBorderColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1800112BC
 * Callers:
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18000C5C4 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x18000F520 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?reset@?$com_ptr_t@VCSolidRectangleInstruction@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004EA64 (-reset@-$com_ptr_t@VCSolidRectangleInstruction@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z @ 0x18006AD8C (-Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?CreateSolidColorLegacyMilBrushProxy@CCompositor@@QEAAJPEAPEAVCSolidColorLegacyMilBrushProxy@@@Z @ 0x18006ADBC (-CreateSolidColorLegacyMilBrushProxy@CCompositor@@QEAAJPEAPEAVCSolidColorLegacyMilBrushProxy@@@Z.c)
 *     ?DirtyForRebuild@CLegacyNonClientBackground@@AEAAXXZ @ 0x18006AEE4 (-DirtyForRebuild@CLegacyNonClientBackground@@AEAAXXZ.c)
 *     ??9@YA_NAEBU_D3DCOLORVALUE@@0@Z @ 0x18006B4E4 (--9@YA_NAEBU_D3DCOLORVALUE@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CLegacyNonClientBackground::SetBorderColor(
        CLegacyNonClientBackground *this,
        const struct _D3DCOLORVALUE *a2)
{
  __int64 v2; // rax
  CSolidColorLegacyMilBrushProxy **v6; // r14
  CCompositor *v7; // rbx
  int SolidColorLegacyMilBrushProxy; // eax
  unsigned int v9; // ebx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 30);
  if ( !*(_QWORD *)(v2 + 96) && !*(_DWORD *)(v2 + 108) && !CDesktopManager::IsHighContrastMode() )
    return 0LL;
  v6 = (CSolidColorLegacyMilBrushProxy **)((char *)this + 256);
  if ( a2->a == 0.0 )
  {
    if ( *v6 )
      CLegacyNonClientBackground::DirtyForRebuild(this);
    wil::com_ptr_t<CSolidRectangleInstruction,wil::err_returncode_policy>::reset(v6);
    goto LABEL_7;
  }
  if ( *v6 )
  {
LABEL_7:
    if ( (unsigned __int8)operator!=(a2, (char *)this + 296) )
    {
      if ( *v6 )
        CSolidColorLegacyMilBrushProxy::Update(*v6, a2->a, a2);
      *(struct _D3DCOLORVALUE *)((char *)this + 296) = *(const struct _D3DCOLORVALUE *)&a2->r;
    }
    return 0LL;
  }
  v7 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
  wil::com_ptr_t<CSolidRectangleInstruction,wil::err_returncode_policy>::reset((char *)this + 256);
  SolidColorLegacyMilBrushProxy = CCompositor::CreateSolidColorLegacyMilBrushProxy(v7, v6);
  v9 = SolidColorLegacyMilBrushProxy;
  if ( SolidColorLegacyMilBrushProxy >= 0 )
  {
    CLegacyNonClientBackground::DirtyForRebuild(this);
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x80,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
    (const char *)(unsigned int)SolidColorLegacyMilBrushProxy,
    v10);
  return v9;
}
