/*
 * XREFs of ?HampSystemQueryProcessIsDebuggerAttached@@YAKPEAX@Z @ 0x180029614
 * Callers:
 *     ?HampHostQueryProcessDebuggedCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180027D48 (-HampHostQueryProcessDebuggedCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     ?RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x180089774 (-RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HampSystemQueryProcessIsDebuggerAttached(void *a1)
{
  __int64 ProcessInformation; // [rsp+48h] [rbp+10h] BYREF

  ProcessInformation = 0LL;
  NtQueryInformationProcess(a1, ProcessDebugPort, &ProcessInformation, 8u, 0LL);
  return ProcessInformation != 0;
}
