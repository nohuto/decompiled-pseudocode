/*
 * XREFs of ?UseSwapchainAsShaderInput@CD3DDevice@@QEBA_NXZ @ 0x1801DF95C
 * Callers:
 *     ?CreateDDASwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCDDASwapChain@@@Z @ 0x1801E09B4 (-CreateDDASwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVR.c)
 *     ?GetSwapchainBufferUsage@CD3DDevice@@QEAAI_N0W4DXGI_FORMAT@@I@Z @ 0x18021ADA8 (-GetSwapchainBufferUsage@CD3DDevice@@QEAAI_N0W4DXGI_FORMAT@@I@Z.c)
 *     ?CreateLegacyStereoSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVCLegacyStereoSwapChain@@@Z @ 0x180297270 (-CreateLegacyStereoSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatIn.c)
 * Callees:
 *     <none>
 */

char __fastcall CD3DDevice::UseSwapchainAsShaderInput(CD3DDevice *this)
{
  char v1; // dl
  int v2; // eax
  int v3; // r8d

  v1 = 0;
  if ( *((int *)this + 156) >= 40960 )
    return 1;
  v2 = *((_DWORD *)this + 226);
  if ( v2 == 1297040209 )
  {
    if ( *((int *)this + 157) < 1200 )
      return v1;
    return 1;
  }
  if ( v2 == 1230128470 )
  {
    v3 = *((_DWORD *)this + 227);
    if ( v3 == 808464439 || ((v3 - 825241655) & 0xFCFFFFFF) == 0 && v3 != 842018871 )
      return 1;
  }
  return v1;
}
