/*
 * XREFs of MiUnlockWorkingSetCoreShared @ 0x14036E020
 * Callers:
 *     MiCountWslesInPageTableRange @ 0x14029D9E0 (MiCountWslesInPageTableRange.c)
 *     MiRemoveWsle @ 0x1403273B4 (MiRemoveWsle.c)
 *     MiCopyOnWriteInitializeTargetPage @ 0x14036D3E8 (MiCopyOnWriteInitializeTargetPage.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

volatile signed __int32 *__fastcall MiUnlockWorkingSetCoreShared(__int64 a1)
{
  volatile signed __int32 *result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    result = (volatile signed __int32 *)&unk_140E379C0;
  else
    result = (volatile signed __int32 *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    return (volatile signed __int32 *)ExpReleaseSpinLockSharedFromDpcLevelInstrumented(result, retaddr);
  _InterlockedAnd(result, 0xBFFFFFFF);
  _InterlockedDecrement(result);
  return result;
}
