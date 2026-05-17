/*
 * XREFs of LdrpInsertModuleToIndex @ 0x1800FBFF4
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x180118DB0 (LdrpInitializeNtdllDataTableEntry.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x1800FC040 (LdrpInsertModuleToIndexLockHeld.c)
 */

struct _TEB *__fastcall LdrpInsertModuleToIndex(__int64 a1, __int64 a2)
{
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock, a2);
  LdrpInsertModuleToIndexLockHeld(a1, a2);
  return RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
}
