/*
 * XREFs of ?GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x1801251D0
 * Callers:
 *     ?CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x180122DC0 (-CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@.c)
 *     ?CreateScribble@CGenericInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x1801246F0 (-CreateScribble@CGenericInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComp.c)
 *     ?IsSuperWetCompatible@CGenericInk@@UEAA_NPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@_N@Z @ 0x180124AF0 (-IsSuperWetCompatible@CGenericInk@@UEAA_NPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@_N@Z.c)
 *     ?EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ @ 0x1801D13B8 (-EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ.c)
 *     ?SetContextMsgRoutingInfo@CGenericInk@@AEAAJPEAVCD3DDevice@@@Z @ 0x1801E0340 (-SetContextMsgRoutingInfo@CGenericInk@@AEAAJPEAVCD3DDevice@@@Z.c)
 *     ?CreateScribble@CDelegatedInkCanvas@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x18026CAB0 (-CreateScribble@CDelegatedInkCanvas@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAP.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?LazyInitDirectInkFactory@CD2DContext@@AEAAJXZ @ 0x180125250 (-LazyInitDirectInkFactory@CD2DContext@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::GetDirectInkFactory(
        CD2DContext *this,
        struct IDCompositionDirectInkFactoryPartner **a2)
{
  int inited; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx

  inited = CD2DContext::LazyInitDirectInkFactory(this);
  v5 = inited;
  if ( inited < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, inited, 0x101u, 0LL);
  }
  else
  {
    v6 = *((_QWORD *)this + 39);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v5 = 0;
    *a2 = (struct IDCompositionDirectInkFactoryPartner *)*((_QWORD *)this + 39);
  }
  return v5;
}
