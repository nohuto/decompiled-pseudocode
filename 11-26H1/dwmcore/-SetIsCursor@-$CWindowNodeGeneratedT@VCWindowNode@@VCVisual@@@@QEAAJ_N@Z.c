/*
 * XREFs of ?SetIsCursor@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJ_N@Z @ 0x18024B8FC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnIsCursorChanged@CWindowNode@@AEAAXXZ @ 0x1801FE3EC (-OnIsCursorChanged@CWindowNode@@AEAAXXZ.c)
 */

__int64 __fastcall CWindowNodeGeneratedT<CWindowNode,CVisual>::SetIsCursor(CWindowNode *a1, char a2)
{
  if ( a2 != *((_BYTE *)a1 + 746) )
  {
    *((_BYTE *)a1 + 746) = a2;
    CWindowNode::OnIsCursorChanged(a1);
  }
  return 0LL;
}
