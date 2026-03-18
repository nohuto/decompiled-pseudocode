/*
 * XREFs of ?SetOffset@?$CColorGradientStopGeneratedT@VCColorGradientStop@@VCResource@@@@QEAAJM@Z @ 0x1801D664C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnOffsetChanged@CColorGradientStop@@QEAAXXZ @ 0x1801D6670 (-OnOffsetChanged@CColorGradientStop@@QEAAXXZ.c)
 */

__int64 __fastcall CColorGradientStopGeneratedT<CColorGradientStop,CResource>::SetOffset(float *a1, float a2)
{
  if ( a2 != a1[18] )
  {
    a1[18] = a2;
    CColorGradientStop::OnOffsetChanged((CColorGradientStop *)a1);
  }
  return 0LL;
}
