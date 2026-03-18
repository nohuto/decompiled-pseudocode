/*
 * XREFs of ?GetSurfaceTransform@CBrushRenderingGraph@@IEBAPEBUD2D_MATRIX_3X2_F@@I@Z @ 0x18015AEE8
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18003DDB4 (-GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180036DA0 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ?CheckIfDisposed@CBrushRenderingGraph@@IEBAXXZ @ 0x18015AF54 (-CheckIfDisposed@CBrushRenderingGraph@@IEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

const struct D2D_MATRIX_3X2_F *__fastcall CBrushRenderingGraph::GetSurfaceTransform(
        CBrushRenderingGraph *this,
        unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // r8
  __int64 v5; // rsi
  __int64 v6; // rcx
  D2D1::Matrix3x2F *v8; // rax
  __int64 v9; // rcx

  v2 = a2;
  CBrushRenderingGraph::CheckIfDisposed(this);
  v4 = *((_QWORD *)this + 2);
  v5 = 0LL;
  v6 = *(_QWORD *)(v4 + 24 * v2 + 8);
  if ( v6 )
  {
    v8 = (D2D1::Matrix3x2F *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 24LL))(
                               v6,
                               *(unsigned int *)(v4 + 24 * v2 + 16));
    if ( D2D1::Matrix3x2F::IsIdentity(v8) )
      return 0LL;
    return (const struct D2D_MATRIX_3X2_F *)v9;
  }
  return (const struct D2D_MATRIX_3X2_F *)v5;
}
