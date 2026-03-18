/*
 * XREFs of ?SetRoot@?$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@QEAAJPEAVCSceneNode@@@Z @ 0x18021CB34
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ?OnRootChanged@CSceneVisual@@QEAAJXZ @ 0x18021CB84 (-OnRootChanged@CSceneVisual@@QEAAJXZ.c)
 */

__int64 __fastcall CSceneVisualGeneratedT<CSceneVisual,CVisual>::SetRoot(CResource *this, struct CResource *a2)
{
  struct CResource *v4; // rdx

  v4 = (struct CResource *)*((_QWORD *)this + 84);
  if ( a2 != v4 )
  {
    CResource::UnRegisterNotifierInternal(this, v4);
    *((_QWORD *)this + 84) = a2;
    CResource::RegisterNotifier(this, a2);
    CSceneVisual::OnRootChanged(this);
  }
  return 0LL;
}
