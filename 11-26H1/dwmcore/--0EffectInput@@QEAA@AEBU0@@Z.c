/*
 * XREFs of ??0EffectInput@@QEAA@AEBU0@@Z @ 0x180019FEC
 * Callers:
 *     ?reserve_region@?$vector_facade@UCachedBlur@CBlurredBackdropCache@@V?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUCachedBlur@CBlurredBackdropCache@@_K0@Z @ 0x180017B84 (-reserve_region@-$vector_facade@UCachedBlur@CBlurredBackdropCache@@V-$buffer_impl@UCachedBlur@CB.c)
 *     ?UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@PEBXAEBUEffectInput@@@Z @ 0x1800189E4 (-UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@PEBXAEBUEffectInput@@@Z.c)
 *     ??$_Uninitialized_move@PEAUEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@YAPEAUEffectInput@@QEAU1@0PEAU1@AEAV?$allocator@UEffectInput@@@0@@Z @ 0x180018AA4 (--$_Uninitialized_move@PEAUEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@YAPEAUEffectInput.c)
 *     ??$emplace_back@PEAVCBackdropVisualImage@@PEBXUEffectInput@@@?$vector_facade@UCachedBlur@CBlurredBackdropCache@@V?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVCBackdropVisualImage@@PEBXUEffectInput@@@Z @ 0x180018AF4 (--$emplace_back@PEAVCBackdropVisualImage@@PEBXUEffectInput@@@-$vector_facade@UCachedBlur@CBlurre.c)
 *     ?SetInputSurface@CGraphRenderingContext@CExternalEffectGraph@@QEAAXAEBUEffectInput@@@Z @ 0x180019CA4 (-SetInputSurface@CGraphRenderingContext@CExternalEffectGraph@@QEAAXAEBUEffectInput@@@Z.c)
 *     ?reserve_region@?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUEffectInput@@_K0@Z @ 0x18001A0DC (-reserve_region@-$vector_facade@UEffectInput@@V-$buffer_impl@UEffectInput@@$03$00Vliberal_expans.c)
 *     ?MakeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIAEBVMatrix3x2F@D2D1@@@Z @ 0x18001A314 (-MakeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIAEBVMatrix3x2F@D2D1@@@Z.c)
 *     ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVIBitmapRealization@@PEBUD2D_SIZE_F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIRenderTargetBitmap@@PEAV6@@Z @ 0x18015A6EC (-GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVIBitmapRe.c)
 *     ??$_Uninitialized_copy@PEAUEffectInput@@PEAU1@V?$allocator@UEffectInput@@@std@@@std@@YAPEAUEffectInput@@PEAU1@00AEAV?$allocator@UEffectInput@@@0@@Z @ 0x1801B356C (--$_Uninitialized_copy@PEAUEffectInput@@PEAU1@V-$allocator@UEffectInput@@@std@@@std@@YAPEAUEffec.c)
 *     ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@PEAUCachedBlur@CBlurredBackdropCache@@@std@@YAPEAUCachedBlur@CBlurredBackdropCache@@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@0@V30@PEAU12@@Z @ 0x180212DA0 (--$_Uninitialized_move_unchecked@V-$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@PE.c)
 *     ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAUEffectInput@@@std@@PEAUEffectInput@@@std@@YAPEAUEffectInput@@V?$move_iterator@PEAUEffectInput@@@0@V20@PEAU1@@Z @ 0x1802B73B0 (--$_Uninitialized_move_unchecked@V-$move_iterator@PEAUEffectInput@@@std@@PEAUEffectInput@@@std@@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

EffectInput *__fastcall EffectInput::EffectInput(EffectInput *this, const struct EffectInput *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  char v6; // cl

  v4 = *(_QWORD *)a2;
  *(_QWORD *)this = *(_QWORD *)a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *((_QWORD *)a2 + 1);
  *((_QWORD *)this + 1) = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  *((_BYTE *)this + 16) = *((_BYTE *)a2 + 16);
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)((char *)a2 + 24);
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 10);
  v6 = *((_BYTE *)a2 + 44);
  *((_BYTE *)this + 44) = v6;
  *((_BYTE *)this + 45) = *((_BYTE *)a2 + 45);
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
  if ( v6 )
  {
    *((_OWORD *)this + 4) = *((_OWORD *)a2 + 4);
    *((_OWORD *)this + 5) = *((_OWORD *)a2 + 5);
    *((_OWORD *)this + 6) = *((_OWORD *)a2 + 6);
  }
  return this;
}
