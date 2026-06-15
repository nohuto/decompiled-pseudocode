/*
 * XREFs of _TsSessionCreate_::_1_::dtor$3 @ 0x18004CC64
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TsSessionCreate_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  std::unique_ptr<DuckingDescriptorAndId>::~unique_ptr<DuckingDescriptorAndId>((DuckingDescriptorAndId **)(a2 + 64));
}
