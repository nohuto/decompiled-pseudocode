/*
 * XREFs of _Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected_::_1_::dtor$3 @ 0x1801D62C4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected_::_1_::dtor_3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>(
    (_QWORD *)(a2 + 64),
    a2,
    a3,
    a4);
}
