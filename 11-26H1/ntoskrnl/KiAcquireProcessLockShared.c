/*
 * XREFs of KiAcquireProcessLockShared @ 0x14045BFC0
 * Callers:
 *     KeSetSelectedCpuSetsThread @ 0x14045BD60 (KeSetSelectedCpuSetsThread.c)
 *     KeQueryCpuSetsProcess @ 0x14045BE9C (KeQueryCpuSetsProcess.c)
 *     KeQueryPrimaryGroupProcess @ 0x14045BF08 (KeQueryPrimaryGroupProcess.c)
 *     KeQueryPrimaryGroupAffinityProcess @ 0x14045BF50 (KeQueryPrimaryGroupAffinityProcess.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiAcquireProcessLockShared(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  unsigned __int8 *v3; // rdi
  unsigned __int8 CurrentIrql; // bl
  bool v6; // zf
  _DWORD *v7; // rcx
  __int64 result; // rax
  __int64 v9; // rdx
  int v10; // ett

  v3 = a2;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  v6 = (BYTE6(PerfGlobalGroupMask) & 0x21) == 0;
  v7 = (_DWORD *)(a1 + 64);
  *v3 = CurrentIrql;
  if ( !v6 && !PopHibernateInProgress )
    return ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v7, 0xFFu);
  _m_prefetchw(v7);
  LODWORD(result) = *v7 & 0x7FFFFFFF;
  while ( 1 )
  {
    v9 = (unsigned int)(result + 1);
    v10 = result;
    result = (unsigned int)_InterlockedCompareExchange(v7, v9, result);
    if ( v10 == (_DWORD)result )
      break;
    if ( (int)result < 0 )
    {
      LOBYTE(v9) = -1;
      return ExpWaitForSpinLockSharedAndAcquire(v7, v9, a3);
    }
  }
  return result;
}
