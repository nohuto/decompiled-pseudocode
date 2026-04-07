/*
 * XREFs of ?RtlDllShutdownInProgress@details@wil@@YAEXZ @ 0x18009EDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z @ 0x1800954E0 (-wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall wil::details::RtlDllShutdownInProgress(wil::details *this)
{
  FARPROC NtDllProcedureAddress; // rax
  char v2; // bl

  NtDllProcedureAddress = (FARPROC)`wil::details::RtlDllShutdownInProgress'::`2'::s_pfnRtlDllShutdownInProgress;
  v2 = 0;
  if ( `wil::details::RtlDllShutdownInProgress'::`2'::s_pfnRtlDllShutdownInProgress )
    return ((__int64 (__fastcall *)(wil::details *))NtDllProcedureAddress)(this);
  NtDllProcedureAddress = wil_details_GetNtDllProcedureAddress("RtlDllShutdownInProgress");
  `wil::details::RtlDllShutdownInProgress'::`2'::s_pfnRtlDllShutdownInProgress = (__int64)NtDllProcedureAddress;
  if ( NtDllProcedureAddress )
    return ((__int64 (__fastcall *)(wil::details *))NtDllProcedureAddress)(this);
  return v2;
}
