/*
 * XREFs of ?ndisIfExternalProvidedInterfaceSubsystemInitialize@@YAXXZ @ 0x140146BA0
 * Callers:
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x140191604 (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void ndisIfExternalProvidedInterfaceSubsystemInitialize(void)
{
  KeInitializeSpinLock(&qword_14011E9C0);
  qword_14011E9B8 = (__int64)&qword_14011E9B0;
  qword_14011E9B0 = (__int64)&qword_14011E9B0;
}
