/*
 * XREFs of __lambda_6df262792ed19d9f37b8132f1161a915_::_lambda_invoker_cdecl__::_1_::dtor$4 @ 0x1806E1988
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall _lambda_6df262792ed19d9f37b8132f1161a915_::_lambda_invoker_cdecl__::_1_::dtor_4(__int64 a1, __int64 a2)
{
  if ( *(_WORD *)(*(_QWORD *)(a2 + 80) + 10LL) )
  {
    *(_QWORD *)(a2 + 32) = 32LL;
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 80);
    operator delete(*(void **)(a2 + 40), *(const struct std::nothrow_t **)(a2 + 32));
  }
}
