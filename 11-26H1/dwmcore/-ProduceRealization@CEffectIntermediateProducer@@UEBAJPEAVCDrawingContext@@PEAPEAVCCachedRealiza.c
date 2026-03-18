/*
 * XREFs of ?ProduceRealization@CEffectIntermediateProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1801D2C80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x1800105B0 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18001B620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@QEAA@XZ @ 0x18009C208 (--1-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_delete@VCCachedRealization@.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?RenderSubgraphToIntermediate@CBrushRenderingGraph@@QEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBUD2D_VECTOR_2F@@2PEAUEffectInput@@@Z @ 0x1801D2E14 (-RenderSubgraphToIntermediate@CBrushRenderingGraph@@QEBAJPEBVCRenderingTechnique@@PEAVCDrawingCo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEffectIntermediateProducer::ProduceRealization(
        CEffectIntermediateProducer *this,
        struct CDrawingContext *a2,
        struct CCachedImageProducer::CCachedRealization **a3)
{
  struct CVisual *CurrentVisual; // rax
  struct CDrawingContext *v5; // rdx
  __int64 v6; // r9
  unsigned int v7; // ebx
  __int64 v8; // rax
  struct CDrawingContext *v9; // r8
  const struct CRenderingTechnique *v10; // rdx
  CBrushRenderingGraph *v11; // rcx
  int v12; // eax
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, GUID *, __int64 *); // rbx
  int v15; // eax
  struct CCachedImageProducer::CCachedRealization *v16; // rax
  __int64 v17; // rcx
  __int64 *v19; // [rsp+40h] [rbp-39h] BYREF
  __int128 v20; // [rsp+50h] [rbp-29h] BYREF
  char v21; // [rsp+60h] [rbp-19h]
  __int128 v22; // [rsp+80h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  __int64 v24; // [rsp+E0h] [rbp+67h] BYREF
  struct D2D_SIZE_F v25; // [rsp+F8h] [rbp+7Fh] BYREF

  CurrentVisual = CDrawingContext::GetCurrentVisual(a2);
  if ( CurrentVisual == *(struct CVisual **)(v6 + 80) )
  {
    v8 = *(_QWORD *)(v6 + 24);
    v9 = v5;
    v10 = *(const struct CRenderingTechnique **)(v6 + 72);
    v21 = 0;
    v20 = 0LL;
    v25.width = (float)(int)v8;
    v25.height = (float)SHIDWORD(v8);
    v11 = *(CBrushRenderingGraph **)v10;
    v22 = 0LL;
    v12 = CBrushRenderingGraph::RenderSubgraphToIntermediate(
            v11,
            v10,
            v9,
            (const struct D2D_SIZE_F *)(v6 + 88),
            (const struct D2D_VECTOR_2F *)(v6 + 96),
            &v25,
            (struct EffectInput *)&v20);
    v7 = v12;
    if ( v12 >= 0 )
    {
      v13 = *((_QWORD *)&v20 + 1);
      v24 = 0LL;
      v14 = (__int64 (__fastcall *)(__int64, GUID *, __int64 *))***((_QWORD ***)&v20 + 1);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v24);
      v15 = v14(v13, &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3, &v24);
      v7 = v15;
      if ( v15 >= 0 )
      {
        v16 = (struct CCachedImageProducer::CCachedRealization *)operator new(8uLL);
        if ( v16 )
        {
          v17 = v24;
          v24 = 0LL;
          *(_QWORD *)v16 = v17;
        }
        v19 = 0LL;
        *a3 = v16;
        std::unique_ptr<CCachedImageProducer::CCachedRealization>::~unique_ptr<CCachedImageProducer::CCachedRealization>(&v19);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v24);
        v7 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x58,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\effectintermediateproducer.cpp",
          (const char *)(unsigned int)v15);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v24);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x55,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\effectintermediateproducer.cpp",
        (const char *)(unsigned int)v12);
    }
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v20);
  }
  else
  {
    v7 = -2003292412;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\effectintermediateproducer.cpp",
      (const char *)0x88982F04LL);
  }
  return v7;
}
