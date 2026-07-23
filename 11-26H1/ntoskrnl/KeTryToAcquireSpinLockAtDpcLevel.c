/*
 * XREFs of KeTryToAcquireSpinLockAtDpcLevel @ 0x140333080
 * Callers:
 *     <none>
 * Callees:
 *     KxTryToAcquireSpinLock @ 0x140332C98 (KxTryToAcquireSpinLock.c)
 */

BOOLEAN __stdcall KeTryToAcquireSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock)
{
  return KxTryToAcquireSpinLock((volatile signed __int32 *)SpinLock);
}
