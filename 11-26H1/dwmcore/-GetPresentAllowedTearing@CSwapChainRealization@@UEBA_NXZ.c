/*
 * XREFs of ?GetPresentAllowedTearing@CSwapChainRealization@@UEBA_NXZ @ 0x1802AD9B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSwapChainRealization::GetPresentAllowedTearing(CSwapChainRealization *this)
{
  return (*((_DWORD *)this + 54) & 0x1000) != 0;
}
