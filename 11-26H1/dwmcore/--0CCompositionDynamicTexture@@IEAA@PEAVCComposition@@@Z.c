/*
 * XREFs of ??0CCompositionDynamicTexture@@IEAA@PEAVCComposition@@@Z @ 0x180218018
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180155D14 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CCompositionDynamicTexture *__fastcall CCompositionDynamicTexture::CCompositionDynamicTexture(
        CCompositionDynamicTexture *this,
        struct CComposition *a2)
{
  CCompositionDynamicTexture *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 2LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CCompositionDynamicTexture::`vftable'{for `CCompositionDynamicTextureGeneratedT<CCompositionDynamicTexture,CContent>'};
  *((_QWORD *)this + 10) = &CCompositionDynamicTexture::`vftable'{for `IDirtyRectSource'};
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 11) = &CRectanglesShape::`vftable';
  *((_QWORD *)this + 13) = (char *)this + 128;
  *((_QWORD *)this + 14) = (char *)this + 128;
  *((_QWORD *)this + 15) = (char *)this + 144;
  result = this;
  *((_QWORD *)this + 18) = 0LL;
  return result;
}
