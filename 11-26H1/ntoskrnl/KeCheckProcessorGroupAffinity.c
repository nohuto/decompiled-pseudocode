/*
 * XREFs of KeCheckProcessorGroupAffinity @ 0x140485940
 * Callers:
 *     sub_140544BB0 @ 0x140544BB0 (sub_140544BB0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCheckProcessorGroupAffinity(__int64 a1, unsigned int a2)
{
  return (unsigned int)(*(_QWORD *)a1 >> *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + a2)) & ((unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + a2) >> 6 == *(unsigned __int16 *)(a1 + 8));
}
