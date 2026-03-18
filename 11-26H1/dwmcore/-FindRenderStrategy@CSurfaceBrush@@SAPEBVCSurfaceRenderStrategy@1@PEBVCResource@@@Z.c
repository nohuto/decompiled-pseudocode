/*
 * XREFs of ?FindRenderStrategy@CSurfaceBrush@@SAPEBVCSurfaceRenderStrategy@1@PEBVCResource@@@Z @ 0x1801B105C
 * Callers:
 *     ?SetSurfaceInternal@CSurfaceBrush@@QEAAJPEAVCResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18020FE5C (-SetSurfaceInternal@CSurfaceBrush@@QEAAJPEAVCResource@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?OnSurfaceChanging@CSurfaceBrush@@QEAAJPEAVCResource@@@Z @ 0x1802842FC (-OnSurfaceChanging@CSurfaceBrush@@QEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void **__fastcall CSurfaceBrush::FindRenderStrategy(const struct CResource *a1)
{
  if ( a1 && (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 108LL) )
    return off_1802DE1A0;
  else
    return (void **)CSurfaceBrush::FindCommonRenderStrategy(a1);
}
