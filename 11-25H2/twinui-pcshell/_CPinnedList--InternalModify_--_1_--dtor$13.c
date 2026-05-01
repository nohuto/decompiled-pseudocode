/*
 * XREFs of _CPinnedList::InternalModify_::_1_::dtor$13 @ 0x1806DD456
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPinnedList::InternalModify_::_1_::dtor_13(__int64 a1, __int64 a2)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a2 + 240);
}
