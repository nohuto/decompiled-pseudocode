/*
 * XREFs of ??1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x1800B5EA4
 * Callers:
 *     ??1MPCManagerConnection@@UEAA@XZ @ 0x1800B602C (--1MPCManagerConnection@@UEAA@XZ.c)
 *     ??_GBamoConnection@ISMBamos_AutoBamos@@MEAAPEAXI@Z @ 0x1800B6070 (--_GBamoConnection@ISMBamos_AutoBamos@@MEAAPEAXI@Z.c)
 *     ??_EBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@UEAAPEAXI@Z @ 0x1800B60B0 (--_EBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@UEAAPEAXI@Z.c)
 *     ??_GAnimationDataProviderConnection@@UEAAPEAXI@Z @ 0x180102590 (--_GAnimationDataProviderConnection@@UEAAPEAXI@Z.c)
 *     ??1InputSystemServerConnection@@UEAA@XZ @ 0x18011711C (--1InputSystemServerConnection@@UEAA@XZ.c)
 *     ??1InputSystemInternalClientConnection@@UEAA@XZ @ 0x180130AA0 (--1InputSystemInternalClientConnection@@UEAA@XZ.c)
 *     ??1MPCManagerClientConnection@@UEAA@XZ @ 0x180164B94 (--1MPCManagerClientConnection@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800244C4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002771C (--1-$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180065234 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx
  const struct std::nothrow_t *v5; // rdx
  void *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  const char *v9; // r9

  *(_QWORD *)this = &Microsoft::BamoImpl::BaseBamoConnectionImpl::`vftable';
  v2 = *((_QWORD *)this + 28);
  if ( v2 )
  {
    v3 = *(_QWORD **)(v2 + 528);
    *(_QWORD *)(v2 + 528) = 0LL;
    *((_QWORD *)this + 28) = 0LL;
    if ( v3 )
    {
      do
      {
        v4 = (_QWORD *)v3[66];
        operator delete(v3, (const struct std::nothrow_t *)0x218);
        v3 = v4;
      }
      while ( v4 );
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  std::vector<Windows::UI::Color>::_Tidy((__int64 *)this + 24);
  v6 = (void *)*((_QWORD *)this + 16);
  *((_QWORD *)this + 16) = 0LL;
  if ( v6 )
    operator delete(v6, v5);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 15);
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
    (volatile signed __int32 **)this + 13,
    v7,
    v8,
    v9);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 11);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 10);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 9);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 8);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 7);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 6);
}
