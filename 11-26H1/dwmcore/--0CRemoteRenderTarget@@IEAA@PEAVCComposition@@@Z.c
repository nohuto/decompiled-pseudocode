/*
 * XREFs of ??0CRemoteRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801C93E0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180155D14 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801C9998 (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ?EnableTightDirtyRegion@?$CTargetDirtyBase@$07@@QEAAX_N@Z @ 0x1801C9A10 (-EnableTightDirtyRegion@-$CTargetDirtyBase@$07@@QEAAX_N@Z.c)
 *     ??0?$CTargetDirtyBase@$07@@QEAA@PEBVIVisualTreeTarget@@@Z @ 0x1801C9AA4 (--0-$CTargetDirtyBase@$07@@QEAA@PEBVIVisualTreeTarget@@@Z.c)
 */

CRemoteRenderTarget *__fastcall CRemoteRenderTarget::CRemoteRenderTarget(
        CRemoteRenderTarget *this,
        struct CComposition *a2)
{
  __int64 v3; // rdx

  CRenderTarget::CRenderTarget(this, a2);
  *((_QWORD *)this + 10) = &CRemoteAppRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)this = &CRemoteRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 11) = &CRemoteRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 12) = &CRemoteRenderTarget::`vftable'{for `IRenderTarget's `CRenderTarget'};
  *((_QWORD *)this + 20) = &CRemoteRenderTarget::`vftable'{for `IPixelFormat's `IMonitorTarget'};
  *((_QWORD *)this + 21) = &CRemoteRenderTarget::`vftable'{for `IRenderTarget's `IMonitorTarget'};
  *((_QWORD *)this + 22) = &CRemoteRenderTarget::`vftable';
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *(_QWORD *)((char *)this + 300) = 1065353216LL;
  *((_QWORD *)this + 30) = 1065353216LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_DWORD *)this + 64) = 0;
  *(_QWORD *)((char *)this + 260) = 1065353216LL;
  *(_QWORD *)((char *)this + 268) = 0LL;
  *((_DWORD *)this + 69) = 0;
  *((_QWORD *)this + 35) = 1065353216LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_DWORD *)this + 74) = 0;
  *((_BYTE *)this + 305) &= 0xE9u;
  *((_BYTE *)this + 305) |= 0x29u;
  *((_BYTE *)this + 304) = -86;
  *((_QWORD *)this + 40) = 0LL;
  *((_DWORD *)this + 82) = 0;
  *(_QWORD *)((char *)this + 308) = 0LL;
  *((_DWORD *)this + 79) = -2;
  *(_WORD *)((char *)this + 329) = 0;
  *((_BYTE *)this + 331) = 0;
  CTargetDirtyBase<8>::CTargetDirtyBase<8>(
    (char *)this + 336,
    ((unsigned __int64)this + 88) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  LOBYTE(v3) = 1;
  *((_QWORD *)this + 42) = &CTargetDirtyBase<8>::`vftable';
  *((_QWORD *)this + 277) = 0LL;
  *((_QWORD *)this + 278) = 0LL;
  *((_WORD *)this + 1116) = 0;
  *((_BYTE *)this + 2234) = 0;
  *((_DWORD *)this + 38) = 1065353216;
  *((_DWORD *)this + 32) = 87;
  *(_QWORD *)((char *)this + 132) = 3LL;
  CTargetDirtyBase<8>::EnableTightDirtyRegion((char *)this + 336, v3);
  return this;
}
