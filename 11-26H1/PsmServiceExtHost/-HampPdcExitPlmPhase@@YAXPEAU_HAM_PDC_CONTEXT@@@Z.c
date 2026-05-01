/*
 * XREFs of ?HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18006C8F0
 * Callers:
 *     ?HampPdcPlmPhaseNotificationCallback@@YAJPEAXK@Z @ 0x18001B490 (-HampPdcPlmPhaseNotificationCallback@@YAJPEAXK@Z.c)
 *     ?HampPdcPlmControlCallback@@YAJPEAXK@Z @ 0x18006B240 (-HampPdcPlmControlCallback@@YAJPEAXK@Z.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007BFDC (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180014294 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800142F4 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x180019C64 (-HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampPdcBoostForPhaseExit@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x180067738 (-HampPdcBoostForPhaseExit@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 */

void __fastcall HampPdcExitPlmPhase(struct _HOST_ACTIVITY_MANAGER **a1)
{
  struct _HOST_ACTIVITY_MANAGER *v2; // rcx
  struct _HOST_ACTIVITY_MANAGER *v3; // rcx
  HANDLE CurrentProcess; // rax

  HampPdcBoostForPhaseExit(a1);
  v2 = *a1;
  *((_DWORD *)a1 + 21) = 0;
  HampManagerReleaseLockExclusive(v2);
  HampPdcNotifyCsState(a1);
  HampManagerAcquireLockExclusive(*a1);
  v3 = *a1;
  a1[12] = (struct _HOST_ACTIVITY_MANAGER *)((char *)a1[12] + 1);
  HampManagerReleaseLockExclusive(v3);
  RtlWakeAddressAll(a1 + 12);
  TpWaitForWork(a1[8], 0LL);
  HampManagerAcquireLockExclusive(*a1);
  if ( *((_BYTE *)a1 + 89) )
  {
    CurrentProcess = GetCurrentProcess();
    NtSetInformationProcess(CurrentProcess, ProcessPriorityClass, a1 + 11, 2u);
    *((_BYTE *)a1 + 89) = 0;
  }
  HampManagerReleaseLockExclusive(*a1);
}
