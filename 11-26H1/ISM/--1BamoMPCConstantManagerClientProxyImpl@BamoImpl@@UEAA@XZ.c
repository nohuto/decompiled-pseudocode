/*
 * XREFs of ??1BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA@XZ @ 0x180164AA0
 * Callers:
 *     ??_GBamoMPCConstantManagerClientProxy@@MEAAPEAXI@Z @ 0x180164E40 (--_GBamoMPCConstantManagerClientProxy@@MEAAPEAXI@Z.c)
 *     ??_EBamoMPCManagerProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180164E80 (--_EBamoMPCManagerProxyImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall BamoImpl::BamoMPCConstantManagerClientProxyImpl::~BamoMPCConstantManagerClientProxyImpl(
        BamoImpl::BamoMPCConstantManagerClientProxyImpl *this)
{
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 4);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 2);
}
