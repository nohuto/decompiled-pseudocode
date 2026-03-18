/*
 * XREFs of ?OnBufferResize@COverlayContext@@QEAAXXZ @ 0x18023D35C
 * Callers:
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ @ 0x1801FC1D0 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ.c)
 *     ?ResizeSwapChainBuffers@CDDisplayRenderTarget@@UEAAJXZ @ 0x180254870 (-ResizeSwapChainBuffers@CDDisplayRenderTarget@@UEAAJXZ.c)
 *     ?EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ @ 0x1802588A0 (-EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall COverlayContext::OnBufferResize(COverlayContext *this)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // r8
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v5; // [rsp+34h] [rbp+Ch]

  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)(*((_QWORD *)this + 7) + 8LL) + 40LL))(
    *((_QWORD *)this + 7) + 8LL,
    &v4);
  v2 = 0LL;
  v3 = v4 * (unsigned __int64)v5;
  *((_QWORD *)this + 2418) = v3;
  if ( CCommonRegistryData::GameAreaScreenRatio )
    v2 = v3 / (unsigned int)CCommonRegistryData::GameAreaScreenRatio;
  *((_QWORD *)this + 2418) = v2;
}
