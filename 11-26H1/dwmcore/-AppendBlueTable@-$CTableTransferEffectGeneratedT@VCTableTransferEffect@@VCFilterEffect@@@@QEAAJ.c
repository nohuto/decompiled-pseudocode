/*
 * XREFs of ?AppendBlueTable@?$CTableTransferEffectGeneratedT@VCTableTransferEffect@@VCFilterEffect@@@@QEAAJAEBV?$span@$$CBM$0?0@gsl@@@Z @ 0x18021D924
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTableTransferEffectGeneratedT<CTableTransferEffect,CFilterEffect>::AppendBlueTable(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  LOBYTE(a3) = 1;
  return CTableTransferEffectGeneratedT<CTableTransferEffect,CFilterEffect>::SetOrAppendBlueTable(a1, a2, a3);
}
