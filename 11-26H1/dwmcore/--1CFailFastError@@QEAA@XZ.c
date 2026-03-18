/*
 * XREFs of ??1CFailFastError@@QEAA@XZ @ 0x1801ABF10
 * Callers:
 *     ?CreateD3D11Device@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEA_NPEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERSION@@PEAT_LARGE_INTEGER@@PEAPEAUID3D11Device1@@@Z @ 0x1801D4544 (-CreateD3D11Device@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEA_NPEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVE.c)
 *     ?CheckOcclusionState@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x1801FBF80 (-CheckOcclusionState@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x1801FC7E4 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVCLegacySwapChain@@@Z @ 0x1801FED6C (-CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AE.c)
 *     ?Present@CLegacyRenderTarget@@IEAAJXZ @ 0x18025303C (-Present@CLegacyRenderTarget@@IEAAJXZ.c)
 *     ?Present@CDDisplayRenderTarget@@IEAAJXZ @ 0x180253F5C (-Present@CDDisplayRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?IsFailFastTriggered@@YA_NXZ @ 0x1801BE5E0 (-IsFailFastTriggered@@YA_NXZ.c)
 *     ?MilFailFastForHR@@YAXJPEBX@Z @ 0x18020C220 (-MilFailFastForHR@@YAXJPEBX@Z.c)
 */

void __fastcall CFailFastError::~CFailFastError(CFailFastError *this)
{
  int *v1; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (int *)*((_QWORD *)this + 1);
  if ( v1 && *v1 < 0 && IsFailFastTriggered() )
  {
    MilFailFastForHR(g_hrNoHardwareDeviceOverride, retaddr);
    JUMPOUT(0x1801ABF4FLL);
  }
  g_hrNoHardwareDeviceOverride = *(_DWORD *)this;
}
