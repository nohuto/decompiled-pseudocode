/*
 * XREFs of ??1?$CDeviceResourceT@V?$IBitmapRealizationMethodsT@VCBitmapRealization@@VIYUVSwapChainRealization@@@@@@MEAA@XZ @ 0x1800FB0FC
 * Callers:
 *     ??1CDxHandleYUVBitmapRealization@@MEAA@XZ @ 0x1800FAD5C (--1CDxHandleYUVBitmapRealization@@MEAA@XZ.c)
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x1800FAFEC (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CDeviceResourceT<IBitmapRealizationMethodsT<CBitmapRealization,IYUVSwapChainRealization>>::~CDeviceResourceT<IBitmapRealizationMethodsT<CBitmapRealization,IYUVSwapChainRealization>>(
        CBitmapRealization *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 44);
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (*((_QWORD *)this + 46) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 44) = 0LL;
    *((_QWORD *)this + 45) = 0LL;
    *((_QWORD *)this + 46) = 0LL;
  }
  CBitmapRealization::~CBitmapRealization(this);
}
