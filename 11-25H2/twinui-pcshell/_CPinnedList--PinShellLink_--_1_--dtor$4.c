/*
 * XREFs of _CPinnedList::PinShellLink_::_1_::dtor$4 @ 0x1806A5A64
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPinnedList::PinShellLink_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a2 + 72);
}
