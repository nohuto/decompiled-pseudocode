/*
 * XREFs of MiUnlockWorkingSetCoreExclusive @ 0x1402FE650
 * Callers:
 *     MiSetVaAgeListEx @ 0x14029D300 (MiSetVaAgeListEx.c)
 *     MiAgeWorkingSet @ 0x1402FD0D0 (MiAgeWorkingSet.c)
 *     MiAgePte @ 0x1402FE880 (MiAgePte.c)
 *     MiLogPageAccess @ 0x140320930 (MiLogPageAccess.c)
 *     MiPeriodicTrimWorkingSet @ 0x1403B9E10 (MiPeriodicTrimWorkingSet.c)
 *     MiDrainOldAccessBuffers @ 0x1403BAF90 (MiDrainOldAccessBuffers.c)
 *     MiDrainSystemAccessLog @ 0x1403BB21C (MiDrainSystemAccessLog.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403BC3E8 (MmAdjustWorkingSetSizeEx.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1404C9E74 (MmQuerySystemWorkingSetInformation.c)
 *     MiCopyWorkingSetFields @ 0x1406E43D8 (MiCopyWorkingSetFields.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

_DWORD *__fastcall MiUnlockWorkingSetCoreExclusive(__int64 a1)
{
  _DWORD *result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    result = &unk_140E37840;
  else
    result = (_DWORD *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !LODWORD(stru_140F11D08.WaitStatus) )
    return (_DWORD *)ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(result, retaddr);
  *result = 0;
  return result;
}
