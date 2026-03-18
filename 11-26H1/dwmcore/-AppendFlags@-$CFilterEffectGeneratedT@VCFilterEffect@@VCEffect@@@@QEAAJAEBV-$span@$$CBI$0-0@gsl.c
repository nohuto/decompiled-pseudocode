/*
 * XREFs of ?AppendFlags@?$CFilterEffectGeneratedT@VCFilterEffect@@VCEffect@@@@QEAAJAEBV?$span@$$CBI$0?0@gsl@@@Z @ 0x18021D5D0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFilterEffectGeneratedT<CFilterEffect,CEffect>::AppendFlags(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  return CFilterEffectGeneratedT<CFilterEffect,CEffect>::SetOrAppendFlags(a1, a2, a3);
}
