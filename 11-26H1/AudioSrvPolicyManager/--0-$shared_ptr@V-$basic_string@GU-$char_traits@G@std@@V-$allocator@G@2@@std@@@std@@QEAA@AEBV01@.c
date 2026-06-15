/*
 * XREFs of ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180017A74
 * Callers:
 *     _lambda_bc5d681da67d9384ebd56f302790ab0c_::_lambda_bc5d681da67d9384ebd56f302790ab0c_ @ 0x180017A48 (_lambda_bc5d681da67d9384ebd56f302790ab0c_--_lambda_bc5d681da67d9384ebd56f302790ab0c_.c)
 *     PbmReportApplicationState @ 0x18002B400 (PbmReportApplicationState.c)
 *     std::_Func_impl_no_alloc__lambda_7fa36116be3e294e551541c666ff9548__void_::_Copy @ 0x180041440 (std--_Func_impl_no_alloc__lambda_7fa36116be3e294e551541c666ff9548__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_0e1598c2378d1c33dd4f2102e3c6083e__void_::_Copy @ 0x1800415B0 (std--_Func_impl_no_alloc__lambda_0e1598c2378d1c33dd4f2102e3c6083e__void_--_Copy.c)
 *     PbmAllowMediaPlaybackForApp @ 0x1800419C0 (PbmAllowMediaPlaybackForApp.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = a2[1];
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  *a1 = *a2;
  a1[1] = a2[1];
  return a1;
}
