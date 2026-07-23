/*
 * XREFs of PiDmObjectIsEnumerable @ 0x140967EEC
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14094F4E4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 * Callees:
 *     CmpUnlockSiloKeyLockTracker @ 0x140966AAC (CmpUnlockSiloKeyLockTracker.c)
 *     PiDmObjectAcquireSharedLock @ 0x140967DB8 (PiDmObjectAcquireSharedLock.c)
 */

char __fastcall PiDmObjectIsEnumerable(struct _KTHREAD *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char v5; // bl

  PiDmObjectAcquireSharedLock((signed __int64 *)&a1->Header.Lock, a2, a3, a4);
  v5 = a1->QuantumTarget & 1;
  CmpUnlockSiloKeyLockTracker(a1);
  return v5;
}
