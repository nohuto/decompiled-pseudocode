/*
 * XREFs of ??0CLinearGradientBrush@@QEAA@PEAVCComposition@@@Z @ 0x18027A0D8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180155D14 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CGradientBrush@@IEAA@PEAVCComposition@@_N@Z @ 0x18020CD24 (--0CGradientBrush@@IEAA@PEAVCComposition@@_N@Z.c)
 */

CLinearGradientBrush *__fastcall CLinearGradientBrush::CLinearGradientBrush(
        CLinearGradientBrush *this,
        struct CComposition *a2)
{
  CLinearGradientBrush *v2; // rcx

  CGradientBrush::CGradientBrush(this, a2, 1);
  *((_QWORD *)v2 + 32) = 1065353216LL;
  *(_QWORD *)v2 = &CLinearGradientBrush::`vftable'{for `CContent'};
  *((_QWORD *)v2 + 9) = &CBackdropBrush::`vftable'{for `IBrushChangeNotification'};
  *((_QWORD *)v2 + 19) = &CLinearGradientBrush::`vftable'{for `IAtlasEntryOwner'};
  *((_QWORD *)v2 + 20) = &CRadialGradientBrush::`vftable'{for `IDeviceResourceNotify'};
  return v2;
}
