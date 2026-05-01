/*
 * XREFs of wistd::__function::__func__lambda_2ac7e78171f5987cb68832f690693247__void___cdecl(void)_::__clone @ 0x1805588F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *__fastcall wistd::__function::__func__lambda_2ac7e78171f5987cb68832f690693247__void___cdecl_void__::__clone(
        __int64 a1,
        _QWORD *a2)
{
  *a2 = &off_18072CD98;
  a2[1] = *(_QWORD *)(a1 + 8);
  return wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
           a2 + 2,
           (__int64 *)(a1 + 16));
}
