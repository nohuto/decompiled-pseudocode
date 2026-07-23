/*
 * XREFs of KiSendSoftwareInterrupt @ 0x14043EC90
 * Callers:
 *     KiSignalThreadForApc @ 0x14020B2C0 (KiSignalThreadForApc.c)
 *     KeUpdateThreadTag @ 0x14030F4C0 (KeUpdateThreadTag.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x1404BE7C0 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140232750 (HalpInterruptSendIpi.c)
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
