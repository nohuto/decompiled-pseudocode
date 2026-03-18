/*
 * XREFs of ?SetFlags@?$CFilterEffectGeneratedT@VCFilterEffect@@VCEffect@@@@QEAAJAEBV?$span@$$CBI$0?0@gsl@@@Z @ 0x18021D5C0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFilterEffectGeneratedT<CFilterEffect,CEffect>::SetFlags(__int64 a1, __int64 a2)
{
  return CFilterEffectGeneratedT<CFilterEffect,CEffect>::SetOrAppendFlags(a1, a2, 0LL);
}
