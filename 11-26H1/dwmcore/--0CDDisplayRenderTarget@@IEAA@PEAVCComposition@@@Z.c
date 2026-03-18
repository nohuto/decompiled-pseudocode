/*
 * XREFs of ??0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801C9240
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180155D14 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801C9998 (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0?$CTargetDirtyBase@$07@@QEAA@PEBVIVisualTreeTarget@@@Z @ 0x1801C9AA4 (--0-$CTargetDirtyBase@$07@@QEAA@PEBVIVisualTreeTarget@@@Z.c)
 *     ??0CTargetStats@@QEAA@XZ @ 0x1801C9AF8 (--0CTargetStats@@QEAA@XZ.c)
 *     ??0CMonitorTransform@@QEAA@XZ @ 0x180209CC4 (--0CMonitorTransform@@QEAA@XZ.c)
 *     ??0CFSVPProvider@@QEAA@PEAVIOverlayMonitorTarget@@@Z @ 0x18021BEA8 (--0CFSVPProvider@@QEAA@PEAVIOverlayMonitorTarget@@@Z.c)
 *     ??0COverlayContext@@QEAA@PEAVIOverlayMonitorTarget@@_N@Z @ 0x180238E38 (--0COverlayContext@@QEAA@PEAVIOverlayMonitorTarget@@_N@Z.c)
 */

CDDisplayRenderTarget *__fastcall CDDisplayRenderTarget::CDDisplayRenderTarget(
        CDDisplayRenderTarget *this,
        struct CComposition *a2)
{
  CDDisplayRenderTarget *result; // rax

  CRenderTarget::CRenderTarget(this, a2);
  *((_QWORD *)this + 10) = &CDDisplayRenderTarget::`vftable'{for `IPixelFormat's `CRenderTarget'};
  *(_QWORD *)this = &CDDisplayRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 11) = &CDDisplayRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 12) = &CDDisplayRenderTarget::`vftable'{for `IRenderTarget's `CRenderTarget'};
  *((_QWORD *)this + 20) = &CDDisplayRenderTarget::`vftable'{for `IPixelFormat's `IOverlayMonitorTarget'};
  *((_QWORD *)this + 21) = &CDDisplayRenderTarget::`vftable'{for `IRenderTarget's `IOverlayMonitorTarget'};
  *((_QWORD *)this + 22) = &CDDisplayRenderTarget::`vftable';
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  COverlayContext::COverlayContext(
    (CDDisplayRenderTarget *)((char *)this + 232),
    (struct IOverlayMonitorTarget *)(((unsigned __int64)this + 160) & -(__int64)(this != 0LL)),
    1);
  CMonitorTransform::CMonitorTransform((CDDisplayRenderTarget *)((char *)this + 29936));
  CTargetDirtyBase<8>::CTargetDirtyBase<8>(
    (char *)this + 30224,
    ((unsigned __int64)this + 88) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  *((_QWORD *)this + 4013) = ((unsigned __int64)this + 160) & -(__int64)(this != 0LL);
  *((_QWORD *)this + 3778) = &CMonitorDirty::`vftable';
  *(_QWORD *)((char *)this + 32124) = 0LL;
  *(_QWORD *)((char *)this + 32132) = 0LL;
  *((_QWORD *)this + 4014) = 0LL;
  *((_DWORD *)this + 8030) = -2;
  *(_WORD *)((char *)this + 32133) = 0;
  *((_BYTE *)this + 32135) = 0;
  *((_DWORD *)this + 8035) = 0;
  *((_DWORD *)this + 8036) = 3;
  CTargetStats::CTargetStats((CDDisplayRenderTarget *)((char *)this + 32152));
  CFSVPProvider::CFSVPProvider(
    (CDDisplayRenderTarget *)((char *)this + 32440),
    (struct IOverlayMonitorTarget *)(((unsigned __int64)this + 160) & -(__int64)(this != 0LL)));
  result = this;
  *(_QWORD *)((char *)this + 132) = 3LL;
  *((_QWORD *)this + 4065) = 0LL;
  *((_WORD *)this + 16264) = 0;
  *((_DWORD *)this + 32) = 87;
  return result;
}
