/*
 * XREFs of CmpInitializeGlobalKeyLockTracker @ 0x14085BAD0
 * Callers:
 *     CmInitSystem1 @ 0x140CE888C (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

LIST_ENTRY *CmpInitializeGlobalKeyLockTracker()
{
  LIST_ENTRY *result; // rax

  result = &CmpKeyLockTracker.Header.WaitListHead;
  *(_QWORD *)&CmpKeyLockTracker.Header.Lock = 0LL;
  CmpKeyLockTracker.Header.WaitListHead.Blink = &CmpKeyLockTracker.Header.WaitListHead;
  CmpKeyLockTracker.Header.WaitListHead.Flink = &CmpKeyLockTracker.Header.WaitListHead;
  return result;
}
