/*
 * XREFs of ??1BamoInputSystemInternalPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x180131DF8
 * Callers:
 *     ??1BamoInputSystemInternalPrincipal@@MEAA@XZ @ 0x180131DE8 (--1BamoInputSystemInternalPrincipal@@MEAA@XZ.c)
 *     ??_EBamoInputSystemInternalPrincipal@@MEAAPEAXI@Z @ 0x180131E30 (--_EBamoInputSystemInternalPrincipal@@MEAAPEAXI@Z.c)
 *     ??_GBamoInputSystemInternalPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180131E70 (--_GBamoInputSystemInternalPrincipalImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall BamoImpl::BamoInputSystemInternalPrincipalImpl::~BamoInputSystemInternalPrincipalImpl(
        BamoImpl::BamoInputSystemInternalPrincipalImpl *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  const char *v4; // r9

  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 6);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 5);
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
    (volatile signed __int32 **)this + 2,
    v2,
    v3,
    v4);
}
