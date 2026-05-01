/*
 * XREFs of CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__&_::_CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__&_ @ 0x1802C427C
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__&_::_scalar_deleting_destructor_ @ 0x18020FE90 (CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__-_--_scalar_deleting_destruct.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D120 (-InternalRelease@-$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216____::_CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216____(
        __int64 a1)
{
  Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease((__int64 *)(a1 + 48));
  *(_DWORD *)(a1 + 44) = -1073741823;
  return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>(a1 + 8);
}
