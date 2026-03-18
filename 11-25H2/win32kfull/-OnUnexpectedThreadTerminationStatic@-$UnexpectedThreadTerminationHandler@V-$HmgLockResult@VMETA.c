/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@V?$HmgLockResult@VMETA@@@@@@SAXPEAX@Z @ 0x140310FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?CleanupRoutine@?$HmgLockResult@VMETA@@@@QEAAXXZ @ 0x140310FAC (-CleanupRoutine@-$HmgLockResult@VMETA@@@@QEAAXXZ.c)
 */

void __fastcall UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic(
        OBJECT **a1)
{
  HmgLockResult<META>::CleanupRoutine(a1);
}
