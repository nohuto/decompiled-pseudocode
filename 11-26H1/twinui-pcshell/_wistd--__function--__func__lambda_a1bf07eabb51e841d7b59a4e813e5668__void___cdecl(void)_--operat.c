/*
 * XREFs of _wistd::__function::__func__lambda_a1bf07eabb51e841d7b59a4e813e5668__void___cdecl(void)_::operator()_::_1_::dtor$0 @ 0x18070373C
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall wistd::__function::__func__lambda_a1bf07eabb51e841d7b59a4e813e5668__void___cdecl_void__::operator()_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( *(_WORD *)(*(_QWORD *)(a2 + 64) + 10LL) )
  {
    *(_QWORD *)(a2 + 32) = 192LL;
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 64);
    operator delete(*(void **)(a2 + 40), *(const struct std::nothrow_t **)(a2 + 32));
  }
}
