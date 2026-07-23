/*
 * XREFs of KiReleaseProcessLockShared @ 0x14045C064
 * Callers:
 *     KeQueryCpuSetsProcess @ 0x14045BE9C (KeQueryCpuSetsProcess.c)
 *     KeQueryPrimaryGroupProcess @ 0x14045BF08 (KeQueryPrimaryGroupProcess.c)
 *     KeQueryPrimaryGroupAffinityProcess @ 0x14045BF50 (KeQueryPrimaryGroupAffinityProcess.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall KiReleaseProcessLockShared(__int64 a1, unsigned __int8 a2)
{
  volatile signed __int32 *v2; // rcx
  unsigned __int64 v3; // rbx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = (volatile signed __int32 *)(a1 + 64);
  v3 = a2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (result = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
  {
    _InterlockedAnd(v2, 0xBFFFFFFF);
    _InterlockedDecrement(v2);
  }
  else
  {
    result = ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v2, retaddr);
  }
  if ( KiIrqlFlags )
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
  __writecr8(v3);
  return result;
}
