/*
 * XREFs of BvgaIndicateProgress @ 0x140CC0280
 * Callers:
 *     <none>
 * Callees:
 *     BvgaUpdateProgressBar @ 0x1405C88E0 (BvgaUpdateProgressBar.c)
 */

void BvgaIndicateProgress()
{
  unsigned int v0; // eax

  ++BvgaProgressIndicator;
  v0 = 100 * BvgaProgressIndicator / (unsigned int)dword_140FFC1D4;
  if ( v0 > 0x63 )
    v0 = 99;
  if ( v0 != dword_140FFC1D8 )
  {
    dword_140FFC1D8 = v0;
    BvgaUpdateProgressBar(v0);
  }
}
