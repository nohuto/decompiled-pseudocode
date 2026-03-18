/*
 * XREFs of ??1?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000A5F4
 * Callers:
 *     ?Create@CCpuClipAntialiasDrawListEntry@@SAJAEBUCpuClipAntialiasEntryParams@@$$QEAV?$unique_ptr@VUVData@CCpuClipAntialiasSink@@U?$default_delete@VUVData@CCpuClipAntialiasSink@@@std@@@std@@PEAPEAV1@@Z @ 0x180008CF0 (-Create@CCpuClipAntialiasDrawListEntry@@SAJAEBUCpuClipAntialiasEntryParams@@$$QEAV-$unique_ptr@V.c)
 *     ?ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z @ 0x180025D40 (-ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z.c)
 *     ??1CaptureBitsResponse@@MEAA@XZ @ 0x18009AE40 (--1CaptureBitsResponse@@MEAA@XZ.c)
 *     ?GetCommonRenderingShaderInternalNoRef@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCommonRenderingShaderDesc@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x180100310 (-GetCommonRenderingShaderInternalNoRef@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCom.c)
 *     ??1CSuperWetInkScribble@@UEAA@XZ @ 0x180123350 (--1CSuperWetInkScribble@@UEAA@XZ.c)
 *     ??1CDrawListBatchManager@@IEAA@XZ @ 0x180136480 (--1CDrawListBatchManager@@IEAA@XZ.c)
 *     ??1CDecodeBitmap@@UEAA@XZ @ 0x1801B0F7C (--1CDecodeBitmap@@UEAA@XZ.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x18021AC68 (--1CWindowNode@@MEAA@XZ.c)
 *     ?Create@CComputeScribbleFramebuffer@@SAJPEAVCD3DDevice@@PEAUID3D12Resource@@IPEAPEAV1@@Z @ 0x18025D6BC (-Create@CComputeScribbleFramebuffer@@SAJPEAVCD3DDevice@@PEAUID3D12Resource@@IPEAPEAV1@@Z.c)
 *     ??1CSwapChainBuffer@@UEAA@XZ @ 0x18029CD00 (--1CSwapChainBuffer@@UEAA@XZ.c)
 *     ?GetD2DBitmap@CSwapChainRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802AD140 (-GetD2DBitmap@CSwapChainRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetDeviceTexture@CSwapChainRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802AD4B0 (-GetDeviceTexture@CSwapChainRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?Transcode@CSwapChainRealization@@IEAAJAEBVRenderTargetInfo@@PEAPEAVCTranscodeBitmap@@@Z @ 0x1802AE37C (-Transcode@CSwapChainRealization@@IEAAJAEBVRenderTargetInfo@@PEAPEAVCTranscodeBitmap@@@Z.c)
 *     ?Create@CTranscodeBitmap@@SAJPEAPEAV1@@Z @ 0x1802B244C (-Create@CTranscodeBitmap@@SAJPEAPEAV1@@Z.c)
 *     ?CreateCompositingShader@CCompositingShaderCache@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCLinkedShader@@@Z @ 0x1802B3C20 (-CreateCompositingShader@CCompositingShaderCache@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUP.c)
 * Callees:
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18001F360 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::~com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release();
  return result;
}
