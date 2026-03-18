/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VRGNOBJAPI@@@@SAXPEAX@Z @ 0x1401C44B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14001BC00 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 */

void __fastcall UnexpectedThreadTerminationHandler<RGNOBJAPI>::OnUnexpectedThreadTerminationStatic(OBJECT **a1)
{
  OBJECT *v1; // rcx

  v1 = *a1;
  if ( v1 )
    OBJECT::InterlockedDecrementExclusiveLockCount(v1);
}
