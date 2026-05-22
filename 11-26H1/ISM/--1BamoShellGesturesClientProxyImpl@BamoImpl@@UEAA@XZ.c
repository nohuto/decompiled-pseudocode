/*
 * XREFs of ??1BamoShellGesturesClientProxyImpl@BamoImpl@@UEAA@XZ @ 0x18006B5E8
 * Callers:
 *     ??1ShellGesturesClientProxy@@UEAA@XZ @ 0x18006B5BC (--1ShellGesturesClientProxy@@UEAA@XZ.c)
 *     ??_EBamoShellGesturesClientProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18015E0A0 (--_EBamoShellGesturesClientProxyImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall BamoImpl::BamoShellGesturesClientProxyImpl::~BamoShellGesturesClientProxyImpl(
        BamoImpl::BamoShellGesturesClientProxyImpl *this,
        const struct std::nothrow_t *a2)
{
  void *v3; // rcx

  v3 = (void *)*((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = 0LL;
  if ( v3 )
    operator delete(v3, a2);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 2);
}
