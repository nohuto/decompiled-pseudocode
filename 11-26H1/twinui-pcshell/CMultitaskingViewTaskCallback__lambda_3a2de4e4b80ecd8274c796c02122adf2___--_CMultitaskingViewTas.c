/*
 * XREFs of CMultitaskingViewTaskCallback__lambda_3a2de4e4b80ecd8274c796c02122adf2___::_CMultitaskingViewTaskCallback__lambda_3a2de4e4b80ecd8274c796c02122adf2___ @ 0x1804985D0
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_3a2de4e4b80ecd8274c796c02122adf2___::_scalar_deleting_destructor_ @ 0x180498730 (CMultitaskingViewTaskCallback__lambda_3a2de4e4b80ecd8274c796c02122adf2___--_scalar_deleting_dest.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall CMultitaskingViewTaskCallback__lambda_3a2de4e4b80ecd8274c796c02122adf2___::_CMultitaskingViewTaskCallback__lambda_3a2de4e4b80ecd8274c796c02122adf2___(
        __int64 a1)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 48));
  *(_DWORD *)(a1 + 44) = -1073741823;
  return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>(a1);
}
