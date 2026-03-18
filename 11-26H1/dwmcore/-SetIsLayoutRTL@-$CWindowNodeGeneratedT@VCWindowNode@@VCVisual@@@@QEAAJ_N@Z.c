/*
 * XREFs of ?SetIsLayoutRTL@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJ_N@Z @ 0x18024BA34
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?SetProperty@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024E470 (-SetProperty@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W.c)
 * Callees:
 *     ?Invalidate@CWindowNode@@AEAAXW4ContentType@1@W4VisualDirty@@@Z @ 0x180206DB0 (-Invalidate@CWindowNode@@AEAAXW4ContentType@1@W4VisualDirty@@@Z.c)
 */

__int64 __fastcall CWindowNodeGeneratedT<CWindowNode,CVisual>::SetIsLayoutRTL(CVisual *a1, char a2)
{
  if ( a2 != *((_BYTE *)a1 + 747) )
  {
    *((_BYTE *)a1 + 747) = a2;
    CWindowNode::Invalidate(a1, 3, 4u);
  }
  return 0LL;
}
