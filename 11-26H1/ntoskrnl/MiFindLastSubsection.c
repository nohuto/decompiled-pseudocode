/*
 * XREFs of MiFindLastSubsection @ 0x14044E5C0
 * Callers:
 *     MiComputeDataFlushRange @ 0x1404866EC (MiComputeDataFlushRange.c)
 *     MiCanFileBeTruncatedInternal @ 0x1404ABAD4 (MiCanFileBeTruncatedInternal.c)
 *     MmExtendSection @ 0x140A58080 (MmExtendSection.c)
 *     MmFlushVirtualMemory @ 0x140A5CF70 (MmFlushVirtualMemory.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029BC90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402EE000 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036A848 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiFindLastSubsection(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // di
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  signed __int32 v7; // edx
  __int64 v8; // rax
  __int64 i; // rsi
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( (_DWORD)a2 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      _m_prefetchw((const void *)(a1 + 72));
      v6 = *(_DWORD *)(a1 + 72) & 0x7FFFFFFF;
      v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 72), v6 + 1, v6);
      if ( v6 != v5 )
      {
        while ( v5 >= 0 )
        {
          v7 = v5;
          v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 72), v5 + 1, v5);
          if ( v5 == v7 )
            goto LABEL_15;
        }
        ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)(a1 + 72), CurrentIrql, a3);
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented((_DWORD *)(a1 + 72), CurrentIrql);
    }
  }
LABEL_15:
  v8 = *(_QWORD *)(a1 + 288);
  for ( i = 0LL; v8; v8 = *(_QWORD *)(v8 + 8) )
    i = v8;
  if ( CurrentIrql != 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      _InterlockedAnd((volatile signed __int32 *)(a1 + 72), 0xBFFFFFFF);
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 72));
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented((volatile signed __int32 *)(a1 + 72), retaddr);
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return i - 56;
}
