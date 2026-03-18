/*
 * XREFs of ?EnsureDeviceTexture@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180194250
 * Callers:
 *     ?EnsureDeviceTexture@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WBDI@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802AA880 (-EnsureDeviceTexture@-$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealiza.c)
 *     ?EnsureDeviceTexture@?$IBitmapRealizationMethodsT@VCBitmapRealization@@VISwapChainRealization@@@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802AB780 (-EnsureDeviceTexture@-$IBitmapRealizationMethodsT@VCBitmapRealization@@VISwapChainRealization@@@.c)
 *     ?EnsureDeviceTexture@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802AF650 (-EnsureDeviceTexture@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGD_ea_1802AF650.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::EnsureDeviceTexture(
        __int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 104LL))(a1);
}
