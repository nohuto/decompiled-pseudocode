/*
 * XREFs of ?Initialize@CEffectIntermediateProducer@@QEAAXPEAVIBitmapRealization@@@Z @ 0x180039FF0
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18001B858 (-RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUIntermediateConfigurationInputs@1@AEBV?$span@$$CBUEffectInput@@$0?0@gsl@@AEBV?$span@UEffectInput@@$0?0@6@@Z @ 0x18001C13C (-RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCD.c)
 * Callees:
 *     ??$emplace_back@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@?$vector_facade@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@Z @ 0x18009C238 (--$emplace_back@V-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_delete@VCCach.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CEffectIntermediateProducer::Initialize(
        CEffectIntermediateProducer *this,
        __int64 (__fastcall ***a2)(struct IBitmapRealization *, GUID *, __int64 *))
{
  __int64 (__fastcall **v2)(struct IBitmapRealization *, GUID *, __int64 *); // rax
  int v4; // eax
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF
  _QWORD *v10; // [rsp+40h] [rbp+18h] BYREF

  v2 = *a2;
  v9 = 0LL;
  v4 = (*v2)((struct IBitmapRealization *)a2, &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3, &v9);
  if ( v4 < 0 )
    ModuleFailFastForHRESULT(v4, retaddr);
  v5 = operator new(8uLL);
  v6 = v5;
  if ( v5 )
  {
    v7 = v9;
    v9 = 0LL;
    *v5 = v7;
  }
  else
  {
    v6 = 0LL;
  }
  *((_QWORD *)this + 3) = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)(*v6 + 8LL) + 32LL))(
                                       *v6 + 8LL,
                                       &v10);
  v10 = v6;
  detail::vector_facade<std::unique_ptr<CCachedImageProducer::CCachedRealization>,detail::buffer_impl<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2,1,detail::liberal_expansion_policy>>::emplace_back<std::unique_ptr<CCachedImageProducer::CCachedRealization>>(
    (char *)this + 32,
    &v10);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
}
