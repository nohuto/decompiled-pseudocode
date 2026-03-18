/*
 * XREFs of ?IsHDRContent@CSwapChainRealization@@UEBA_NXZ @ 0x1802ADD30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSwapChainRealization::IsHDRContent(CSwapChainRealization *this)
{
  return (*((_DWORD *)this + 54) & 0x10000) != 0 || *((_DWORD *)this + 32) == 25;
}
