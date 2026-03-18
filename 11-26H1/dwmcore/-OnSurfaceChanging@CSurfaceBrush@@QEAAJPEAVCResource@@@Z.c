/*
 * XREFs of ?OnSurfaceChanging@CSurfaceBrush@@QEAAJPEAVCResource@@@Z @ 0x1802842FC
 * Callers:
 *     ?SetSurface@?$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJPEAVCResource@@@Z @ 0x18024EAD0 (-SetSurface@-$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindRenderStrategy@CSurfaceBrush@@SAPEBVCSurfaceRenderStrategy@1@PEBVCResource@@@Z @ 0x1801B105C (-FindRenderStrategy@CSurfaceBrush@@SAPEBVCSurfaceRenderStrategy@1@PEBVCResource@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSurfaceBrush::OnSurfaceChanging(CSurfaceBrush *this, struct CResource *a2)
{
  __int64 v4; // rdx
  void **RenderStrategy; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2
    && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 31LL)
    && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 108LL)
    && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 162LL)
    && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 94LL)
    && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 57LL) )
  {
    v4 = 129LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\surfacebrush.cpp",
      (const char *)0x88980403LL);
    return 2291663875LL;
  }
  if ( *((_BYTE *)this + 104) && a2 )
  {
    RenderStrategy = &off_1802DE1C0;
  }
  else
  {
    RenderStrategy = CSurfaceBrush::FindRenderStrategy(a2);
    if ( !RenderStrategy )
    {
      v4 = 143LL;
      goto LABEL_8;
    }
  }
  *((_QWORD *)this + 24) = RenderStrategy;
  return 0LL;
}
