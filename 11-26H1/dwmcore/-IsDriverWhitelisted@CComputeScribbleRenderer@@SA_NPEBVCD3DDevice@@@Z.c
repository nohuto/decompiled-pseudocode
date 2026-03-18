/*
 * XREFs of ?IsDriverWhitelisted@CComputeScribbleRenderer@@SA_NPEBVCD3DDevice@@@Z @ 0x1801E0C50
 * Callers:
 *     ?EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ @ 0x1801DD2EC (-EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ.c)
 *     ?IsFrontBufferRenderingSupported@CD3DDevice@@QEBA_NW4DXGI_FORMAT@@@Z @ 0x180297B24 (-IsFrontBufferRenderingSupported@CD3DDevice@@QEBA_NW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CComputeScribbleRenderer::IsDriverWhitelisted(const struct CD3DDevice *a1)
{
  if ( CCommonRegistryData::InkGPUAccelOverrideVendorWhitelist )
    return 1;
  if ( *((_DWORD *)a1 + 226) == 32902 )
    return *((_DWORD *)a1 + 157) < 2600;
  return 0;
}
