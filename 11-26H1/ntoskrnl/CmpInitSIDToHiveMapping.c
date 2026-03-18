/*
 * XREFs of CmpInitSIDToHiveMapping @ 0x140859F24
 * Callers:
 *     CmInitSystem1 @ 0x140CE888C (CmInitSystem1.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x140492250 (KeInitializeGuardedMutex.c)
 */

void CmpInitSIDToHiveMapping()
{
  KeInitializeGuardedMutex((PKGUARDED_MUTEX)&CmpKeyLockTracker.ApcStateFill[8]);
}
