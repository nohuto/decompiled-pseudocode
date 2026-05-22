/*
 * XREFs of ??1BamoDataSourcePrincipalImpl@BamoImpl@@UEAA@XZ @ 0x180061BB0
 * Callers:
 *     ??_GDataSourcePrincipal@@UEAAPEAXI@Z @ 0x180061B70 (--_GDataSourcePrincipal@@UEAAPEAXI@Z.c)
 *     ??_GBamoDataSourcePrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180102650 (--_GBamoDataSourcePrincipalImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall BamoImpl::BamoDataSourcePrincipalImpl::~BamoDataSourcePrincipalImpl(
        BamoImpl::BamoDataSourcePrincipalImpl *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  const char *v4; // r9

  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 6);
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
    (volatile signed __int32 **)this + 2,
    v2,
    v3,
    v4);
}
