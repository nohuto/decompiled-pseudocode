/*
 * XREFs of ?CheckSupportsConvertPresentToMPO@COverlaySwapChain@@UEBA_NXZ @ 0x1801E21C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall COverlaySwapChain::CheckSupportsConvertPresentToMPO(COverlaySwapChain *this)
{
  return *((_DWORD *)this + 16) >= 2;
}
