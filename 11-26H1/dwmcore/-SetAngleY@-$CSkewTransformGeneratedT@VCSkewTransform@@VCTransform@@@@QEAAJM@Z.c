/*
 * XREFs of ?SetAngleY@?$CSkewTransformGeneratedT@VCSkewTransform@@VCTransform@@@@QEAAJM@Z @ 0x180218FA0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?SetProperty@?$CSkewTransformGeneratedT@VCSkewTransform@@VCTransform@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024DF10 (-SetProperty@-$CSkewTransformGeneratedT@VCSkewTransform@@VCTransform@@@@MEAAJUDCOMPOSITION_PROPE.c)
 * Callees:
 *     ?OnAngleYChanged@?$CSkewTransformGeneratedT@VCSkewTransform@@VCTransform@@@@IEAAXXZ @ 0x180218FCC (-OnAngleYChanged@-$CSkewTransformGeneratedT@VCSkewTransform@@VCTransform@@@@IEAAXXZ.c)
 */

__int64 __fastcall CSkewTransformGeneratedT<CSkewTransform,CTransform>::SetAngleY(__int64 a1, float a2)
{
  if ( a2 != *(float *)(a1 + 164) )
  {
    *(float *)(a1 + 164) = a2;
    CSkewTransformGeneratedT<CSkewTransform,CTransform>::OnAngleYChanged();
  }
  return 0LL;
}
