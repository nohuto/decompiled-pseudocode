/*
 * XREFs of __bstr_t::GetAddress_::_1_::dtor$0 @ 0x180705A24
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall _bstr_t::GetAddress_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 48), (const struct std::nothrow_t *)0x18);
}
