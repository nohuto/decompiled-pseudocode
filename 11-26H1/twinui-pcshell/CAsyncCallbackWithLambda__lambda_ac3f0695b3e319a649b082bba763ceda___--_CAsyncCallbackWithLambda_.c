/*
 * XREFs of CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda___::_CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda___ @ 0x1802FBE50
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda___::_scalar_deleting_destructor_ @ 0x1802FC350 (CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda___--_scalar_deleting_destructo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda___::_CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda___(
        __int64 a1)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 48));
  *(_DWORD *)(a1 + 44) = -1073741823;
  return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>(a1 + 8);
}
