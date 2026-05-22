/*
 * XREFs of ??1BamoPenDevicePrincipalImpl@BamoImpl@@UEAA@XZ @ 0x180194B44
 * Callers:
 *     ??1BamoPenDevicePrincipal@@MEAA@XZ @ 0x180194B34 (--1BamoPenDevicePrincipal@@MEAA@XZ.c)
 *     ??1PenDevice@@UEAA@XZ @ 0x180194B6C (--1PenDevice@@UEAA@XZ.c)
 *     ??_EBamoPenDevicePrincipal@@MEAAPEAXI@Z @ 0x180194BD0 (--_EBamoPenDevicePrincipal@@MEAAPEAXI@Z.c)
 *     ??_EBamoPenDevicePrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180194C10 (--_EBamoPenDevicePrincipalImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall BamoImpl::BamoPenDevicePrincipalImpl::~BamoPenDevicePrincipalImpl(
        BamoImpl::BamoPenDevicePrincipalImpl *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  const char *v4; // r9

  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 7);
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
    (volatile signed __int32 **)this + 2,
    v2,
    v3,
    v4);
}
