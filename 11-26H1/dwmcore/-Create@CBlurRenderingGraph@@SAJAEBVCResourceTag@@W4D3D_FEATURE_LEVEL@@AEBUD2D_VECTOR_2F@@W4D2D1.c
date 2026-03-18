/*
 * XREFs of ?Create@CBlurRenderingGraph@@SAJAEBVCResourceTag@@W4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@W4D2D1_BORDER_MODE@@PEAPEAV1@@Z @ 0x18015B11C
 * Callers:
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEBUD2D_SIZE_F@@PEAU3@@Z @ 0x180038EE8 (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 *     ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVIBitmapRealization@@PEBUD2D_SIZE_F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIRenderTargetBitmap@@PEAV6@@Z @ 0x18015A6EC (-GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVIBitmapRe.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CBrushRenderingGraph@@IEAA@XZ @ 0x18015B360 (--0CBrushRenderingGraph@@IEAA@XZ.c)
 *     ?Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z @ 0x18015B51C (-Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBlurRenderingGraph::Create(
        const struct CResourceTag *a1,
        enum D3D_FEATURE_LEVEL a2,
        const struct D2D_VECTOR_2F *a3,
        enum D2D1_GAUSSIANBLUR_OPTIMIZATION a4,
        enum D2D1_BORDER_MODE a5,
        struct CBlurRenderingGraph **a6)
{
  CBrushRenderingGraph *v10; // rax
  struct CBlurRenderingGraph *v11; // rbx
  __int64 v12; // rcx
  __int128 v13; // xmm0
  int v14; // edi
  unsigned int v15; // eax
  struct CBlurRenderingGraph *v17; // [rsp+30h] [rbp-18h] BYREF
  int v18; // [rsp+38h] [rbp-10h]

  v10 = (CBrushRenderingGraph *)MIDL_user_allocate(0x638uLL);
  v11 = v10;
  if ( v10 )
  {
    CBrushRenderingGraph::CBrushRenderingGraph(v10);
    *(_QWORD *)(v12 + 216) = v12 + 240;
    *(_QWORD *)(v12 + 224) = v12 + 240;
    *(_QWORD *)(v12 + 232) = v12 + 496;
    *(_QWORD *)v12 = &CExternalEffectGraph::`vftable';
    *(_QWORD *)(v12 + 496) = v12 + 520;
    *(_QWORD *)(v12 + 504) = v12 + 520;
    *(_QWORD *)(v12 + 512) = v12 + 1544;
    v13 = *(_OWORD *)a1;
    *(_QWORD *)v12 = &CBlurRenderingGraph::`vftable';
    *(_OWORD *)(v12 + 1544) = v13;
    *(_DWORD *)(v12 + 1580) = a5;
    *(struct D2D_VECTOR_2F *)(v12 + 1568) = *a3;
    *(_QWORD *)(v12 + 1560) = 0LL;
    *(_DWORD *)(v12 + 1576) = a4;
    (**(void (__fastcall ***)(__int64))v12)(v12);
    v17 = v11;
    v18 = 0;
    v14 = CBlurRenderingGraphBuilder::Build((CBlurRenderingGraphBuilder *)&v17, a2);
    if ( v14 >= 0 )
    {
      *a6 = v11;
      return (unsigned int)v14;
    }
    v15 = 117;
  }
  else
  {
    v11 = 0LL;
    v14 = -2147024882;
    v15 = 113;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, v15, 0LL);
  if ( v11 )
    (*(void (__fastcall **)(struct CBlurRenderingGraph *))(*(_QWORD *)v11 + 8LL))(v11);
  return (unsigned int)v14;
}
