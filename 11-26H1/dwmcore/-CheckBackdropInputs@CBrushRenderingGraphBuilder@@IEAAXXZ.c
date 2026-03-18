/*
 * XREFs of ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ @ 0x18015D14C
 * Callers:
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z @ 0x18015B3D0 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z.c)
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18015D804 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composit.c)
 * Callees:
 *     ?GetBackdropBrushNoRef@CRenderingTechnique@@QEBAPEBVCBackdropBrush@@XZ @ 0x18015D24C (-GetBackdropBrushNoRef@CRenderingTechnique@@QEBAPEBVCBackdropBrush@@XZ.c)
 *     ?HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x18015D490 (-HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?HasBlurredWallpaperBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x18015D560 (-HasBlurredWallpaperBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?IsIntermediateUsedInBlur@CBrushRenderingGraphBuilder@@AEBA_NI@Z @ 0x18015D6CC (-IsIntermediateUsedInBlur@CBrushRenderingGraphBuilder@@AEBA_NI@Z.c)
 */

void __fastcall CBrushRenderingGraphBuilder::CheckBackdropInputs(CBrushRenderingGraphBuilder *this)
{
  bool IsIntermediateUsedInBlur; // r14
  bool v3; // cl
  bool HasWindowBackdropInput; // bp
  const struct CBackdropBrush *v5; // rdi
  unsigned int v6; // esi
  __int64 v7; // r15
  __int64 v8; // r12
  CRenderingTechnique *v9; // r13
  bool HasBlurredWallpaperBackdropInput; // [rsp+60h] [rbp+8h]
  unsigned int v11; // [rsp+68h] [rbp+10h]
  const struct CBackdropBrush *BackdropBrushNoRef; // [rsp+70h] [rbp+18h]

  IsIntermediateUsedInBlur = 0;
  v3 = 0;
  HasWindowBackdropInput = 0;
  v5 = 0LL;
  HasBlurredWallpaperBackdropInput = 0;
  v6 = 0;
  v7 = *(_QWORD *)this;
  v11 = *(_DWORD *)(*(_QWORD *)this + 168LL);
  if ( v11 )
  {
    v8 = 0LL;
    do
    {
      v9 = *(CRenderingTechnique **)(v8 + *(_QWORD *)(v7 + 144));
      BackdropBrushNoRef = CRenderingTechnique::GetBackdropBrushNoRef(v9);
      if ( !HasBlurredWallpaperBackdropInput )
        HasBlurredWallpaperBackdropInput = CRenderingTechnique::HasBlurredWallpaperBackdropInput(v9);
      if ( !HasWindowBackdropInput )
        HasWindowBackdropInput = CRenderingTechnique::HasWindowBackdropInput(v9);
      if ( !v5 && BackdropBrushNoRef )
        v5 = BackdropBrushNoRef;
      if ( (IsIntermediateUsedInBlur
         || BackdropBrushNoRef
         && (IsIntermediateUsedInBlur = CBrushRenderingGraphBuilder::IsIntermediateUsedInBlur(this, v6)))
        && HasWindowBackdropInput )
      {
        break;
      }
      ++v6;
      v8 += 8LL;
    }
    while ( v6 < v11 );
    v3 = HasBlurredWallpaperBackdropInput;
  }
  *(_BYTE *)(*(_QWORD *)this + 196LL) = IsIntermediateUsedInBlur;
  *(_BYTE *)(*(_QWORD *)this + 197LL) = v3;
  *(_BYTE *)(*(_QWORD *)this + 198LL) = HasWindowBackdropInput;
  *(_QWORD *)(*(_QWORD *)this + 208LL) = v5;
}
