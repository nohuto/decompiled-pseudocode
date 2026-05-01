/*
 * XREFs of ??$MakeAndInitialize@VCVisibilityChangedEventArgs@@UIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@012@@Z @ 0x18001B9B0
 * Callers:
 *     ?OnVisibilityChanged@CToastCenterExperienceManager@@AEAAXXZ @ 0x18001B870 (-OnVisibilityChanged@CToastCenterExperienceManager@@AEAAXXZ.c)
 *     _lambda_97caca280bc1831b2fa8b4bd22a72139_::operator() @ 0x180364288 (_lambda_97caca280bc1831b2fa8b4bd22a72139_--operator().c)
 *     _lambda_b959cc7d3c94daadbba7e8631760d391_::operator() @ 0x18036B584 (_lambda_b959cc7d3c94daadbba7e8631760d391_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVisibilityChangedEventArgs,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs,>(
        __int64 *a1)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
  return Microsoft::WRL::Details::MakeAndInitialize<CVisibilityChangedEventArgs,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs,>(a1);
}
