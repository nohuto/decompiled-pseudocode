/*
 * XREFs of _lambda_24ec9e02e088ddd9b3320f3956162b55_::__lambda_24ec9e02e088ddd9b3320f3956162b55_ @ 0x1802CE09C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_24ec9e02e088ddd9b3320f3956162b55___::_CTaskWrapper__lambda_24ec9e02e088ddd9b3320f3956162b55___ @ 0x180579DBC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_24ec9e02e088ddd9b3320f3956162b55___--_CTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall lambda_24ec9e02e088ddd9b3320f3956162b55_::__lambda_24ec9e02e088ddd9b3320f3956162b55_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1);
}
