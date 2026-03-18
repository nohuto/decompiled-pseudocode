/*
 * XREFs of ?SetAlphaTable@?$CTableTransferEffectGeneratedT@VCTableTransferEffect@@VCFilterEffect@@@@QEAAJAEBV?$span@$$CBM$0?0@gsl@@@Z @ 0x18021D9A4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTableTransferEffectGeneratedT<CTableTransferEffect,CFilterEffect>::SetAlphaTable(
        __int64 a1,
        __int64 a2)
{
  return CTableTransferEffectGeneratedT<CTableTransferEffect,CFilterEffect>::SetOrAppendAlphaTable(a1, a2, 0LL);
}
