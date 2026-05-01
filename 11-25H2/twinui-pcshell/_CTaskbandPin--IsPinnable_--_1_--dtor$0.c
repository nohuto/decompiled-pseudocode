/*
 * XREFs of _CTaskbandPin::IsPinnable_::_1_::dtor$0 @ 0x1806AE6CA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CTaskbandPin::IsPinnable_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a2 + 40);
}
