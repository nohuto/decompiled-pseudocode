/*
 * XREFs of ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x180019538
 * Callers:
 *     ??$move@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@0@0V12@@Z @ 0x180017180 (--$move@V-$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V-$checked_array_iterator@P.c)
 *     ?UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@PEBXAEBUEffectInput@@@Z @ 0x1800189E4 (-UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@PEBXAEBUEffectInput@@@Z.c)
 *     ?clear_region@?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180019E90 (-clear_region@-$vector_facade@UEffectInput@@V-$buffer_impl@UEffectInput@@$03$00Vliberal_expansio.c)
 *     ?GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@@Z @ 0x18001AAD4 (-GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV-$vector.c)
 *     ?LookupCachedBlur@CBlurredBackdropCache@@QEBA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@PEAUEffectInput@@@Z @ 0x1801AC2D4 (-LookupCachedBlur@CBlurredBackdropCache@@QEBA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@P.c)
 *     ?ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1801ADF20 (-ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRea.c)
 *     ?RenderSubgraphToIntermediate@CBrushRenderingGraph@@QEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBUD2D_VECTOR_2F@@2PEAUEffectInput@@@Z @ 0x1801D2E14 (-RenderSubgraphToIntermediate@CBrushRenderingGraph@@QEBAJPEBVCRenderingTechnique@@PEAVCDrawingCo.c)
 *     ??$move_backward@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@0@0V12@@Z @ 0x180288B94 (--$move_backward@V-$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V-$checked_array_i.c)
 *     ??$move_backward@V?$move_iterator@PEAUEffectInput@@@std@@V?$checked_array_iterator@PEAUEffectInput@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUEffectInput@@@stdext@@V?$move_iterator@PEAUEffectInput@@@0@0V12@@Z @ 0x1802B73FC (--$move_backward@V-$move_iterator@PEAUEffectInput@@@std@@V-$checked_array_iterator@PEAUEffectInp.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall EffectInput::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rsi
  __int64 v4; // rcx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 *result; // rax

  v2 = *a1;
  v4 = *a2;
  *a1 = *a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v6 = a2[1];
  v7 = a1[1];
  a1[1] = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  *((_BYTE *)a1 + 16) = *((_BYTE *)a2 + 16);
  *(_OWORD *)(a1 + 3) = *(_OWORD *)(a2 + 3);
  *((_DWORD *)a1 + 10) = *((_DWORD *)a2 + 10);
  *((_BYTE *)a1 + 44) = *((_BYTE *)a2 + 44);
  *((_BYTE *)a1 + 45) = *((_BYTE *)a2 + 45);
  result = a1;
  *((_OWORD *)a1 + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)a1 + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)a1 + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)a1 + 6) = *((_OWORD *)a2 + 6);
  *((_OWORD *)a1 + 3) = *((_OWORD *)a2 + 3);
  return result;
}
