/*
 * XREFs of ?GetPresentDurationTolerance@CSwapChainRealization@@UEBA_NPEAI@Z @ 0x1802AD9E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSwapChainRealization::GetPresentDurationTolerance(CSwapChainRealization *this, unsigned int *a2)
{
  unsigned int v2; // eax

  if ( (*((_DWORD *)this + 54) & 0x2000) != 0 )
    v2 = *((_DWORD *)this + 30);
  else
    v2 = 0;
  *a2 = v2;
  return (*((_DWORD *)this + 54) & 0x2000) != 0;
}
