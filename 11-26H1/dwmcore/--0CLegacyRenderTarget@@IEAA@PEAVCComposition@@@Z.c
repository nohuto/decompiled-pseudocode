/*
 * XREFs of ??0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801C959C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180155D14 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CLegacyStereoRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180217660 (--0CLegacyStereoRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801C9998 (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0?$CTargetDirtyBase@$07@@QEAA@PEBVIVisualTreeTarget@@@Z @ 0x1801C9AA4 (--0-$CTargetDirtyBase@$07@@QEAA@PEBVIVisualTreeTarget@@@Z.c)
 *     ??0CTargetStats@@QEAA@XZ @ 0x1801C9AF8 (--0CTargetStats@@QEAA@XZ.c)
 *     ??0CMonitorTransform@@QEAA@XZ @ 0x180209CC4 (--0CMonitorTransform@@QEAA@XZ.c)
 *     ??0CFSVPProvider@@QEAA@PEAVIOverlayMonitorTarget@@@Z @ 0x18021BEA8 (--0CFSVPProvider@@QEAA@PEAVIOverlayMonitorTarget@@@Z.c)
 *     ??0COverlayContext@@QEAA@PEAVIOverlayMonitorTarget@@_N@Z @ 0x180238E38 (--0COverlayContext@@QEAA@PEAVIOverlayMonitorTarget@@_N@Z.c)
 */

CLegacyRenderTarget *__fastcall CLegacyRenderTarget::CLegacyRenderTarget(
        CLegacyRenderTarget *this,
        struct CComposition *a2)
{
  CLegacyRenderTarget *result; // rax

  CRenderTarget::CRenderTarget(this, a2);
  *((_QWORD *)this + 10) = &CLegacyRenderTarget::`vftable'{for `IPixelFormat's `CRenderTarget'};
  *(_QWORD *)this = &CLegacyRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 11) = &CLegacyStereoRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 12) = &CLegacyStereoRenderTarget::`vftable'{for `IRenderTarget's `CRenderTarget'};
  *((_QWORD *)this + 20) = &CLegacyRenderTarget::`vftable'{for `IPixelFormat's `IOverlayMonitorTarget'};
  *((_QWORD *)this + 21) = &CLegacyStereoRenderTarget::`vftable'{for `IRenderTarget's `IOverlayMonitorTarget'};
  *((_QWORD *)this + 22) = &CLegacyStereoRenderTarget::`vftable';
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  COverlayContext::COverlayContext(
    (CLegacyRenderTarget *)((char *)this + 216),
    (struct IOverlayMonitorTarget *)(((unsigned __int64)this + 160) & -(__int64)(this != 0LL)),
    0);
  CMonitorTransform::CMonitorTransform((CLegacyRenderTarget *)((char *)this + 29920));
  CTargetDirtyBase<8>::CTargetDirtyBase<8>(
    (char *)this + 30208,
    ((unsigned __int64)this + 88) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  *((_QWORD *)this + 4011) = ((unsigned __int64)this + 160) & -(__int64)(this != 0LL);
  *((_QWORD *)this + 3776) = &CMonitorDirty::`vftable';
  *((_DWORD *)this + 8024) = 0;
  *((_DWORD *)this + 8025) = 3;
  *(_QWORD *)((char *)this + 32116) = 0LL;
  *((_DWORD *)this + 8031) = 0;
  *((_QWORD *)this + 4013) = 0LL;
  *((_DWORD *)this + 8028) = -2;
  *(_WORD *)((char *)this + 32125) = 0;
  *((_BYTE *)this + 32127) = 0;
  CTargetStats::CTargetStats((CLegacyRenderTarget *)((char *)this + 32128));
  *((_QWORD *)this + 4052) = 0LL;
  CFSVPProvider::CFSVPProvider(
    (CLegacyRenderTarget *)((char *)this + 32424),
    (struct IOverlayMonitorTarget *)(((unsigned __int64)this + 160) & -(__int64)(this != 0LL)));
  result = this;
  *((_QWORD *)this + 4063) = 0LL;
  *((_DWORD *)this + 8128) = 0x1000000;
  *((_BYTE *)this + 32516) = 0;
  *((_DWORD *)this + 38) = 1065353216;
  return result;
}
