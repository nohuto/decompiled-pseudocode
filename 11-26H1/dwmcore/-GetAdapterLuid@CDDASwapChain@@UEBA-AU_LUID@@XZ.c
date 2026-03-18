/*
 * XREFs of ?GetAdapterLuid@CDDASwapChain@@UEBA?AU_LUID@@XZ @ 0x1802A42A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CDDASwapChain::GetAdapterLuid(CDDASwapChain *this, _QWORD *a2)
{
  *a2 = *(_QWORD *)((char *)this + 84);
  return (struct _LUID)a2;
}
