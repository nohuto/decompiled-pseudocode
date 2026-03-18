/*
 * XREFs of KeCheckProcessorGroupAffinity @ 0x14048BE00
 * Callers:
 *     sub_140542730 @ 0x140542730 (sub_140542730.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCheckProcessorGroupAffinity(__int64 a1, unsigned int a2)
{
  return (unsigned int)(*(_QWORD *)a1 >> *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112]
                                                   + 4LL * a2)) & (*(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112]
                                                                             + 4LL * a2) >> 6 == *(unsigned __int16 *)(a1 + 8));
}
