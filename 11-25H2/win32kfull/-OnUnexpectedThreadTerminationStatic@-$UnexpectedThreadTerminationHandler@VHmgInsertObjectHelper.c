/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VHmgInsertObjectHelper@@@@SAXPEAX@Z @ 0x14030EA90
 * Callers:
 *     <none>
 * Callees:
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14008A7E0 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 */

void __fastcall UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::OnUnexpectedThreadTerminationStatic(
        __int64 a1)
{
  OBJECT *v1; // rcx

  v1 = *(OBJECT **)(a1 + 32);
  if ( v1 )
    OBJECT::InterlockedDecrementExclusiveLockCount(v1);
}
