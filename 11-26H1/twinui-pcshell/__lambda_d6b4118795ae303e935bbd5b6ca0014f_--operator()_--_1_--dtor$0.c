/*
 * XREFs of __lambda_d6b4118795ae303e935bbd5b6ca0014f_::operator()_::_1_::dtor$0 @ 0x1806F7CE4
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall _lambda_d6b4118795ae303e935bbd5b6ca0014f_::operator()_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( *(_WORD *)(*(_QWORD *)(a2 + 80) + 10LL) )
  {
    *(_QWORD *)(a2 + 32) = 80LL;
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 80);
    operator delete(*(void **)(a2 + 40), *(const struct std::nothrow_t **)(a2 + 32));
  }
}
