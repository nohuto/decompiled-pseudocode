/*
 * XREFs of _Win32PrimaryAppProxy::Win32PrimaryAppProxy_::_1_::dtor$2 @ 0x1806F1B89
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Win32PrimaryAppProxy::Win32PrimaryAppProxy_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(*(void **)(a2 + 32));
}
