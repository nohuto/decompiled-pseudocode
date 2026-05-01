/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PinManager::IsItemPinned_::_1_::dtor$5 @ 0x1806FE4A7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::IsItemPinned_::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  return wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 80);
}
