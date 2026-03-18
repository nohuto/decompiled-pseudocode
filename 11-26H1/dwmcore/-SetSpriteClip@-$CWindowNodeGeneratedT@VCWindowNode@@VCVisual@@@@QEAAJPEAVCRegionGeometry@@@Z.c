/*
 * XREFs of ?SetSpriteClip@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJPEAVCRegionGeometry@@@Z @ 0x1801BCB64
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18001EB60 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180021C20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 */

__int64 __fastcall CWindowNodeGeneratedT<CWindowNode,CVisual>::SetSpriteClip(CVisual *this, struct CResource *a2)
{
  struct CResource *v4; // rdx

  v4 = (struct CResource *)*((_QWORD *)this + 101);
  if ( a2 != v4 )
  {
    CResource::UnRegisterNotifierInternal(this, v4);
    *((_QWORD *)this + 101) = a2;
    CResource::RegisterNotifier(this, a2);
    CShapePtr::~CShapePtr((CVisual *)((char *)this + 880));
    CVisual::ClearContentTreeDataCaches(this);
    CVisual::PropagateFlags((__int64)this, 5u);
  }
  return 0LL;
}
