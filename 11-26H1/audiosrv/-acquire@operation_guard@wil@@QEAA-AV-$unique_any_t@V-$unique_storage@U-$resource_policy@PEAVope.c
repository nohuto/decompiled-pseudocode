/*
 * XREFs of ?acquire@operation_guard@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800DF00C
 * Callers:
 *     ??1operation_guard@wil@@QEAA@XZ @ 0x1800DC740 (--1operation_guard@wil@@QEAA@XZ.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_0e0ad7cefe12d27d8cbf1129b6f60fff_@@X$$V@std@@EEAAXXZ @ 0x1800DEB70 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_0e0ad7cefe12d27d8cbf1129b6f60fff_@@X$$V@std@@EEAAXXZ.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_200caaf72e590f0a6902e90b77a591f6_@@X$$V@std@@EEAAXXZ @ 0x1800DEBC0 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_200caaf72e590f0a6902e90b77a591f6_@@X$$V@std@@EEAAXXZ.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_69d42108dd5c64e5ae696b969e6cde78_@@X$$V@std@@EEAAXXZ @ 0x1800DEC30 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_69d42108dd5c64e5ae696b969e6cde78_@@X$$V@std@@EEAAXXZ.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_a5707e8136b0bf7dfeec04d35a40fcb5_@@X_N@std@@EEAAX$$QEA_N@Z @ 0x1800DEC80 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_a5707e8136b0bf7dfeec04d35a40fcb5_@@X_N@std@@EEAAX$$QEA_.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_c14496d348cd0a3ba83c159c343acbdd_@@X_N@std@@EEAAX$$QEA_N@Z @ 0x1800DECD0 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_c14496d348cd0a3ba83c159c343acbdd_@@X_N@std@@EEAAX$$QEA_.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wil::operation_guard::acquire(__int64 a1, _QWORD *a2)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 4));
  if ( *(_BYTE *)(a1 + 8) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4), 0xFFFFFFFF) == 1 )
    {
      *(_DWORD *)a1 = 1;
      WakeByAddressAll((PVOID)a1);
    }
    *a2 = 0LL;
  }
  else
  {
    *a2 = a1;
  }
  return a2;
}
