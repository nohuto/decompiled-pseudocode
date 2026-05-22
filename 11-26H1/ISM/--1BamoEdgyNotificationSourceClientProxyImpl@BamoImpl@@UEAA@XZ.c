/*
 * XREFs of ??1BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@UEAA@XZ @ 0x180116FCC
 * Callers:
 *     ??_GBamoEdgyNotificationSourceClientProxy@@MEAAPEAXI@Z @ 0x1801173A0 (--_GBamoEdgyNotificationSourceClientProxy@@MEAAPEAXI@Z.c)
 *     ??_EBamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1801173E0 (--_EBamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall BamoImpl::BamoEdgyNotificationSourceClientProxyImpl::~BamoEdgyNotificationSourceClientProxyImpl(
        BamoImpl::BamoEdgyNotificationSourceClientProxyImpl *this)
{
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 5);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 2);
}
