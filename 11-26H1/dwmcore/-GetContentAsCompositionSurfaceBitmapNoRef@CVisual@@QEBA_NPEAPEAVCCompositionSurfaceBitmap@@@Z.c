/*
 * XREFs of ?GetContentAsCompositionSurfaceBitmapNoRef@CVisual@@QEBA_NPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x180260B8C
 * Callers:
 *     ?GetSubjectCompositionSurfaceBitmap@CCaptureRenderTarget@@IEAAPEAVCCompositionSurfaceBitmap@@XZ @ 0x18021C314 (-GetSubjectCompositionSurfaceBitmap@CCaptureRenderTarget@@IEAAPEAVCCompositionSurfaceBitmap@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CVisual::GetContentAsCompositionSurfaceBitmapNoRef(
        CVisual *this,
        struct CCompositionSurfaceBitmap **a2)
{
  char v3; // bl
  __int64 v4; // rcx

  v3 = 0;
  v4 = *((_QWORD *)this + 31);
  if ( v4 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 64LL))(v4, 31LL) )
  {
    v3 = 1;
    *a2 = (struct CCompositionSurfaceBitmap *)*((_QWORD *)this + 31);
  }
  return v3;
}
