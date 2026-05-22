/*
 * XREFs of ??$emplace_back@AEAV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@AEAV23@@Z @ 0x1800D0FD0
 * Callers:
 *     ?OnHeadEventOccurredWorkerThread@MPCHeadUpdateListener@@QEAAXXZ @ 0x1800652D0 (-OnHeadEventOccurredWorkerThread@MPCHeadUpdateListener@@QEAAXXZ.c)
 * Callees:
 *     ??0?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18007F4B4 (--0-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180082CA4 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@-$v.c)
 */

__int64 *__fastcall std::vector<wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>::emplace_back<wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy> &>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v3; // rcx

  if ( a1[1] == a1[2] )
    return std::vector<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy> const &>(
             a1,
             a1[1],
             a2);
  wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>(
    (__int64 *)a1[1],
    a2);
  v3 = a1[1];
  a1[1] = v3 + 8;
  return (__int64 *)v3;
}
