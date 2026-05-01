/*
 * XREFs of ?ControlLost@GamingPosturePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1804E2190
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180015BDC (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?RemoveView@ApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z @ 0x1804DF4A4 (-RemoveView@ApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z.c)
 *     ?Provider@GamingPosturePositionerTraceProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1804E47FC (-Provider@GamingPosturePositionerTraceProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?ReleasePrimaryView@GamingPosturePositioner@@AEAAX_N@Z @ 0x1804E49D8 (-ReleasePrimaryView@GamingPosturePositioner@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GamingPosturePositioner::ControlLost(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  const struct _tlgProvider_t *v6; // rax
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = GamingPosturePositionerTraceProvider::Provider();
  if ( *(_DWORD *)v6 > 4u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v6,
      byte_1807DCF33,
      0LL);
  *a4 = 0LL;
  try
  {
    (*(void (**)(void))(*(_QWORD *)a2 + 24LL))();
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x29C,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      v7);
  }
}
