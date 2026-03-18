/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@V?$HmgShareLockResult@VSURFACE@@@@@@SAXPEAX@Z @ 0x1401F1270
 * Callers:
 *     <none>
 * Callees:
 *     ?CleanupRoutine@?$HmgShareLockResult@VSURFACE@@@@QEAAXXZ @ 0x1401F1224 (-CleanupRoutine@-$HmgShareLockResult@VSURFACE@@@@QEAAXXZ.c)
 */

void __fastcall UnexpectedThreadTerminationHandler<HmgShareLockResult<SURFACE>>::OnUnexpectedThreadTerminationStatic(
        unsigned int **a1)
{
  HmgShareLockResult<SURFACE>::CleanupRoutine(a1);
}
