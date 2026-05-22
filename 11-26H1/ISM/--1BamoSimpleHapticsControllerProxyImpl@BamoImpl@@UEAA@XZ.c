/*
 * XREFs of ??1BamoSimpleHapticsControllerProxyImpl@BamoImpl@@UEAA@XZ @ 0x1801170E0
 * Callers:
 *     ??_EBamoSimpleHapticsControllerProxy@@MEAAPEAXI@Z @ 0x180117620 (--_EBamoSimpleHapticsControllerProxy@@MEAAPEAXI@Z.c)
 *     ??_GBamoSimpleHapticsControllerProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180117660 (--_GBamoSimpleHapticsControllerProxyImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall BamoImpl::BamoSimpleHapticsControllerProxyImpl::~BamoSimpleHapticsControllerProxyImpl(
        BamoImpl::BamoSimpleHapticsControllerProxyImpl *this)
{
  const struct std::nothrow_t *v2; // rdx
  void *v3; // rcx

  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 6);
  v3 = (void *)*((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v3 )
    operator delete(v3, v2);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 2);
}
