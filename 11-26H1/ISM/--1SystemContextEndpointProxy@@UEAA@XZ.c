/*
 * XREFs of ??1SystemContextEndpointProxy@@UEAA@XZ @ 0x18014376C
 * Callers:
 *     ??_GSystemContextEndpointProxy@@UEAAPEAXI@Z @ 0x1801437A0 (--_GSystemContextEndpointProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VMPCManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800B5E0C (--1-$com_ptr_t@VMPCManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall SystemContextEndpointProxy::~SystemContextEndpointProxy(SystemContextEndpointProxy *this)
{
  wil::com_ptr_t<MPCManager,wil::err_exception_policy>::~com_ptr_t<MPCManager,wil::err_exception_policy>((__int64 *)this + 8);
  BamoImpl::BamoSystemContextEndpointProxyImpl::~BamoSystemContextEndpointProxyImpl((SystemContextEndpointProxy *)((char *)this + 16));
}
