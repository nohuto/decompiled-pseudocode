/*
 * XREFs of ?Reset@CTargetStats@@QEAAXIPEAVIOverlaySwapChain@@@Z @ 0x180148FEC
 * Callers:
 *     ?ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ @ 0x180149160 (-ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ.c)
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ @ 0x1801FC1D0 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x1801FC7E4 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?ReleaseSwapChain@CLegacyRenderTarget@@UEAAXXZ @ 0x18020A120 (-ReleaseSwapChain@CLegacyRenderTarget@@UEAAXXZ.c)
 *     ?EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ @ 0x1802588A0 (-EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?UpdateTargetId@CTargetStats@@IEAAXI@Z @ 0x180149090 (-UpdateTargetId@CTargetStats@@IEAAXI@Z.c)
 */

void __fastcall CTargetStats::Reset(CTargetStats *this, unsigned int a2, struct IOverlaySwapChain *a3)
{
  *((_QWORD *)this + 4) = a3;
  CTargetStats::UpdateTargetId(this, a2);
  *((_DWORD *)this + 10) = 1;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 40) = 0;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 46) = 0;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 52) = 0;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_DWORD *)this + 58) = 0;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
}
