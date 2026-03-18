/*
 * XREFs of KeTryToAcquireSpinLockAtDpcLevel @ 0x140331050
 * Callers:
 *     <none>
 * Callees:
 *     KxTryToAcquireSpinLock @ 0x140330C68 (KxTryToAcquireSpinLock.c)
 */

BOOLEAN __stdcall KeTryToAcquireSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock)
{
  return KxTryToAcquireSpinLock((volatile signed __int32 *)SpinLock);
}
