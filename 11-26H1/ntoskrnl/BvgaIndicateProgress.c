/*
 * XREFs of BvgaIndicateProgress @ 0x140CBA240
 * Callers:
 *     <none>
 * Callees:
 *     BvgaUpdateProgressBar @ 0x1405C6070 (BvgaUpdateProgressBar.c)
 */

void BvgaIndicateProgress()
{
  unsigned int v0; // eax

  ++BvgaProgressIndicator;
  v0 = 100 * BvgaProgressIndicator / (unsigned int)dword_140FFB1D4;
  if ( v0 > 0x63 )
    v0 = 99;
  if ( v0 != dword_140FFB1D8 )
  {
    dword_140FFB1D8 = v0;
    BvgaUpdateProgressBar(v0);
  }
}
