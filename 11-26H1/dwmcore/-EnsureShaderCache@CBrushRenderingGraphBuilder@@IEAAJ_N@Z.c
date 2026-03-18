/*
 * XREFs of ?EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJ_N@Z @ 0x18015A544
 * Callers:
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z @ 0x18015B3D0 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z.c)
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18015D804 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composit.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetUniqueShaderCache@CRenderingTechniqueFragment@@QEBAPEAVCShaderCache@@XZ @ 0x18015A698 (-GetUniqueShaderCache@CRenderingTechniqueFragment@@QEBAPEAVCShaderCache@@XZ.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::EnsureShaderCache(CBrushRenderingGraphBuilder *this, char a2)
{
  __int64 v2; // rsi
  unsigned int v3; // edi
  __int64 v6; // r14
  struct CShaderCache *UniqueShaderCache; // rax
  __int64 v8; // r11
  struct CShaderCache *v9; // r10
  _QWORD *v11; // rax
  _QWORD *v12; // rcx

  v2 = *(_QWORD *)this;
  v3 = 0;
  v6 = *(_QWORD *)(*(_QWORD *)this + 144LL);
  if ( a2 )
  {
    if ( *((_DWORD *)this + 2) > 2u )
      goto LABEL_8;
  }
  else if ( *((_DWORD *)this + 2) != 1 )
  {
    goto LABEL_8;
  }
  UniqueShaderCache = CRenderingTechniqueFragment::GetUniqueShaderCache(*(CRenderingTechniqueFragment **)(*(_QWORD *)(v6 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 168LL) - 1)) + 8LL));
  v9 = UniqueShaderCache;
  if ( a2 )
  {
    if ( UniqueShaderCache )
    {
      if ( !*(_QWORD *)(v8 + 8) )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v8 + 32) + 8LL) )
          *(_DWORD *)(v2 + 192) = 0x4000;
        else
          *(_DWORD *)(v2 + 192) = 0x2000;
      }
      goto LABEL_5;
    }
    v9 = CRenderingTechniqueFragment::GetUniqueShaderCache(*(CRenderingTechniqueFragment **)(*(_QWORD *)v6 + 8LL));
  }
  if ( v9 )
  {
LABEL_5:
    *(_QWORD *)(*(_QWORD *)this + 184LL) = v9;
    *(_BYTE *)(*(_QWORD *)this + 199LL) = 0;
    return v3;
  }
LABEL_8:
  v11 = MIDL_user_allocate(0x20uLL);
  v12 = v11;
  if ( v11 )
  {
    *v11 = 0LL;
    v11[1] = 0LL;
    *((_DWORD *)v11 + 4) = 0;
    v11[3] = v11;
  }
  else
  {
    v12 = 0LL;
  }
  *(_QWORD *)(*(_QWORD *)this + 184LL) = v12;
  if ( *(_QWORD *)(*(_QWORD *)this + 184LL) )
  {
    *(_BYTE *)(*(_QWORD *)this + 199LL) = 1;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2B8u, 0LL);
  }
  return v3;
}
