/*
 * XREFs of ?HampPdcBoostForPhaseExit@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x180067738
 * Callers:
 *     ?HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18006C8F0 (-HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 * Callees:
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800142F4 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 */

void __fastcall HampPdcBoostForPhaseExit(struct _HOST_ACTIVITY_MANAGER **a1)
{
  HANDLE CurrentProcess; // rax
  HANDLE v3; // rax
  __int16 ProcessInformation; // [rsp+40h] [rbp+8h] BYREF
  char v5; // [rsp+48h] [rbp+10h] BYREF
  char v6; // [rsp+49h] [rbp+11h]

  ProcessInformation = 0;
  CurrentProcess = GetCurrentProcess();
  NtQueryInformationProcess(CurrentProcess, ProcessPriorityClass, &ProcessInformation, 2u, 0LL);
  v5 = ProcessInformation;
  v6 = 3;
  v3 = GetCurrentProcess();
  NtSetInformationProcess(v3, ProcessPriorityClass, &v5, 2u);
  HampManagerAcquireLockExclusive(*a1);
  if ( !*((_BYTE *)a1 + 89) )
    *((_WORD *)a1 + 44) = ProcessInformation;
}
