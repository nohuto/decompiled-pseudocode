/*
 * XREFs of ?SetFlipExSurfaceClip@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJPEAVCGeometry@@@Z @ 0x180152AE0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18001EB60 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180021C20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ??$ReplaceNotifier@VCSceneMaterialInput@@@CResource@@QEAAXPEAPEAVCSceneMaterialInput@@PEAV1@@Z @ 0x180152B24 (--$ReplaceNotifier@VCSceneMaterialInput@@@CResource@@QEAAXPEAPEAVCSceneMaterialInput@@PEAV1@@Z.c)
 */

__int64 __fastcall CWindowNodeGeneratedT<CWindowNode,CVisual>::SetFlipExSurfaceClip(CVisual *this, __int64 a2)
{
  if ( a2 != *((_QWORD *)this + 100) )
  {
    CResource::ReplaceNotifier<CSceneMaterialInput>(this);
    CVisual::ClearContentTreeDataCaches(this);
    CVisual::PropagateFlags((__int64)this, 5u);
  }
  return 0LL;
}
