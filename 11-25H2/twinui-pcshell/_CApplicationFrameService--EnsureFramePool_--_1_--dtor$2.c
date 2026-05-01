/*
 * XREFs of _CApplicationFrameService::EnsureFramePool_::_1_::dtor$2 @ 0x1806A850D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameService::EnsureFramePool_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::~ComPtr<CApplicationFrameWrapper>((__int64 *)(a2 + 128));
}
