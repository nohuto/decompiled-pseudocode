/*
 * XREFs of ?GetBufferSize@CDDisplaySwapChain@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1802539A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CDDisplaySwapChain::GetBufferSize(CDDisplaySwapChain *this, _QWORD *a2)
{
  *a2 = *(_QWORD *)((char *)this + 492);
  return (struct D2D_SIZE_U)a2;
}
