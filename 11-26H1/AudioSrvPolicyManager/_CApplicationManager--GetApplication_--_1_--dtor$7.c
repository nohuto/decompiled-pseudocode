/*
 * XREFs of _CApplicationManager::GetApplication_::_1_::dtor$7 @ 0x18004CF50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

volatile signed __int32 *__fastcall CApplicationManager::GetApplication_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<CApplication>::~ComPtr<CApplication>((volatile signed __int32 **)(a2 + 128));
}
