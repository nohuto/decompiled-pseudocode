/*
 * XREFs of ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18005E960
 * Callers:
 *     ?ApplyState@CTreeEffectLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18005E350 (-ApplyState@CTreeEffectLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18024FD00 (-ApplyState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CSuperSampleLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1802505C0 (-ApplyState@CSuperSampleLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1802509A0 (-ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18005EA58 (-PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x180063680 (-RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800C9380 (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderPerf_ApplyLayer@CLayer@@QEBAXXZ @ 0x1800CA030 (-RenderPerf_ApplyLayer@CLayer@@QEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CExternalLayer::ApplyState(CExternalLayer *this, struct CDrawingContext *a2)
{
  __int64 v2; // rax
  int v5; // edi
  unsigned int v7; // eax
  __int64 v8; // rax
  bool v9; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  v9 = 0;
  v5 = (*(__int64 (__fastcall **)(CExternalLayer *, struct CDrawingContext *, char *))(v2 + 72))(
         this,
         a2,
         (char *)this + 48);
  if ( v5 < 0 )
  {
    v7 = 179;
    goto LABEL_9;
  }
  v5 = CDrawingContext::PushDeviceTransform(a2, (CExternalLayer *)((char *)this + 48), &v9);
  if ( v5 < 0 )
  {
    v7 = 183;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, v7, 0LL);
    CExternalLayer::RestoreState(this, a2);
    return (unsigned int)v5;
  }
  *((_BYTE *)this + 32) = 1;
  v5 = CExternalLayer::ApplyRenderTarget(this, a2);
  if ( v5 < 0 )
  {
    v7 = 187;
    goto LABEL_9;
  }
  if ( !v9 || !(*(unsigned __int8 (__fastcall **)(CExternalLayer *))(*(_QWORD *)this + 80LL))(this) )
  {
    v8 = *((_QWORD *)a2 + 995);
    *((_QWORD *)a2 + 995) = 0LL;
    *((_QWORD *)this + 5) = v8;
  }
  CLayer::RenderPerf_ApplyLayer(this);
  return (unsigned int)v5;
}
