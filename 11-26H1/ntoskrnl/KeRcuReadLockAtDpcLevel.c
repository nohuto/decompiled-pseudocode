/*
 * XREFs of KeRcuReadLockAtDpcLevel @ 0x1405F29C0
 * Callers:
 *     <none>
 * Callees:
 *     KiRcuReadLock @ 0x140223D4C (KiRcuReadLock.c)
 */

__int64 __fastcall KeRcuReadLockAtDpcLevel(__int64 a1, __int64 a2)
{
  LOBYTE(a1) = 2;
  return KiRcuReadLock(a1, a2);
}
