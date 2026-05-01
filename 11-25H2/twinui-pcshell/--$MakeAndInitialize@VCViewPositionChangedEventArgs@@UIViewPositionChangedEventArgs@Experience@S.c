/*
 * XREFs of ??$MakeAndInitialize@VCViewPositionChangedEventArgs@@UIViewPositionChangedEventArgs@Experience@Shell@Internal@Windows@@AEAURect@Foundation@6@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewPositionChangedEventArgs@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@012@AEAURect@Foundation@Windows@@@Z @ 0x1801C7800
 * Callers:
 *     ?PositionView@CControlCenterExperienceManager@@AEAAJXZ @ 0x180044914 (-PositionView@CControlCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CViewPositionChangedEventArgs,Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs,Windows::Foundation::Rect &>(
        __int64 *a1,
        __int64 a2)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
  return Microsoft::WRL::Details::MakeAndInitialize<CViewPositionChangedEventArgs,Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs,Windows::Foundation::Rect &>(
           a1,
           a2);
}
