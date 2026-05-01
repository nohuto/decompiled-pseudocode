/*
 * XREFs of _CPinnedList::InternalModify_::_1_::dtor$12 @ 0x18070608F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPinnedList::InternalModify_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a2 + 360);
}
