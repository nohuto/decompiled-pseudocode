/*
 * XREFs of ?DesiresTearing@CSwapChainRealization@@UEBA_NXZ @ 0x1802ACDB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSwapChainRealization::DesiresTearing(CSwapChainRealization *this)
{
  return (*((_DWORD *)this + 54) & 0x800) != 0;
}
