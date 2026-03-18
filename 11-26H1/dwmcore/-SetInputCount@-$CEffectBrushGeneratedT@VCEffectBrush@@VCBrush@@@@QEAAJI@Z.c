/*
 * XREFs of ?SetInputCount@?$CEffectBrushGeneratedT@VCEffectBrush@@VCBrush@@@@QEAAJI@Z @ 0x18024B5D4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnInputCountChanged@CEffectBrush@@QEAAXXZ @ 0x18026E400 (-OnInputCountChanged@CEffectBrush@@QEAAXXZ.c)
 */

__int64 __fastcall CEffectBrushGeneratedT<CEffectBrush,CBrush>::SetInputCount(CEffectBrush *a1, int a2)
{
  if ( a2 != *((_DWORD *)a1 + 26) )
  {
    *((_DWORD *)a1 + 26) = a2;
    CEffectBrush::OnInputCountChanged(a1);
  }
  return 0LL;
}
