/*
 * XREFs of ??1BamoSystemContextEndpointProxyImpl@BamoImpl@@UEAA@XZ @ 0x180116FF4
 * Callers:
 *     ??_GBamoInputSystemInternalProxy@@MEAAPEAXI@Z @ 0x1801174A0 (--_GBamoInputSystemInternalProxy@@MEAAPEAXI@Z.c)
 *     ??_EBamoSystemContextEndpointProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1801174E0 (--_EBamoSystemContextEndpointProxyImpl@BamoImpl@@UEAAPEAXI@Z.c)
 *     ??1SystemContextEndpointProxy@@UEAA@XZ @ 0x18014376C (--1SystemContextEndpointProxy@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall BamoImpl::BamoSystemContextEndpointProxyImpl::~BamoSystemContextEndpointProxyImpl(
        BamoImpl::BamoSystemContextEndpointProxyImpl *this)
{
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 5);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 4);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 2);
}
