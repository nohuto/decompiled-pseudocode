/*
 * XREFs of ?SetInterpolationSpace@?$CGradientBrushGeneratedT@VCGradientBrush@@VCBrush@@@@QEAAJI@Z @ 0x18024B770
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?InvalidateGradient@CGradientBrush@@AEAAXXZ @ 0x1801C665C (-InvalidateGradient@CGradientBrush@@AEAAXXZ.c)
 */

__int64 __fastcall CGradientBrushGeneratedT<CGradientBrush,CBrush>::SetInterpolationSpace(CGradientBrush *a1, int a2)
{
  if ( a2 != *((_DWORD *)a1 + 28) )
  {
    *((_DWORD *)a1 + 28) = a2;
    CGradientBrush::InvalidateGradient(a1);
  }
  return 0LL;
}
