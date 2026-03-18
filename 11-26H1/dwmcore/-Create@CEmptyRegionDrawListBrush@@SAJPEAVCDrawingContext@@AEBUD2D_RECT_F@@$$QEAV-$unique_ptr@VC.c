/*
 * XREFs of ?Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@PEAPEAV1@@Z @ 0x18009E138
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18003DDB4 (-GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x18009DB08 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 *     ?Alloc@CObjectCache@@QEAAPEAX_K@Z @ 0x18009E490 (-Alloc@CObjectCache@@QEAAPEAX_K@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCEmptyRegionDrawListBrush@@@Z @ 0x18009E880 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCEmptyRegionDrawListBrush@@@Z.c)
 *     ??R?$default_delete@VCEmptyRegionDrawListBrush@@@std@@QEBAXPEAVCEmptyRegionDrawListBrush@@@Z @ 0x1801B3C98 (--R-$default_delete@VCEmptyRegionDrawListBrush@@@std@@QEBAXPEAVCEmptyRegionDrawListBrush@@@Z.c)
 */

__int64 __fastcall CEmptyRegionDrawListBrush::Create(
        struct CEmptyRegionDrawListBrush *a1,
        struct D2D_RECT_F *a2,
        __int64 *a3,
        _QWORD *a4)
{
  CObjectCache *ObjectCache; // rax
  _QWORD *v8; // rax
  struct CDrawingContext *v9; // rdx
  _QWORD *v10; // rbx
  CEmptyRegionDrawListBrush *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // edi
  __int64 v16; // rcx

  ObjectCache = CThreadContext::GetObjectCache(a1);
  v8 = CObjectCache::Alloc(ObjectCache, 0xA0uLL);
  v10 = v8;
  if ( v8 )
  {
    v8[1] = 1065353216LL;
    *((_DWORD *)v8 + 4) = 0;
    v11 = (CEmptyRegionDrawListBrush *)v8;
    *(_QWORD *)((char *)v8 + 20) = 1065353216LL;
    *((_DWORD *)v8 + 7) = 0;
    *((_BYTE *)v8 + 52) = 0;
    *((_BYTE *)v8 + 64) = 0;
    *v8 = &CEmptyRegionDrawListBrush::`vftable';
    v12 = *a3;
    *a3 = 0LL;
    v10[9] = v12;
    v10[10] = 0LL;
    v10[11] = v10 + 12;
    *((_DWORD *)v10 + 24) = 0;
    v13 = CEmptyRegionDrawListBrush::Initialize(v11, v9, a2);
    v14 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x1Du, 0LL);
      std::default_delete<CEmptyRegionDrawListBrush>::operator()(v16, v10);
    }
    else
    {
      *a4 = v10;
    }
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x1Bu, 0LL);
  }
  return v14;
}
