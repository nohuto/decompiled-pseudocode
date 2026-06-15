/*
 * XREFs of _CAudioStream::GetPeakValue_::_1_::dtor$1 @ 0x180163987
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioStream::GetPeakValue_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>::~unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>((__int64 *)(a2 + 40));
}
