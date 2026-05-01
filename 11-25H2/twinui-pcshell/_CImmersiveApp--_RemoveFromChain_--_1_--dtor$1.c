/*
 * XREFs of _CImmersiveApp::_RemoveFromChain_::_1_::dtor$1 @ 0x1806B146B
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CImmersiveApp::_RemoveFromChain_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 80), (const struct std::nothrow_t *)&std::nothrow);
}
