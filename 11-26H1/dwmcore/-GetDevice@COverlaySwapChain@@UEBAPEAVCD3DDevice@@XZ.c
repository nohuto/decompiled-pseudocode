/*
 * XREFs of ?GetDevice@COverlaySwapChain@@UEBAPEAVCD3DDevice@@XZ @ 0x180196670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall COverlaySwapChain::GetDevice(COverlaySwapChain *this)
{
  return (struct CD3DDevice *)*((_QWORD *)this + 5);
}
