/*
 * XREFs of KiSendSoftwareInterrupt @ 0x140446190
 * Callers:
 *     KiSignalThreadForApc @ 0x14020B1E0 (KiSignalThreadForApc.c)
 *     KeUpdateThreadTag @ 0x1402C4800 (KeUpdateThreadTag.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140446060 (KiSynchronizeUserIsolationDomainExit.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x1404C4E10 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140230DF0 (HalpInterruptSendIpi.c)
 */

__int64 __fastcall KiSendSoftwareInterrupt(int a1, char a2)
{
  struct _KPRCB *CurrentPrcb; // rax
  unsigned int v4; // edx
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+2Ch] [rbp-1Ch]

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 31;
  v7 = a1;
  v6 = 6LL;
  ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
  v8 = 0LL;
  if ( a2 != 1 )
    v4 = 47;
  return HalpInterruptSendIpi((unsigned int *)&v6, v4);
}
