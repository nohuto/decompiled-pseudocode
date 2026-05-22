/*
 * XREFs of _BamoImpl::CreateWindowsMessageDeliveryProxy_::_1_::dtor$2 @ 0x1801D6288
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BamoImpl::CreateWindowsMessageDeliveryProxy_::_1_::dtor_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>(
    (_QWORD *)(a2 + 40),
    a2,
    a3,
    a4);
}
