/*
 * XREFs of ??0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x180149E78
 * Callers:
 *     ??0MagnifierCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAVCChannelContext@@AEBUWICRect@@_K@Z @ 0x180149728 (--0MagnifierCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCMagnifierRenderTarget@@PEA.c)
 *     ??0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@AEBUWICRect@@W4DXGI_FORMAT@@_KPEAX6@Z @ 0x180149DE0 (--0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTr.c)
 *     ?ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LEGACYVISUALCAPTURERENDERTARGET_CAPTUREBITS@@@Z @ 0x18014BA2C (-ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LE.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?GetDefaultDXGIColorSpaceForFormat@@YA?AW4DXGI_COLOR_SPACE_TYPE@@W4DXGI_FORMAT@@@Z @ 0x1800F7118 (-GetDefaultDXGIColorSpaceForFormat@@YA-AW4DXGI_COLOR_SPACE_TYPE@@W4DXGI_FORMAT@@@Z.c)
 *     ??0?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z @ 0x1800F80BC (--0-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z.c)
 *     ??0CResponseItem@@IEAA@PEAVCGlobalSurfaceManager@@@Z @ 0x180149FB8 (--0CResponseItem@@IEAA@PEAVCGlobalSurfaceManager@@@Z.c)
 *     ??0COcclusionContext@@QEAA@XZ @ 0x180203E84 (--0COcclusionContext@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

CaptureBitsResponse *__fastcall CaptureBitsResponse::CaptureBitsResponse(
        CaptureBitsResponse *this,
        struct CGlobalSurfaceManager *a2,
        struct CChannelContext *a3,
        struct CVisualTree *a4,
        float a5,
        const struct WICRect *a6,
        enum DXGI_FORMAT a7,
        unsigned __int64 a8)
{
  __int64 v11; // r8
  ULONG v12; // r9d
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-28h] BYREF

  CResponseItem::CResponseItem(this, a2);
  *(_QWORD *)this = &CaptureBitsResponse::`vftable';
  *((_QWORD *)this + 5) = a3;
  if ( a3 )
    CMILRefCountImpl::AddReference((struct CChannelContext *)((char *)a3 + 8));
  wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
    (_QWORD *)this + 6,
    (__int64)a4);
  *((_QWORD *)this + 7) = a8;
  *((_QWORD *)this + 8) = 0LL;
  COcclusionContext::COcclusionContext((CaptureBitsResponse *)((char *)this + 72));
  *((float *)this + 368) = a5;
  *(struct WICRect *)((char *)this + 1476) = *a6;
  *(_QWORD *)((char *)this + 1492) = 0LL;
  *((_DWORD *)this + 375) = 0;
  *((_QWORD *)this + 188) = 0LL;
  *((_QWORD *)this + 189) = 0LL;
  *((_QWORD *)this + 190) = 0LL;
  *((_QWORD *)this + 191) = 0LL;
  _InterlockedAdd(&CaptureBitsResponse::s_cOutstandingCaptures, 1u);
  *((_DWORD *)this + 373) = a7;
  *((_DWORD *)this + 374) = 3;
  *((_DWORD *)this + 375) = GetDefaultDXGIColorSpaceForFormat(a7);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_RTCAPTURE_Start,
      v11,
      v12,
      &v14);
  return this;
}
