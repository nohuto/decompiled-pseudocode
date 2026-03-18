/*
 * XREFs of ??1?$HmgShareLockResult@VSURFACE@@@@QEAA@XZ @ 0x1401F1200
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x14002F4E0 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ?CleanupRoutine@?$HmgShareLockResult@VSURFACE@@@@QEAAXXZ @ 0x1401F1224 (-CleanupRoutine@-$HmgShareLockResult@VSURFACE@@@@QEAAXXZ.c)
 */

void __fastcall HmgShareLockResult<SURFACE>::~HmgShareLockResult<SURFACE>(__int64 a1)
{
  HmgShareLockResult<SURFACE>::CleanupRoutine();
  PopThreadGuardedObject((_QWORD *)(a1 + 8));
}
