/*
 * XREFs of ?SetEffect@CVisual@@IEAAXPEAVCEffect@@@Z @ 0x1800AFCE8
 * Callers:
 *     ?ProcessSetEffect@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEFFECT@@@Z @ 0x1800AFC74 (-ProcessSetEffect@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEFFECT@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180021C20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ?SetEffectInternal@CVisual@@QEAAXPEAVCEffect@@@Z @ 0x1800AE310 (-SetEffectInternal@CVisual@@QEAAXPEAVCEffect@@@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x1800AFD90 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x1800AFDF0 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x18018BC24 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 */

void __fastcall CVisual::SetEffect(CVisual *this, struct CEffect *a2)
{
  struct CResource *EffectInternal; // rbp
  struct CTransform3D *Transform3DEffectNoRef; // rbx
  bool v6; // bl

  EffectInternal = CVisual::GetEffectInternal(this);
  if ( a2 != EffectInternal )
  {
    Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef(this);
    CResource::RegisterNotifier(this, a2);
    CResource::UnRegisterNotifierInternal(this, EffectInternal);
    CVisual::SetEffectInternal(this, a2);
    v6 = Transform3DEffectNoRef != 0LL;
    if ( CVisual::GetTransform3DEffectNoRef(this) )
      v6 = 1;
    CVisual::PropagateFlags((__int64)this, 5u);
    if ( v6 )
      CVisual::OnInnerTransformChanged(this);
  }
}
