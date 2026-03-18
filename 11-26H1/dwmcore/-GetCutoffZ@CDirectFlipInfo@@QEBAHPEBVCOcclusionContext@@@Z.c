/*
 * XREFs of ?GetCutoffZ@CDirectFlipInfo@@QEBAHPEBVCOcclusionContext@@@Z @ 0x180219988
 * Callers:
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800ED0CC (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180194650 (-RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?GetZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z @ 0x18008CC50 (-GetZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDirectFlipInfo::GetCutoffZ(CDirectFlipInfo *this, const struct COcclusionContext *a2)
{
  CVisual *v2; // rdi
  int v3; // ebx
  CVisual **v4; // rax

  if ( *((int *)this + 13) < 3 )
    return 0x7FFFFFFFLL;
  v2 = (CVisual *)*((_QWORD *)this + 1);
  v3 = *((_DWORD *)a2 + 274);
  v4 = (CVisual **)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 56LL))(*(_QWORD *)this);
  return CVisual::GetZ(v2, v4, v3);
}
