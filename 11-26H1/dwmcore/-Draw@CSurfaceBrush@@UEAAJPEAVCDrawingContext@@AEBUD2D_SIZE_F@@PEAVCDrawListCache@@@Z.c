/*
 * XREFs of ?Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18018E2D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSurfaceBrush::Draw(
        CSurfaceBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, CSurfaceBrush *, struct CDrawingContext *, const struct D2D_SIZE_F *, struct CDrawListCache *))(**((_QWORD **)this + 24) + 96LL))(
           *((_QWORD *)this + 24),
           this,
           a2,
           a3,
           a4);
}
