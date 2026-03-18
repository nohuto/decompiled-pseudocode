/*
 * XREFs of ?ResizeBuffers@CDDisplaySwapChain@@UEAAJAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@I@Z @ 0x180254830
 * Callers:
 *     ?ResizeSwapChainBuffers@CDDisplayRenderTarget@@UEAAJXZ @ 0x180254870 (-ResizeSwapChainBuffers@CDDisplayRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplaySwapChain::ResizeBuffers(
        CDDisplaySwapChain *this,
        const struct PixelFormatInfo *a2,
        const struct D2D_SIZE_U *a3,
        int a4)
{
  CDDisplaySwapChain *v5; // rcx

  *(_QWORD *)((char *)this + 68) = *(_QWORD *)a2;
  v5 = (CDDisplaySwapChain *)((char *)this - 24);
  *((_DWORD *)v5 + 25) = *((_DWORD *)a2 + 2);
  *(struct D2D_SIZE_U *)((char *)this + 492) = *a3;
  *((_DWORD *)this + 122) = a4;
  *((_BYTE *)this + 640) = 1;
  return CDDisplaySwapChain::EnsureDisplayBuffers(v5);
}
