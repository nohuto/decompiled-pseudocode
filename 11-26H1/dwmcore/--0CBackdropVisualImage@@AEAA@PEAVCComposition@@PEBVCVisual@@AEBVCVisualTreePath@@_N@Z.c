/*
 * XREFs of ??0CBackdropVisualImage@@AEAA@PEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_N@Z @ 0x18014BC00
 * Callers:
 *     ?Create@CBackdropVisualImage@@SAJPEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_NPEAPEAV1@@Z @ 0x18014BB1C (-Create@CBackdropVisualImage@@SAJPEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_NPEAPEAV1@.c)
 * Callees:
 *     ??0?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@AEBV01@@Z @ 0x180090160 (--0-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUnit@CVisu.c)
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@W4Consumer@0@@Z @ 0x180203D0C (--0CCachedVisualImage@@IEAA@PEAVCComposition@@W4Consumer@0@@Z.c)
 */

CBackdropVisualImage *__fastcall CBackdropVisualImage::CBackdropVisualImage(
        CBackdropVisualImage *this,
        struct CComposition *a2,
        const struct CVisual *a3,
        __int128 **a4,
        bool a5)
{
  CCachedVisualImage::CCachedVisualImage(this, a2, 3LL);
  *((_QWORD *)this + 201) = a3;
  *((_QWORD *)this + 9) = &CBackdropVisualImage::`vftable'{for `IBitmapResource'};
  *(_QWORD *)this = &CBackdropVisualImage::`vftable'{for `CResource'};
  *((_QWORD *)this + 10) = &CBackdropVisualImage::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 11) = &CCachedVisualImage::`vftable'{for `IDeviceResourceNotify'};
  detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>(
    (_QWORD *)this + 202,
    a4);
  *(_OWORD *)((char *)this + 1672) = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *((_DWORD *)this + 422) = 1065353216;
  *((_DWORD *)this + 423) = 1065353216;
  *((_DWORD *)this + 424) = 1065353216;
  *((_DWORD *)this + 425) = 1065353216;
  *((_QWORD *)this + 213) = 2LL;
  *((_DWORD *)this + 428) = 2048;
  *(_QWORD *)((char *)this + 1724) = 0LL;
  *(_QWORD *)((char *)this + 1740) = 0LL;
  *((_QWORD *)this + 219) = 0LL;
  *((_QWORD *)this + 220) = 0LL;
  *((_QWORD *)this + 221) = 0LL;
  *(_QWORD *)((char *)this + 1716) = 1065353216LL;
  *(_QWORD *)((char *)this + 1732) = 1065353216LL;
  *((_DWORD *)this + 437) = 1065353216;
  *((_QWORD *)this + 222) = 0LL;
  *((_WORD *)this + 892) = 0;
  *((_BYTE *)this + 1786) = a5;
  return this;
}
