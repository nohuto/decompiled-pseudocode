/*
 * XREFs of ?SetTransform@CVisual@@QEAAXPEAVCTransform3D@@@Z @ 0x1801B0288
 * Callers:
 *     ?ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORM@@@Z @ 0x1801B01D4 (-ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORM@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180021C20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180026744 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 */

void __fastcall CVisual::SetTransform(struct CResource **this, struct CTransform3D *a2)
{
  if ( a2 != this[29] )
  {
    CResource::RegisterNotifier((CResource *)this, a2);
    CResource::UnRegisterNotifierInternal((CResource *)this, this[29]);
    this[29] = a2;
    CVisual::PropagateFlags((__int64)this, 5u);
    CVisual::OnOuterTransformChanged((CVisual *)this);
  }
}
