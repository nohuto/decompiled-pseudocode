/*
 * XREFs of MiEndingOffsetWithLock @ 0x14036D000
 * Callers:
 *     MiPfConvertFileOffsetToProto @ 0x14036CC30 (MiPfConvertFileOffsetToProto.c)
 *     MiReadyFlushMdlToWrite @ 0x14036CDF4 (MiReadyFlushMdlToWrite.c)
 *     MiViewMayContainPage @ 0x1404C70F4 (MiViewMayContainPage.c)
 *     MiPfPrepareSequentialReadList @ 0x140A50EA0 (MiPfPrepareSequentialReadList.c)
 *     MiPfAllocateMdls @ 0x140A526F0 (MiPfAllocateMdls.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029BC90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402EE000 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036A848 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiEndingOffsetWithLock(_DWORD *a1, __int64 a2, __int64 a3)
{
  _DWORD *v4; // rbx
  unsigned __int8 CurrentIrql; // si
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  signed __int32 v8; // edx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v4 = (_DWORD *)(*(_QWORD *)a1 + 72LL);
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
    _m_prefetchw(v4);
    v7 = *v4 & 0x7FFFFFFF;
    v6 = _InterlockedCompareExchange(v4, v7 + 1, v7);
    if ( v7 != v6 )
    {
      while ( v6 >= 0 )
      {
        v8 = v6;
        v6 = _InterlockedCompareExchange(v4, v6 + 1, v6);
        if ( v6 == v8 )
          goto LABEL_13;
      }
      ExpWaitForSpinLockSharedAndAcquire(v4, CurrentIrql, a3);
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v4, CurrentIrql);
  }
LABEL_13:
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0x20) != 0 )
    v9 = ((unsigned int)a1[10] + (unsigned __int64)(unsigned int)a1[9]) << 9;
  else
    v9 = ((unsigned int)a1[10] + ((unsigned int)a1[9] | ((unsigned __int64)(a1[8] & 0xFFC0) << 26))) << 12;
  v10 = v9 + ((unsigned __int64)(unsigned int)a1[8] >> 20);
  if ( CurrentIrql == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      _InterlockedAnd(v4, 0xBFFFFFFF);
      _InterlockedDecrement(v4);
      return v10;
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v4, retaddr);
      return v10;
    }
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      _InterlockedAnd(v4, 0xBFFFFFFF);
      _InterlockedDecrement(v4);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v4, retaddr);
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return v10;
  }
}
