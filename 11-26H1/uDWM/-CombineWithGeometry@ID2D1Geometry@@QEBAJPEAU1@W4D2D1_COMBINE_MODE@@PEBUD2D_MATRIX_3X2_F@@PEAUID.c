/*
 * XREFs of ?CombineWithGeometry@ID2D1Geometry@@QEBAJPEAU1@W4D2D1_COMBINE_MODE@@PEBUD2D_MATRIX_3X2_F@@PEAUID2D1SimplifiedGeometrySink@@@Z @ 0x18006EC8C
 * Callers:
 *     ?CreateBorderSurface@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAPEAUICompositionSurface@Composition@UI@Windows@@@Z @ 0x18000E35C (-CreateBorderSurface@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ID2D1Geometry::CombineWithGeometry(
        ID2D1Geometry *this,
        struct ID2D1Geometry *a2,
        enum D2D1_COMBINE_MODE a3,
        const struct D2D_MATRIX_3X2_F *a4)
{
  return (*(__int64 (__fastcall **)(ID2D1Geometry *, struct ID2D1Geometry *, __int64))(*(_QWORD *)this + 88LL))(
           this,
           a2,
           3LL);
}
