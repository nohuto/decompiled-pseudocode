/*
 * XREFs of ?ConfigureBrushDefaults@CSurfaceBrush@@SAJPEAUICompositionSurfaceBrush@Composition@UI@Windows@@@Z @ 0x18009B328
 * Callers:
 *     ?EnsureBrush@CVisualBrush@@AEAAJXZ @ 0x18009B3D0 (-EnsureBrush@CVisualBrush@@AEAAJXZ.c)
 *     ?Reset@CBitmapBrush@@QEAAJPEAVCBitmapSource@@@Z @ 0x18009B69C (-Reset@CBitmapBrush@@QEAAJPEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSurfaceBrush::ConfigureBrushDefaults(struct Windows::UI::Composition::ICompositionSurfaceBrush *a1)
{
  int v2; // edi
  __int64 v3; // rdx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ICompositionSurfaceBrush *, _QWORD))(*(_QWORD *)a1 + 88LL))(
         a1,
         0LL);
  if ( v2 < 0 )
  {
    v3 = 20LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"clientcore\\windows\\dwm\\udwm\\brushes.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ICompositionSurfaceBrush *))(*(_QWORD *)a1 + 72LL))(a1);
  if ( v2 < 0 )
  {
    v3 = 21LL;
    goto LABEL_3;
  }
  v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ICompositionSurfaceBrush *))(*(_QWORD *)a1 + 120LL))(a1);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x16,
    (int)"clientcore\\windows\\dwm\\udwm\\brushes.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
