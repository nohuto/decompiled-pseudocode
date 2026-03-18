/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@V?$HmgLockResult@VDRVOBJ@@@@@@SAXPEAX@Z @ 0x1401D0A30
 * Callers:
 *     <none>
 * Callees:
 *     ?CleanupRoutine@?$HmgLockResult@VDRVOBJ@@@@QEAAXXZ @ 0x1401D09FC (-CleanupRoutine@-$HmgLockResult@VDRVOBJ@@@@QEAAXXZ.c)
 */

void __fastcall UnexpectedThreadTerminationHandler<HmgLockResult<DRVOBJ>>::OnUnexpectedThreadTerminationStatic(
        OBJECT **a1)
{
  HmgLockResult<DRVOBJ>::CleanupRoutine(a1);
}
