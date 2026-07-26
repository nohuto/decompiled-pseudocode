/*
 * XREFs of ?ndisIfStackTableSubsystemInitialize@@YAXXZ @ 0x140146808
 * Callers:
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x140191604 (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void ndisIfStackTableSubsystemInitialize(void)
{
  KeInitializeSpinLock(&qword_14011E960);
  qword_14011E958 = (__int64)&P;
  P = &P;
}
