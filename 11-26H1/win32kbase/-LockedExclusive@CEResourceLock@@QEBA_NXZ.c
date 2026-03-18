/*
 * XREFs of ?LockedExclusive@CEResourceLock@@QEBA_NXZ @ 0x14008E5C8
 * Callers:
 *     ?CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ @ 0x140050ED0 (-CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ.c)
 *     ?LockExclusivelyHeld@CInputConfig@@SA_NXZ @ 0x14008E5A0 (-LockExclusivelyHeld@CInputConfig@@SA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CEResourceLock::LockedExclusive(PERESOURCE *this)
{
  return ExIsResourceAcquiredExclusiveLite(*this) != 0;
}
