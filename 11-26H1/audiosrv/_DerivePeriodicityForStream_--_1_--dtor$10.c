/*
 * XREFs of _DerivePeriodicityForStream_::_1_::dtor$10 @ 0x1801629EC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DerivePeriodicityForStream_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 168);
}
