/*
 * XREFs of ?Initialize@CTouchDragVisual@@MEAAJXZ @ 0x180083220
 * Callers:
 *     ??$CreateTouchVisual@VCTouchDragVisual@@@@YAJ_KPEAPEAVCTouchDragVisual@@@Z @ 0x1800734BC (--$CreateTouchVisual@VCTouchDragVisual@@@@YAJ_KPEAPEAVCTouchDragVisual@@@Z.c)
 * Callees:
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x18000504C (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180005198 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005451C (-reset@-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Initialize@CTouchVisual@@MEAAJXZ @ 0x180083310 (-Initialize@CTouchVisual@@MEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTouchDragVisual::Initialize(CTouchDragVisual *this)
{
  int BitmapFromAtlas; // ebx
  __int64 v3; // rdx
  CBaseObject *v5; // rcx
  void *Theme; // rax
  __int64 v7; // rsi
  __int64 (__fastcall *v8)(__int64, char *); // rdi
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  BitmapFromAtlas = CTouchVisual::Initialize(this);
  if ( BitmapFromAtlas < 0 )
  {
    v3 = 23LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\touchdragvisual.cpp",
      (const char *)(unsigned int)BitmapFromAtlas,
      v9);
    return (unsigned int)BitmapFromAtlas;
  }
  v5 = (CBaseObject *)*((_QWORD *)this + 50);
  *((_QWORD *)this + 50) = 0LL;
  if ( v5 )
    CBaseObject::Release(v5);
  Theme = (void *)CDesktopManager::GetTheme(1);
  BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, 2, 0LL, (struct CBitmapSource **)this + 50);
  if ( BitmapFromAtlas < 0 )
  {
    v3 = 32LL;
    goto LABEL_3;
  }
  v7 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 40LL);
  v8 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v7 + 184LL);
  wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::reset((__int64 *)this + 51);
  BitmapFromAtlas = v8(v7, (char *)this + 408);
  if ( BitmapFromAtlas < 0 )
  {
    v3 = 35LL;
    goto LABEL_3;
  }
  return 0LL;
}
