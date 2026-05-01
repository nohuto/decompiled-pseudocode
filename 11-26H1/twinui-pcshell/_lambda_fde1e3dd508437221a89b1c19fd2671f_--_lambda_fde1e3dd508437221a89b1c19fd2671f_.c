/*
 * XREFs of _lambda_fde1e3dd508437221a89b1c19fd2671f_::_lambda_fde1e3dd508437221a89b1c19fd2671f_ @ 0x18030D700
 * Callers:
 *     ?OnIdleStateFlagsChanged@DesktopBlueLightReductionManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x180099410 (-OnIdleStateFlagsChanged@DesktopBlueLightReductionManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z.c)
 *     ?OnMessage@DesktopBlueLightReductionManager@@UEAAJI_K_J@Z @ 0x1801D8790 (-OnMessage@DesktopBlueLightReductionManager@@UEAAJI_K_J@Z.c)
 *     _lambda_95ac369ff7c54e9b7c0e7f066758ab94_::operator() @ 0x18030D8D4 (_lambda_95ac369ff7c54e9b7c0e7f066758ab94_--operator().c)
 * Callees:
 *     ??0?$com_ptr_t@VDesktopBlueLightReductionManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVDesktopBlueLightReductionManager@@@Z @ 0x18021CDA4 (--0-$com_ptr_t@VDesktopBlueLightReductionManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVDesk.c)
 */

__int64 __fastcall lambda_fde1e3dd508437221a89b1c19fd2671f_::_lambda_fde1e3dd508437221a89b1c19fd2671f_(
        __int64 a1,
        __int64 a2,
        volatile int **a3)
{
  __int64 v3; // r9

  *(_QWORD *)a1 = a2;
  wil::com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>::com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>(
    (volatile int **)(a1 + 8),
    *a3);
  return v3;
}
