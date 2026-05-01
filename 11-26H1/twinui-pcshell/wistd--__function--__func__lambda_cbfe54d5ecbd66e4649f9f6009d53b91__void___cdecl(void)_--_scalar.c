/*
 * XREFs of wistd::__function::__func__lambda_cbfe54d5ecbd66e4649f9f6009d53b91__void___cdecl(void)_::_scalar_deleting_destructor_ @ 0x180345200
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall wistd::__function::__func__lambda_cbfe54d5ecbd66e4649f9f6009d53b91__void___cdecl_void__::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
