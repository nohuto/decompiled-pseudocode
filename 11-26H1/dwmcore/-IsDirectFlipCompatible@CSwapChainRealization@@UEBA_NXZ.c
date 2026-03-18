/*
 * XREFs of ?IsDirectFlipCompatible@CSwapChainRealization@@UEBA_NXZ @ 0x1802ADD10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSwapChainRealization::IsDirectFlipCompatible(CSwapChainRealization *this)
{
  return (*((_DWORD *)this + 54) & 0x10) != 0;
}
