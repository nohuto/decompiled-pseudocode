/*
 * XREFs of ?GetSwapchainBufferUsage@CD3DDevice@@QEAAI_N0W4DXGI_FORMAT@@I@Z @ 0x18021ADA8
 * Callers:
 *     ?EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ @ 0x1801DD2EC (-EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ.c)
 *     ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVCLegacySwapChain@@@Z @ 0x1801FED6C (-CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AE.c)
 * Callees:
 *     ?UseSwapchainAsShaderInput@CD3DDevice@@QEBA_NXZ @ 0x1801DF95C (-UseSwapchainAsShaderInput@CD3DDevice@@QEBA_NXZ.c)
 *     ?IsFrontBufferRenderingSupported@CD3DDevice@@QEBA_NW4DXGI_FORMAT@@@Z @ 0x180297B24 (-IsFrontBufferRenderingSupported@CD3DDevice@@QEBA_NW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CD3DDevice::GetSwapchainBufferUsage(
        CD3DDevice *this,
        __int64 a2,
        __int64 a3,
        enum DXGI_FORMAT a4,
        unsigned int a5)
{
  CD3DDevice *v5; // rcx
  unsigned int v6; // ebx
  enum DXGI_FORMAT v7; // r9d
  char v8; // r11
  char v9; // r10

  v6 = a5 | (16 * ((unsigned __int8)CD3DDevice::UseSwapchainAsShaderInput(this) + 2));
  if ( v9 && !v8 && CD3DDevice::IsFrontBufferRenderingSupported(v5, v7) )
    v6 |= 0x2000480u;
  return v6;
}
