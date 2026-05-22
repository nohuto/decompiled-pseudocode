/*
 * XREFs of ??1BamoDockDeviceProxyImpl@BamoImpl@@UEAA@XZ @ 0x180116F28
 * Callers:
 *     ??_EBamoDockableDeviceProxy@@MEAAPEAXI@Z @ 0x1801171E0 (--_EBamoDockableDeviceProxy@@MEAAPEAXI@Z.c)
 *     ??_EBamoDockDeviceProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180117220 (--_EBamoDockDeviceProxyImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall BamoImpl::BamoDockDeviceProxyImpl::~BamoDockDeviceProxyImpl(
        BamoImpl::BamoDockDeviceProxyImpl *this,
        const struct std::nothrow_t *a2)
{
  void *v3; // rcx

  v3 = (void *)*((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  if ( v3 )
    operator delete(v3, a2);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 2);
}
