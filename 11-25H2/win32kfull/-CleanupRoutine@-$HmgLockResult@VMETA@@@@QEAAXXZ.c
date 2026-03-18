/*
 * XREFs of ?CleanupRoutine@?$HmgLockResult@VMETA@@@@QEAAXXZ @ 0x140310FAC
 * Callers:
 *     ??1?$HmgLockResult@VMETA@@@@QEAA@XZ @ 0x140310F80 (--1-$HmgLockResult@VMETA@@@@QEAA@XZ.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@V?$HmgLockResult@VMETA@@@@@@SAXPEAX@Z @ 0x140310FE0 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@V-$HmgLockResult@VMETA.c)
 * Callees:
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14008A7E0 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 */

void __fastcall HmgLockResult<META>::CleanupRoutine(OBJECT **a1)
{
  OBJECT *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    OBJECT::InterlockedDecrementExclusiveLockCount(v2);
    *a1 = 0LL;
  }
}
