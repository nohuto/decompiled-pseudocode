/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@SAXPEAX@Z @ 0x1401C66C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14001BC00 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 */

void __fastcall UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::OnUnexpectedThreadTerminationStatic(
        __int64 a1)
{
  OBJECT *v2; // rcx

  v2 = *(OBJECT **)(a1 + 32);
  if ( v2 )
    OBJECT::InterlockedDecrementExclusiveLockCount(v2);
  *(_QWORD *)(a1 + 32) = 0LL;
}
