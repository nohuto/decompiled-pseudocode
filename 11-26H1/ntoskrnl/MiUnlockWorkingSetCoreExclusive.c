/*
 * XREFs of MiUnlockWorkingSetCoreExclusive @ 0x1402E06D0
 * Callers:
 *     MiSetVaAgeListEx @ 0x14029C850 (MiSetVaAgeListEx.c)
 *     MiAgeWorkingSet @ 0x1402DF150 (MiAgeWorkingSet.c)
 *     MiAgePte @ 0x1402E0900 (MiAgePte.c)
 *     MiLogPageAccess @ 0x140322960 (MiLogPageAccess.c)
 *     MiPeriodicTrimWorkingSet @ 0x1403C3C80 (MiPeriodicTrimWorkingSet.c)
 *     MiDrainOldAccessBuffers @ 0x1403C4E00 (MiDrainOldAccessBuffers.c)
 *     MiDrainSystemAccessLog @ 0x1403C508C (MiDrainSystemAccessLog.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403C6258 (MmAdjustWorkingSetSizeEx.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1404C38A4 (MmQuerySystemWorkingSetInformation.c)
 *     MiCopyWorkingSetFields @ 0x1406E9088 (MiCopyWorkingSetFields.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

_DWORD *__fastcall MiUnlockWorkingSetCoreExclusive(__int64 a1)
{
  _DWORD *result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    result = &unk_140E379C0;
  else
    result = (_DWORD *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    return (_DWORD *)ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(result, retaddr);
  *result = 0;
  return result;
}
