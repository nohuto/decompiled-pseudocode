/*
 * XREFs of ?SetCursorId@?$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@QEAAJ_K@Z @ 0x18021F808
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnCursorIdChanged@CCursorVisual@@IEAAXXZ @ 0x18021F828 (-OnCursorIdChanged@CCursorVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CCursorVisualGeneratedT<CCursorVisual,CVisual>::SetCursorId(CCursorVisual *a1, __int64 a2)
{
  *((_QWORD *)a1 + 84) = a2;
  CCursorVisual::OnCursorIdChanged(a1);
  return 0LL;
}
