/*
 * XREFs of VfKeIrqlLogRaise @ 0x140C4CD5C
 * Callers:
 *     ViIrqlExAcquireFastMutex_Exit @ 0x140C42590 (ViIrqlExAcquireFastMutex_Exit.c)
 *     ViIrqlExTryToAcquireFastMutex_Exit @ 0x140C425B0 (ViIrqlExTryToAcquireFastMutex_Exit.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140C4CCE4 (ViKeIrqlLogAndTrimMemory.c)
 * Callees:
 *     VfKeIrqlTransitionReserveLogEntry @ 0x140C3A284 (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViKeIrqlLogCommon @ 0x140C4D9E8 (ViKeIrqlLogCommon.c)
 */

char *__fastcall VfKeIrqlLogRaise(char a1, char a2)
{
  char *v3; // rbx

  if ( !ViIrqlTrimAndLog )
    return 0LL;
  v3 = VfKeIrqlTransitionReserveLogEntry(a1, a2);
  ViKeIrqlLogCommon(v3, 2LL);
  return v3;
}
