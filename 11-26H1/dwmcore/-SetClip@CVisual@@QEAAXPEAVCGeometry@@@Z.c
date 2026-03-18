/*
 * XREFs of ?SetClip@CVisual@@QEAAXPEAVCGeometry@@@Z @ 0x18018BD20
 * Callers:
 *     ?ProcessSetClip@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCLIP@@@Z @ 0x18018BC68 (-ProcessSetClip@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCLIP@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180021C20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800264A4 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x18018BDBC (-OnTransformChanged@CVisual@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::SetClip(struct CResource **this, struct CGeometry *a2)
{
  char v4; // si

  if ( a2 != this[30] )
  {
    v4 = 0;
    if ( a2 )
      v4 = (*(__int64 (__fastcall **)(struct CGeometry *))(*(_QWORD *)a2 + 208LL))(a2);
    CResource::RegisterNotifier((CResource *)this, a2);
    CResource::UnRegisterNotifierInternal((CResource *)this, this[30]);
    this[30] = a2;
    if ( !v4 )
    {
      CVisual::PropagateFlags((__int64)this, 5u);
      CVisual::OnTransformChanged((CVisual *)this);
      CVisual::OnClipChanged((CVisual *)this);
    }
  }
}
