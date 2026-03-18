/*
 * XREFs of ?GenerateDrawList@CCompositionDynamicTexture@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18026A7D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionDynamicTexture::GenerateDrawList(
        CCompositionDynamicTexture *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 9);
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *, const struct D2D_SIZE_F *, struct CDrawListCache *))(*(_QWORD *)v4 + 256LL))(
             v4,
             a2,
             a3,
             a4);
  else
    return 0LL;
}
