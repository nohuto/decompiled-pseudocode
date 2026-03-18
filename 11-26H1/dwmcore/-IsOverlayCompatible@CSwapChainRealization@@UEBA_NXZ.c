/*
 * XREFs of ?IsOverlayCompatible@CSwapChainRealization@@UEBA_NXZ @ 0x1802ADDA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSwapChainRealization::IsOverlayCompatible(CSwapChainRealization *this)
{
  return (*((_BYTE *)this + 216) & 0x50) != 0;
}
