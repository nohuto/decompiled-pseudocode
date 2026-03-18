/*
 * XREFs of ?IsReadyToDraw@CPrimitiveGroupRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAVCDrawingContext@@PEA_N@Z @ 0x180194EC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CPrimitiveGroupRenderStrategy::IsReadyToDraw(
        CPrimitiveGroupRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        struct CDrawingContext *a3,
        bool *a4)
{
  *a4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 23) + 224LL))(*((_QWORD *)a2 + 23));
  return 1;
}
