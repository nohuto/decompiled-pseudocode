/*
 * XREFs of ?RenderTargetDirty@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180257B50
 * Callers:
 *     <none>
 * Callees:
 *     ?RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180056BA0 (-RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil@@QEAA_NXZ @ 0x18021F71C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil@@QEAA_NX.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022C75C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RenderCursors@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1802579B0 (-RenderCursors@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?SendWindowedSwapChainMetadata@CCaptureRenderTarget@@IEAAJXZ @ 0x180257DEC (-SendWindowedSwapChainMetadata@CCaptureRenderTarget@@IEAAJXZ.c)
 *     ?TryUpdateWindowedSwapChainMetadata@CCaptureRenderTarget@@IEAAJPEA_N@Z @ 0x180257F84 (-TryUpdateWindowedSwapChainMetadata@CCaptureRenderTarget@@IEAAJPEA_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCaptureRenderTarget::RenderTargetDirty(
        CCaptureRenderTarget *this,
        struct CDrawingContext *a2,
        bool *a3)
{
  unsigned int v3; // edi
  __int64 v7; // rcx
  int updated; // eax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  bool v15; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  v15 = 0;
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45522024>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_ID45522024>::GetImpl'::`2'::impl) )
  {
    v7 = *((_QWORD *)this + 301);
    if ( v7 )
    {
      if ( *(_QWORD *)(v7 + 136) != *(_QWORD *)(v7 + 144) )
      {
        *a3 = 0;
LABEL_17:
        v11 = *(_QWORD *)this;
        *((_DWORD *)this + 664) = -1;
        (*(void (__fastcall **)(CCaptureRenderTarget *))(v11 + 272))(this);
        goto LABEL_18;
      }
    }
  }
  if ( *((_QWORD *)this + 328)
    && (updated = CCaptureRenderTarget::TryUpdateWindowedSwapChainMetadata(this, &v15), v3 = updated, updated < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x407u, 0LL);
  }
  else if ( *((_BYTE *)this + 2593) )
  {
    *a3 = 0;
  }
  else
  {
    v9 = COffScreenRenderTarget::RenderTargetDirty(this, a2, a3);
    v3 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x40Eu, 0LL);
    }
    else if ( *a3 )
    {
      v10 = CCaptureRenderTarget::RenderCursors(this, a2);
      v3 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x412u, 0LL);
    }
  }
  if ( !*a3 )
    goto LABEL_17;
LABEL_18:
  if ( v15 )
  {
    v12 = CCaptureRenderTarget::SendWindowedSwapChainMetadata(this);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1105LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\capturerendertarget.cpp",
        (const char *)(unsigned int)v12);
  }
  return v3;
}
