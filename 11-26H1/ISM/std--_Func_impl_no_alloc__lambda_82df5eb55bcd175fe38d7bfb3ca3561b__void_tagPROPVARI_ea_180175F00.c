/*
 * XREFs of std::_Func_impl_no_alloc__lambda_82df5eb55bcd175fe38d7bfb3ca3561b__void_tagPROPVARIANT_const_&_::_Copy @ 0x180175F00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_82df5eb55bcd175fe38d7bfb3ca3561b__void_tagPROPVARIANT_const___::_Copy(
        _QWORD *a1,
        _QWORD *a2)
{
  *a2 = off_1801F10F0;
  a2[1] = a1[1];
  a2[2] = a1[2];
  a2[3] = a1[3];
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(a2 + 3);
  return a2;
}
