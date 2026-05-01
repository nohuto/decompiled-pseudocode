/*
 * XREFs of _REGKEYINFO::REGKEYINFO_::_1_::dtor$0 @ 0x1806DA42E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall REGKEYINFO::REGKEYINFO_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(*(_QWORD *)(a2 + 48) + 8LL));
}
