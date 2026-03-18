/*
 * XREFs of ?OnIsCursorChanged@CWindowNode@@AEAAXXZ @ 0x1801FE3EC
 * Callers:
 *     ?SetIsCursor@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJ_N@Z @ 0x18024B8FC (-SetIsCursor@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJ_N@Z.c)
 *     ?SetProperty@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024E470 (-SetProperty@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowNode::OnIsCursorChanged(CWindowNode *this)
{
  CWindowNode::Invalidate(this, 0LL, 16LL);
}
