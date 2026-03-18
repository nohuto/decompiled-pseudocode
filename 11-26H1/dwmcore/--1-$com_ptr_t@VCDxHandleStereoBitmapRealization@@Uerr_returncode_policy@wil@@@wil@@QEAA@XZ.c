/*
 * XREFs of ??1?$com_ptr_t@VCDxHandleStereoBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800F586C
 * Callers:
 *     ??1CBitmapRealization@@UEAA@XZ @ 0x1800F5844 (--1CBitmapRealization@@UEAA@XZ.c)
 *     ??1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ @ 0x18012C180 (--1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ.c)
 *     ??1CScribbleSwapChain@@MEAA@XZ @ 0x180204F6C (--1CScribbleSwapChain@@MEAA@XZ.c)
 *     ?Create@CComputeScribbleRenderer@@SAJPEAVIMonitorTarget@@PEAPEAV1@@Z @ 0x180259ADC (-Create@CComputeScribbleRenderer@@SAJPEAVIMonitorTarget@@PEAPEAV1@@Z.c)
 *     ?Create@CGDISubSectionBitmapRealization@@SAJPEAEAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIGDIBitmapRealization@@@Z @ 0x1802AAE34 (-Create@CGDISubSectionBitmapRealization@@SAJPEAEAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeed.c)
 *     ??1CSwapChainRealization@@MEAA@XZ @ 0x1802AC8EC (--1CSwapChainRealization@@MEAA@XZ.c)
 *     ?Create@CDxHandleStereoBitmapRealization@@SAHW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVISwapChainRealization@@@Z @ 0x1802AE954 (-Create@CDxHandleStereoBitmapRealization@@SAHW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATT.c)
 *     ?NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802AF4C0 (-NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800F4FE0 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<CDxHandleStereoBitmapRealization,wil::err_returncode_policy>::~com_ptr_t<CDxHandleStereoBitmapRealization,wil::err_returncode_policy>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v1);
  return result;
}
