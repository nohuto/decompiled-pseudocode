/*
 * XREFs of ?SetOpacity@?$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@QEAAJM@Z @ 0x1802190D8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnOpacityChanged@?$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@IEAAXXZ @ 0x180218F64 (-OnOpacityChanged@-$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@IEAAXXZ.c)
 */

__int64 __fastcall CEffectGroupGeneratedT<CEffectGroup,CEffect>::SetOpacity(__int64 a1, float a2)
{
  if ( a2 != *(float *)(a1 + 80) )
  {
    *(float *)(a1 + 80) = a2;
    CEffectGroupGeneratedT<CEffectGroup,CEffect>::OnOpacityChanged((_QWORD *)a1);
  }
  return 0LL;
}
