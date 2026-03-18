/*
 * XREFs of ExTryAcquireSpinLockSharedAtDpcLevel @ 0x140433DB0
 * Callers:
 *     MiFreezeIoPfnNode @ 0x1406F40F0 (MiFreezeIoPfnNode.c)
 * Callees:
 *     ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140433D10 (ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpTryAcquireSpinLockShared @ 0x140433DF0 (ExpTryAcquireSpinLockShared.c)
 */

__int64 __fastcall ExTryAcquireSpinLockSharedAtDpcLevel(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    return (unsigned __int8)ExpTryAcquireSpinLockShared(a1, a2, a3, a4);
  else
    return ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented(a1, a2, a3, a4);
}
