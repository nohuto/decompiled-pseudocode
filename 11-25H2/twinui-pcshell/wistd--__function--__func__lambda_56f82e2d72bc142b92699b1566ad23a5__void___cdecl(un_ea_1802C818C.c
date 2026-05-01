/*
 * XREFs of wistd::__function::__func__lambda_56f82e2d72bc142b92699b1566ad23a5__void___cdecl(unsigned_long_const_&)_::__func__lambda_56f82e2d72bc142b92699b1566ad23a5__void___cdecl(unsigned_long_const_&)_ @ 0x1802C818C
 * Callers:
 *     ?RegisterForPackageUpdatesWNF@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801C5558 (-RegisterForPackageUpdatesWNF@CScreenClippingExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wistd::__function::__func__lambda_56f82e2d72bc142b92699b1566ad23a5__void___cdecl_unsigned_long_const____::__func__lambda_56f82e2d72bc142b92699b1566ad23a5__void___cdecl_unsigned_long_const____(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rdx

  *a1 = &off_1806FDFD0;
  v2 = *a2;
  v3 = a2 + 1;
  a1[1] = v2;
  a1[2] = 0LL;
  if ( a1 + 2 != v3 )
  {
    a1[2] = *v3;
    *v3 = 0LL;
  }
  return a1;
}
