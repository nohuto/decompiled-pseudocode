/*
 * XREFs of ?IsFrontBufferRenderingSupported@CD3DDevice@@QEBA_NW4DXGI_FORMAT@@@Z @ 0x180297B24
 * Callers:
 *     ?EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ @ 0x1801DD2EC (-EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ.c)
 *     ?GetSwapchainBufferUsage@CD3DDevice@@QEAAI_N0W4DXGI_FORMAT@@I@Z @ 0x18021ADA8 (-GetSwapchainBufferUsage@CD3DDevice@@QEAAI_N0W4DXGI_FORMAT@@I@Z.c)
 * Callees:
 *     ?IsDriverWhitelisted@CComputeScribbleRenderer@@SA_NPEBVCD3DDevice@@@Z @ 0x1801E0C50 (-IsDriverWhitelisted@CComputeScribbleRenderer@@SA_NPEBVCD3DDevice@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CD3DDevice::IsFrontBufferRenderingSupported(CD3DDevice *this, __int64 a2)
{
  char v2; // di
  __int64 v4; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((int *)this + 156) >= 45056 && !*((_QWORD *)this + 70) )
  {
    v4 = *((_QWORD *)this + 68);
    v6 = 0;
    if ( (*(int (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v4 + 232LL))(v4, a2, &v6) >= 0
      && (v6 & 0x2000000) != 0
      && (*((_DWORD *)this + 226) != 4318 || *((__int64 *)this + 79) >= 0x180015000D25B5LL)
      && (CCommonRegistryData::SuperWetEnabled && *((int *)this + 157) >= 2600
       || CComputeScribbleRenderer::IsDriverWhitelisted(this)) )
    {
      return 1;
    }
  }
  return v2;
}
