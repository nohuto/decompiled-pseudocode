/*
 * XREFs of ??0CCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18005B690
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180155D14 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEAA@XZ @ 0x18005A290 (--0-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEAA@.c)
 *     ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@W4DirtyRegionMode@0@@Z @ 0x1801C974C (--0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@W4DirtyRegionMode@0@@Z.c)
 */

CCaptureRenderTarget *__fastcall CCaptureRenderTarget::CCaptureRenderTarget(
        CCaptureRenderTarget *this,
        struct CComposition *a2)
{
  _QWORD *v3; // rdi
  __int64 v4; // rsi
  CCaptureRenderTarget *result; // rax
  const char *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]

  v6 = "DWM Rendertarget (capture)";
  v7 = 26;
  ((void (__fastcall *)(CCaptureRenderTarget *, struct CComposition *, const char **, __int64))COffScreenRenderTarget::COffScreenRenderTarget)(
    this,
    a2,
    &v6,
    1LL);
  *(_QWORD *)this = &CCaptureRenderTarget::`vftable'{for `CNotificationResource'};
  v3 = (_QWORD *)((char *)this + 2420);
  *((_QWORD *)this + 10) = &CRemoteAppRenderTarget::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 11) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  v4 = 5LL;
  *((_QWORD *)this + 12) = &CCaptureRenderTarget::`vftable'{for `IRenderTarget'};
  *((_QWORD *)this + 298) = &CCaptureRenderTarget::`vftable';
  *((_QWORD *)this + 299) = 0LL;
  *((_DWORD *)this + 604) = 0;
  do
  {
    TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>(v3);
    v3 += 2;
    --v4;
  }
  while ( v4 );
  *((_BYTE *)this + 2580) = 0;
  *((_BYTE *)this + 2584) = -1;
  *((_BYTE *)this + 2588) = 0;
  *(_DWORD *)((char *)this + 2590) = 1;
  *((_QWORD *)this + 327) = 0LL;
  *((_QWORD *)this + 328) = 0LL;
  *((_QWORD *)this + 329) = 0LL;
  *((_QWORD *)this + 330) = 0LL;
  *((_QWORD *)this + 331) = 0LL;
  *((_QWORD *)this + 333) = 0LL;
  *((_QWORD *)this + 335) = 0LL;
  *((_QWORD *)this + 336) = 0LL;
  *((_QWORD *)this + 337) = 0LL;
  *((_QWORD *)this + 338) = 0LL;
  *((_QWORD *)this + 339) = 0LL;
  *((_QWORD *)this + 340) = 0LL;
  *((_QWORD *)this + 341) = 0LL;
  *((_QWORD *)this + 342) = 0LL;
  *((_QWORD *)this + 343) = 0LL;
  *((_QWORD *)this + 344) = 0LL;
  *((_QWORD *)this + 345) = 0LL;
  *((_QWORD *)this + 346) = 0LL;
  *((_QWORD *)this + 347) = 0LL;
  *((_QWORD *)this + 348) = 0LL;
  *((_QWORD *)this + 349) = 0LL;
  *((_QWORD *)this + 350) = 0LL;
  *((_QWORD *)this + 352) = 0LL;
  *((_BYTE *)this + 2824) = 0;
  *(_QWORD *)((char *)this + 2828) = 0LL;
  result = this;
  *((_QWORD *)this + 355) = 0LL;
  *(_QWORD *)((char *)this + 140) = 0LL;
  *(_QWORD *)((char *)this + 148) = 0LL;
  *((_DWORD *)this + 649) = 0;
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 650) = 0x40000000;
  *((_BYTE *)this + 2808) = 1;
  *((_DWORD *)this + 664) = -1;
  return result;
}
