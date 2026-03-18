/*
 * XREFs of VfKeIrqlLogRaise @ 0x140C46D4C
 * Callers:
 *     ViIrqlExAcquireFastMutex_Exit @ 0x140C3C580 (ViIrqlExAcquireFastMutex_Exit.c)
 *     ViIrqlExTryToAcquireFastMutex_Exit @ 0x140C3C5A0 (ViIrqlExTryToAcquireFastMutex_Exit.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140C46CD4 (ViKeIrqlLogAndTrimMemory.c)
 * Callees:
 *     VfKeIrqlTransitionReserveLogEntry @ 0x140C34274 (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViKeIrqlLogCommon @ 0x140C479D8 (ViKeIrqlLogCommon.c)
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
