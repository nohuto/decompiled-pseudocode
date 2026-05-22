/*
 * XREFs of ??1BamoWindowsMessageDeliveryProxy@@MEAA@XZ @ 0x18007B24C
 * Callers:
 *     _WindowsMessageDeliveryProxy::WindowsMessageDeliveryProxy_::_1_::dtor$0 @ 0x1801D6DEA (_WindowsMessageDeliveryProxy--WindowsMessageDeliveryProxy_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall BamoWindowsMessageDeliveryProxy::~BamoWindowsMessageDeliveryProxy(
        BamoWindowsMessageDeliveryProxy *this)
{
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 4);
}
