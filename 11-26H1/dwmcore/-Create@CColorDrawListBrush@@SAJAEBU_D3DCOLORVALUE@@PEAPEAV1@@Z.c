/*
 * XREFs of ?Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x18009D544
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18003DDB4 (-GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@IPEAVCDrawListCache@@@Z @ 0x18003E488 (-UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEff.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCColorDrawListBrush@@@Z @ 0x18009D5E4 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCColorDrawListBrush@@@Z.c)
 *     ?Alloc@CObjectCache@@QEAAPEAX_K@Z @ 0x18009E490 (-Alloc@CObjectCache@@QEAAPEAX_K@Z.c)
 */

__int64 __fastcall CColorDrawListBrush::Create(struct _D3DCOLORVALUE *a1, struct CColorDrawListBrush **a2)
{
  unsigned int v4; // ebx
  CObjectCache *ObjectCache; // rax
  char *v6; // rax

  v4 = 0;
  ObjectCache = CThreadContext::GetObjectCache((struct CColorDrawListBrush *)a1);
  v6 = (char *)CObjectCache::Alloc(ObjectCache, 0x48uLL);
  if ( v6 )
  {
    *((_QWORD *)v6 + 1) = 1065353216LL;
    *((_DWORD *)v6 + 4) = 0;
    *(_QWORD *)(v6 + 20) = 1065353216LL;
    *((_DWORD *)v6 + 7) = 0;
    v6[52] = 0;
    *(_QWORD *)v6 = &CColorDrawListBrush::`vftable';
    *(struct _D3DCOLORVALUE *)(v6 + 56) = *(struct _D3DCOLORVALUE *)&a1->r;
    *a2 = (struct CColorDrawListBrush *)v6;
  }
  else
  {
    *a2 = 0LL;
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x29u, 0LL);
  }
  return v4;
}
