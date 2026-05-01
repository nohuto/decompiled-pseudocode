/*
 * XREFs of ??1?$CAsyncCallbackWithLambda@V_lambda_70db04ee97ce611edc9e35899f670330_@@@@UEAA@XZ @ 0x1803E5FA0
 * Callers:
 *     ??_G?$CAsyncCallbackWithLambda@V_lambda_70db04ee97ce611edc9e35899f670330_@@@@UEAAPEAXI@Z @ 0x1803E6020 (--_G-$CAsyncCallbackWithLambda@V_lambda_70db04ee97ce611edc9e35899f670330_@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ @ 0x1801FDA14 (--1-$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda<_lambda_70db04ee97ce611edc9e35899f670330_>::~CAsyncCallbackWithLambda<_lambda_70db04ee97ce611edc9e35899f670330_>(
        __int64 a1)
{
  std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>::~shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>(a1 + 56);
  *(_DWORD *)(a1 + 44) = -1073741823;
  return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>(a1 + 8);
}
