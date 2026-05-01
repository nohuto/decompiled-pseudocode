/*
 * XREFs of ??$MakeAndInitialize@VSizeConversionViewInfo@@V1@AEAPEAUIImmersiveMonitor@@AEAHAEAHAEAPEAUIApplicationViewTitlebarConfiguration@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@@012@AEAPEAUIImmersiveMonitor@@AEAH2AEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1802BB7F0
 * Callers:
 *     ?GetPhysicalNonClientAreaOffsets@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@HHHPEAUIApplicationViewTitlebarConfiguration@@PEAUtagRECT@@@Z @ 0x1804E9890 (-GetPhysicalNonClientAreaOffsets@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@HHHPEAUIApplic.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SizeConversionViewInfo,SizeConversionViewInfo,IImmersiveMonitor * &,int &,int &,IApplicationViewTitlebarConfiguration * &>(
        __int64 *a1,
        struct IImmersiveMonitor **a2,
        int *a3,
        int *a4,
        struct IApplicationViewTitlebarConfiguration **a5)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
  return Microsoft::WRL::Details::MakeAndInitialize<SizeConversionViewInfo,SizeConversionViewInfo,IImmersiveMonitor * &,int &,int &,IApplicationViewTitlebarConfiguration * &>(
           (SizeConversionViewInfo **)a1,
           a2,
           a3,
           a4,
           a5);
}
