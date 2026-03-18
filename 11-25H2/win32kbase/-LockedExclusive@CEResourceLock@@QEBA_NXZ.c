/*
 * XREFs of ?LockedExclusive@CEResourceLock@@QEBA_NXZ @ 0x1401F78F4
 * Callers:
 *     ?LockExclusivelyHeld@CInputConfig@@SA_NXZ @ 0x1401479E0 (-LockExclusivelyHeld@CInputConfig@@SA_NXZ.c)
 *     ?CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ @ 0x140186234 (-CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CEResourceLock::LockedExclusive(PERESOURCE *this)
{
  return ExIsResourceAcquiredExclusiveLite(*this) != 0;
}
