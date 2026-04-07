/*
 * XREFs of ?SetCaptionColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18006AC9C
 * Callers:
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18000C5C4 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VCSolidRectangleInstruction@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004EA64 (-reset@-$com_ptr_t@VCSolidRectangleInstruction@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z @ 0x18006AD8C (-Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?CreateSolidColorLegacyMilBrushProxy@CCompositor@@QEAAJPEAPEAVCSolidColorLegacyMilBrushProxy@@@Z @ 0x18006ADBC (-CreateSolidColorLegacyMilBrushProxy@CCompositor@@QEAAJPEAPEAVCSolidColorLegacyMilBrushProxy@@@Z.c)
 *     ?DirtyForRebuild@CLegacyNonClientBackground@@AEAAXXZ @ 0x18006AEE4 (-DirtyForRebuild@CLegacyNonClientBackground@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CLegacyNonClientBackground::SetCaptionColor(
        CLegacyNonClientBackground *this,
        const struct _D3DCOLORVALUE *a2)
{
  struct CSolidColorLegacyMilBrushProxy **v2; // r14
  CCompositor *v5; // rbx
  int SolidColorLegacyMilBrushProxy; // eax
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct CSolidColorLegacyMilBrushProxy **)((char *)this + 248);
  if ( !*((_QWORD *)this + 31) )
  {
    v5 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
    wil::com_ptr_t<CSolidRectangleInstruction,wil::err_returncode_policy>::reset((CBaseObject **)this + 31);
    SolidColorLegacyMilBrushProxy = CCompositor::CreateSolidColorLegacyMilBrushProxy(v5, v2);
    v7 = SolidColorLegacyMilBrushProxy;
    if ( SolidColorLegacyMilBrushProxy < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x61,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
        (const char *)(unsigned int)SolidColorLegacyMilBrushProxy,
        v9);
      return v7;
    }
    CLegacyNonClientBackground::DirtyForRebuild(this);
  }
  if ( a2->a != *((float *)this + 73)
    || a2->r != *((float *)this + 70)
    || a2->g != *((float *)this + 71)
    || a2->b != *((float *)this + 72) )
  {
    CSolidColorLegacyMilBrushProxy::Update(*v2, 1.0, a2);
    *(struct _D3DCOLORVALUE *)((char *)this + 280) = *(const struct _D3DCOLORVALUE *)&a2->r;
  }
  return 0LL;
}
