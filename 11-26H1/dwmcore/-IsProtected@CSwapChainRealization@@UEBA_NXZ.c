/*
 * XREFs of ?IsProtected@CSwapChainRealization@@UEBA_NXZ @ 0x1802ADE40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSwapChainRealization::IsProtected(CSwapChainRealization *this)
{
  return (*((_DWORD *)this + 52) & 2) != 0;
}
