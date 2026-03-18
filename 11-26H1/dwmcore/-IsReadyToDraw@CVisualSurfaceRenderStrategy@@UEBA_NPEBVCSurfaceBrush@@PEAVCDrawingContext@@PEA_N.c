/*
 * XREFs of ?IsReadyToDraw@CVisualSurfaceRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAVCDrawingContext@@PEA_N@Z @ 0x18018D630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CVisualSurfaceRenderStrategy::IsReadyToDraw(
        CVisualSurfaceRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        struct CDrawingContext *a3,
        bool *a4)
{
  bool result; // al
  __int64 v5; // rcx

  result = 0;
  *a4 = 0;
  v5 = *((_QWORD *)a2 + 23);
  if ( *(_QWORD *)(v5 + 72) )
  {
    if ( *(float *)(v5 + 184) > 0.0 )
      return *(float *)(v5 + 188) > 0.0;
  }
  return result;
}
