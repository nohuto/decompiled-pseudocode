/*
 * XREFs of ?GetAdapterLuid@COverlaySwapChain@@UEBA?AU_LUID@@XZ @ 0x18029AAD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall COverlaySwapChain::GetAdapterLuid(COverlaySwapChain *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this + 10);
  return (struct _LUID)a2;
}
