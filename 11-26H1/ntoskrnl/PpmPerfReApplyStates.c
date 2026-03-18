/*
 * XREFs of PpmPerfReApplyStates @ 0x1407CE2FC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmPerfSetAllDomainsToUpdate @ 0x140258A18 (PpmPerfSetAllDomainsToUpdate.c)
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 *     PpmCheckCustomRun @ 0x1404BBD70 (PpmCheckCustomRun.c)
 *     PpmUpdateProcessorPolicy @ 0x140A9D7C8 (PpmUpdateProcessorPolicy.c)
 */

void __fastcall PpmPerfReApplyStates(__int64 a1, __int64 a2, unsigned int a3)
{
  PpmAcquireLock((struct _KTHREAD **)&stru_140F10070.SchedulerAssistLastYieldBoostTime, a2, a3);
  PpmPerfSetAllDomainsToUpdate();
  PpmUpdateProcessorPolicy(&stru_140F11D08.SchedulerAssistPriorityFloor, 0LL);
  PpmCheckCustomRun(2LL);
}
