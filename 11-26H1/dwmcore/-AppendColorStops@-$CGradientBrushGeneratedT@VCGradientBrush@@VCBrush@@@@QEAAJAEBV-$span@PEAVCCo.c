/*
 * XREFs of ?AppendColorStops@?$CGradientBrushGeneratedT@VCGradientBrush@@VCBrush@@@@QEAAJAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@@Z @ 0x18024719C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGradientBrushGeneratedT<CGradientBrush,CBrush>::AppendColorStops(
        struct CResource ***a1,
        _QWORD *a2)
{
  return CGradientBrushGeneratedT<CGradientBrush,CBrush>::SetOrAppendColorStops(a1, a2, 1);
}
