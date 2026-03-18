/*
 * XREFs of PsGetCurrentThreadId @ 0x140464C40
 * Callers:
 *     PoShutdownBugCheck @ 0x1407D0FB0 (PoShutdownBugCheck.c)
 *     EtwpCovSampContextPruneModules @ 0x14093DA40 (EtwpCovSampContextPruneModules.c)
 *     HalpNotifyActorIfPmuAvailable @ 0x140B110C8 (HalpNotifyActorIfPmuAvailable.c)
 *     HalpRequestPmuAccess @ 0x140B5BF20 (HalpRequestPmuAccess.c)
 * Callees:
 *     <none>
 */

HANDLE PsGetCurrentThreadId(void)
{
  return *(HANDLE *)&KeGetCurrentThread()[1].CurrentRunTime;
}
