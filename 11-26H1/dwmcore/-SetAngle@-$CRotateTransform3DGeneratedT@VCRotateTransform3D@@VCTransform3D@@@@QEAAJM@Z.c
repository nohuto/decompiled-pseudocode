/*
 * XREFs of ?SetAngle@?$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@QEAAJM@Z @ 0x180218F38
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnOpacityChanged@?$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@IEAAXXZ @ 0x180218F64 (-OnOpacityChanged@-$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@IEAAXXZ.c)
 */

__int64 __fastcall CRotateTransform3DGeneratedT<CRotateTransform3D,CTransform3D>::SetAngle(__int64 a1, float a2)
{
  if ( a2 != *(float *)(a1 + 160) )
  {
    *(float *)(a1 + 160) = a2;
    CEffectGroupGeneratedT<CEffectGroup,CEffect>::OnOpacityChanged();
  }
  return 0LL;
}
