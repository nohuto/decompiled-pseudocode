/*
 * XREFs of ?SetUpdateId@?$CFilterEffectGeneratedT@VCFilterEffect@@VCEffect@@@@QEAAJI@Z @ 0x18024EF1C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnUpdateIdChanged@CFilterEffect@@QEAAXXZ @ 0x180267614 (-OnUpdateIdChanged@CFilterEffect@@QEAAXXZ.c)
 */

__int64 __fastcall CFilterEffectGeneratedT<CFilterEffect,CEffect>::SetUpdateId(CFilterEffect *a1, int a2)
{
  if ( a2 != *((_DWORD *)a1 + 21) )
  {
    *((_DWORD *)a1 + 21) = a2;
    CFilterEffect::OnUpdateIdChanged(a1);
  }
  return 0LL;
}
