/*
 * XREFs of wistd::__function::__func__CWindowList::RegisterTransparencySystemPolicyChangeEvent_::_2_::_lambda_1__void___cdecl(int_const_&)_::_scalar_deleting_destructor_ @ 0x1800DF7E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall wistd::__function::__func__CWindowList::RegisterTransparencySystemPolicyChangeEvent_::_2_::_lambda_1__void___cdecl_int_const____::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::__function::__base<void (int const &)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x10);
  return a1;
}
