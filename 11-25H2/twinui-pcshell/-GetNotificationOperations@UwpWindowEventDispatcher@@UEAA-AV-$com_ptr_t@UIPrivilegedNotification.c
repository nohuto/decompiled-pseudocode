/*
 * XREFs of ?GetNotificationOperations@UwpWindowEventDispatcher@@UEAA?AV?$com_ptr_t@UIPrivilegedNotificationOperations@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18040F5A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800E8F1C (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

__int64 *__fastcall UwpWindowEventDispatcher::GetNotificationOperations(__int64 a1, __int64 *a2)
{
  wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
    a2,
    (__int64 *)(a1 + 280));
  return a2;
}
