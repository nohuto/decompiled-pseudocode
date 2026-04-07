/*
 * XREFs of ?Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z @ 0x180015204
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180014634 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180017040 (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x18006459C (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A477C (-_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CPushTransformInstruction@@AEAAJPEAVCBaseTransformProxy@@@Z @ 0x180013FC4 (-Initialize@CPushTransformInstruction@@AEAAJPEAVCBaseTransformProxy@@@Z.c)
 *     ??0CPushTransformInstruction@@AEAA@XZ @ 0x1800152B8 (--0CPushTransformInstruction@@AEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CPushTransformInstruction::Create(
        struct CBaseTransformProxy *a1,
        struct CPushTransformInstruction **a2)
{
  CPushTransformInstruction *v4; // rax
  CPushTransformInstruction *v5; // rax
  CBaseObject *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx

  v4 = (CPushTransformInstruction *)DefaultHeap::AllocClear(0x18uLL);
  if ( v4 && (v5 = CPushTransformInstruction::CPushTransformInstruction(v4), (v6 = v5) != 0LL) )
  {
    v7 = CPushTransformInstruction::Initialize(v5, a1);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x2Eu, 0LL);
      CBaseObject::Release(v6);
    }
    else
    {
      *a2 = v6;
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x2Cu, 0LL);
  }
  return v8;
}
