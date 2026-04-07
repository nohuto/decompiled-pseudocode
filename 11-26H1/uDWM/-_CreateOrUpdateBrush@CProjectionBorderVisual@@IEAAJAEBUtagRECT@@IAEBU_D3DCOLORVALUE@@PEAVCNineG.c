/*
 * XREFs of ?_CreateOrUpdateBrush@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@PEAVCNineGridVisual@@@Z @ 0x18004BEFC
 * Callers:
 *     ?_UpdateInstructions@CProjectionBorderVisual@@IEAAJXZ @ 0x1800BED6C (-_UpdateInstructions@CProjectionBorderVisual@@IEAAJXZ.c)
 * Callees:
 *     ?UpdateIsCenterHollow@CNineGridVisual@@QEAAJ_N@Z @ 0x18000834C (-UpdateIsCenterHollow@CNineGridVisual@@QEAAJ_N@Z.c)
 *     ??$UpdateInnerBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CNineGridVisual@@QEAAJPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x180008DF0 (--$UpdateInnerBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CNineGridVisual@@QEAAJPE.c)
 *     ?UpdateInsets@CNineGridVisual@@QEAAJMMMM@Z @ 0x180009A58 (-UpdateInsets@CNineGridVisual@@QEAAJMMMM@Z.c)
 *     ?WUColorFromD2DColor@@YA?AUColor@UI@Windows@@AEBU_D3DCOLORVALUE@@@Z @ 0x18004D000 (-WUColorFromD2DColor@@YA-AUColor@UI@Windows@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetInnerBrush@UICompositionColorBrush@Composition@UI@Windows@@@CNineGridVisual@@QEAAJPEAPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x1800845B8 (--$GetInnerBrush@UICompositionColorBrush@Composition@UI@Windows@@@CNineGridVisual@@QEAAJPEAPEAUI.c)
 *     ??$UpdateInnerBrush@$$T@CNineGridVisual@@QEAAJ$$T@Z @ 0x1800BEB14 (--$UpdateInnerBrush@$$T@CNineGridVisual@@QEAAJ$$T@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CProjectionBorderVisual::_CreateOrUpdateBrush(
        CProjectionBorderVisual *this,
        const struct tagRECT *a2,
        int a3,
        const struct _D3DCOLORVALUE *a4,
        struct CNineGridVisual *a5)
{
  int IsCenterHollow; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 *v10; // rcx
  __int64 v11; // rax
  unsigned int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CProjectionBorderVisual *v18; // [rsp+40h] [rbp+8h] BYREF

  v18 = this;
  if ( IsRectEmpty(a2) )
  {
    v15 = CNineGridVisual::UpdateInnerBrush<std::nullptr_t>(a5);
    v8 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x72,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordervisual.cpp",
        (const char *)(unsigned int)v15,
        v16);
      return v8;
    }
  }
  else
  {
    v18 = 0LL;
    IsCenterHollow = CNineGridVisual::GetInnerBrush<Windows::UI::Composition::ICompositionColorBrush>(a5, &v18);
    v8 = IsCenterHollow;
    if ( IsCenterHollow < 0 )
    {
      v9 = 99LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordervisual.cpp",
        (const char *)(unsigned int)IsCenterHollow,
        v16);
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v18);
      return v8;
    }
    if ( !v18 )
    {
      v10 = *(__int64 **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 40LL);
      v11 = *v10;
      v18 = 0LL;
      IsCenterHollow = (*(__int64 (__fastcall **)(__int64 *, CProjectionBorderVisual **))(v11 + 56))(v10, &v18);
      v8 = IsCenterHollow;
      if ( IsCenterHollow < 0 )
      {
        v9 = 104LL;
        goto LABEL_13;
      }
      IsCenterHollow = CNineGridVisual::UpdateInnerBrush<Windows::UI::Composition::ICompositionColorBrush *>(
                         a5,
                         (__int64)v18);
      v8 = IsCenterHollow;
      if ( IsCenterHollow < 0 )
      {
        v9 = 105LL;
        goto LABEL_13;
      }
      IsCenterHollow = CNineGridVisual::UpdateIsCenterHollow(a5, 1);
      v8 = IsCenterHollow;
      if ( IsCenterHollow < 0 )
      {
        v9 = 106LL;
        goto LABEL_13;
      }
    }
    IsCenterHollow = CNineGridVisual::UpdateInsets(
                       a5,
                       (float)(int)((double)a3 * *((double *)CDesktopManager::s_pDesktopManagerInstance + 52)),
                       (float)(int)((double)a3 * *((double *)CDesktopManager::s_pDesktopManagerInstance + 52)),
                       (float)(int)((double)a3 * *((double *)CDesktopManager::s_pDesktopManagerInstance + 52)),
                       COERCE_INT((float)(int)((double)a3 * *((double *)CDesktopManager::s_pDesktopManagerInstance + 52))));
    v8 = IsCenterHollow;
    if ( IsCenterHollow < 0 )
    {
      v9 = 109LL;
      goto LABEL_13;
    }
    v13 = WUColorFromD2DColor(a4);
    v14 = (*(__int64 (__fastcall **)(CProjectionBorderVisual *, _QWORD))(*(_QWORD *)v18 + 56LL))(v18, v13);
    v8 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6E,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordervisual.cpp",
        (const char *)(unsigned int)v14,
        v16);
      if ( v18 )
        (*(void (__fastcall **)(CProjectionBorderVisual *))(*(_QWORD *)v18 + 16LL))(v18);
      return v8;
    }
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v18);
  }
  return 0LL;
}
