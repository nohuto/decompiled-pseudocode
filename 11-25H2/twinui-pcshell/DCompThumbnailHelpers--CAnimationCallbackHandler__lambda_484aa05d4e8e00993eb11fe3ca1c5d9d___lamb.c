/*
 * XREFs of DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_484aa05d4e8e00993eb11fe3ca1c5d9d___lambda_9a7bfcc99c4e75b6f719d590bcf52609___::_CAnimationCallbackHandler__lambda_484aa05d4e8e00993eb11fe3ca1c5d9d___lambda_9a7bfcc99c4e75b6f719d590bcf52609___ @ 0x180545B8C
 * Callers:
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_484aa05d4e8e00993eb11fe3ca1c5d9d___lambda_9a7bfcc99c4e75b6f719d590bcf52609___::_scalar_deleting_destructor_ @ 0x180545CF0 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_484aa05d4e8e00993eb11fe3ca_ea_180545CF0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_484aa05d4e8e00993eb11fe3ca1c5d9d___lambda_9a7bfcc99c4e75b6f719d590bcf52609___::_CAnimationCallbackHandler__lambda_484aa05d4e8e00993eb11fe3ca1c5d9d___lambda_9a7bfcc99c4e75b6f719d590bcf52609___(
        __int64 a1)
{
  __int64 result; // rax

  result = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 32));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
