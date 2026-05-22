/*
 * XREFs of ??1DeviceDockClientProxy@@UEAA@XZ @ 0x1801866A8
 * Callers:
 *     ??_GDeviceDockClientProxy@@UEAAPEAXI@Z @ 0x1801866D0 (--_GDeviceDockClientProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18007F710 (--1-$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall DeviceDockClientProxy::~DeviceDockClientProxy(DeviceDockClientProxy *this)
{
  wil::com_ptr_t<SystemContextManager,wil::err_exception_policy>::~com_ptr_t<SystemContextManager,wil::err_exception_policy>((__int64 *)this + 6);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 4);
}
