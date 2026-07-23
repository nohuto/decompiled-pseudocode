/*
 * XREFs of PpmPerfReApplyStates @ 0x1407D139C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmPerfSetAllDomainsToUpdate @ 0x14025A1F8 (PpmPerfSetAllDomainsToUpdate.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     PpmCheckCustomRun @ 0x1404B5550 (PpmCheckCustomRun.c)
 *     PpmUpdateProcessorPolicy @ 0x140AF0768 (PpmUpdateProcessorPolicy.c)
 */

void __fastcall PpmPerfReApplyStates(__int64 a1, __int64 a2, unsigned int a3)
{
  PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, a2, a3);
  PpmPerfSetAllDomainsToUpdate();
  PpmUpdateProcessorPolicy(&PpmAllowedActions, 0LL);
  PpmCheckCustomRun(2LL);
}
