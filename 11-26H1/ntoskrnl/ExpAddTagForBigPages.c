/*
 * XREFs of ExpAddTagForBigPages @ 0x14029B070
 * Callers:
 *     ExAllocateContiguousHeapPool @ 0x14034AA60 (ExAllocateContiguousHeapPool.c)
 *     ExInsertPoolTag @ 0x14034AD9C (ExInsertPoolTag.c)
 *     ExAllocateHeapPool @ 0x1403987D0 (ExAllocateHeapPool.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockShared @ 0x14026CEE0 (ExReleaseSpinLockShared.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     ExpResizeBigPageTable @ 0x14029B458 (ExpResizeBigPageTable.c)
 *     ExTryConvertSharedSpinLockExclusive @ 0x14029B680 (ExTryConvertSharedSpinLockExclusive.c)
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x14029B710 (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029BC90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402EE000 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036A848 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpAddTagForBigPages(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int16 a5,
        char a6)
{
  unsigned int v9; // r15d
  unsigned __int64 v10; // rdi
  unsigned __int8 CurrentIrql; // bl
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  volatile signed __int64 *StackLimit; // rdx
  unsigned __int64 SListFaultAddress; // r8
  volatile signed __int64 *v16; // rcx
  char *v17; // r9
  char *v18; // r10
  volatile signed __int64 v19; // rtt
  int v20; // edx
  char *v22; // rax
  bool v23; // cf
  __int64 i; // rcx
  int v25; // ebp
  __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD *v28; // rdi
  void *v29; // rcx
  _QWORD *v30; // r14
  void *v31; // rcx
  PVOID P[9]; // [rsp+20h] [rbp-48h] BYREF
  __int64 retaddr; // [rsp+68h] [rbp+0h]
  int v34; // [rsp+70h] [rbp+8h] BYREF
  int v35; // [rsp+78h] [rbp+10h]

  v35 = a2;
  P[0] = 0LL;
  v9 = 0;
  v10 = (40543 * (a1 >> 12)) ^ ((40543 * (a1 >> 12)) >> 32);
  while ( 1 )
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
      _m_prefetchw((char *)&stru_140EFEF90.Header.WaitListHead.Flink + 4);
      v12 = HIDWORD(stru_140EFEF90.Header.WaitListHead.Flink) & 0x7FFFFFFF;
      while ( 1 )
      {
        v13 = v12;
        v12 = _InterlockedCompareExchange((_DWORD *)&stru_140EFEF90.Header.WaitListHead.Flink + 1, v12 + 1, v12);
        if ( v13 == v12 )
          break;
        if ( v12 < 0 )
        {
          ExpWaitForSpinLockSharedAndAcquire((char *)&stru_140EFEF90.Header.WaitListHead.Flink + 4, CurrentIrql);
          break;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented((char *)&stru_140EFEF90.Header.WaitListHead.Flink + 4, CurrentIrql);
    }
    StackLimit = (volatile signed __int64 *)stru_140EFEF90.StackLimit;
    SListFaultAddress = (unsigned __int64)stru_140EFEF90.SListFaultAddress;
    if ( stru_140EFEF90.StackLimit )
    {
      if ( (void *)ExpPoolBigEntriesInUse != stru_140EFEF90.SListFaultAddress )
        break;
    }
LABEL_26:
    v34 = 0;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      if ( _interlockedbittestandset((_DWORD *)&stru_140EFEF90.Header.WaitListHead.Flink + 1, 0x1Fu) )
        goto LABEL_45;
      for ( i = HIDWORD(stru_140EFEF90.Header.WaitListHead.Flink);
            (HIDWORD(stru_140EFEF90.Header.WaitListHead.Flink) & 0xBFFFFFFF) != 0x80000001;
            i = HIDWORD(stru_140EFEF90.Header.WaitListHead.Flink) )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedOr((_DWORD *)&stru_140EFEF90.Header.WaitListHead.Flink + 1, 0x40000000u);
        KeYieldProcessorEx(&v34);
      }
LABEL_39:
      v25 = ExpResizeBigPageTable(i, StackLimit, P);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        HIDWORD(stru_140EFEF90.Header.WaitListHead.Flink) = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(
          (_DWORD *)&stru_140EFEF90.Header.WaitListHead.Flink + 1,
          retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      if ( !v25 )
      {
        ++ExpBigTableExpansionFailed;
        return 0LL;
      }
      v30 = P[0];
      if ( P[0] )
      {
        do
        {
          v31 = v30;
          v30 = (_QWORD *)*v30;
          ExFreePoolWithTag(v31, 0);
        }
        while ( v30 );
        P[0] = 0LL;
      }
    }
    else
    {
      if ( (unsigned int)ExpTryConvertSharedSpinLockExclusiveInstrumented(
                           (char *)&stru_140EFEF90.Header.WaitListHead.Flink + 4,
                           retaddr,
                           SListFaultAddress) )
        goto LABEL_39;
LABEL_45:
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)&stru_140EFEF90.Header.WaitListHead.Flink + 1, CurrentIrql);
    }
  }
  v16 = (volatile signed __int64 *)((char *)stru_140EFEF90.StackLimit
                                  + 32 * ((unsigned int)v10 & (LODWORD(stru_140EFEF90.SListFaultAddress) - 1)));
  v17 = (char *)v16;
  v18 = (char *)stru_140EFEF90.StackLimit + 32 * (__int64)stru_140EFEF90.SListFaultAddress;
  while ( 1 )
  {
    if ( (*v16 & 1) != 0 )
    {
      v19 = *v16;
      if ( v19 == _InterlockedCompareExchange64(v16, a1, *v16) )
        break;
    }
    v22 = (char *)(v16 + 4);
    ++v9;
    v23 = v16 + 4 < (volatile signed __int64 *)v18;
    v16 = StackLimit;
    if ( v23 )
      v16 = (volatile signed __int64 *)v22;
    if ( v16 == (volatile signed __int64 *)v17 )
      goto LABEL_26;
  }
  *((_DWORD *)v16 + 2) = v35;
  *((_BYTE *)v16 + 12) = a6;
  v20 = (a4 << 8) ^ (unsigned __int8)*((_DWORD *)v16 + 3);
  *((_QWORD *)v16 + 2) = a3;
  *((_DWORD *)v16 + 3) = (a5 << 20) | v20 & 0xFFFFF;
  if ( (a4 & 1) != 0 )
    *((_QWORD *)v16 + 3) = (unsigned __int64)stru_140FC01F0.WaitBlock[1].WaitListEntry.Blink ^ a1;
  _InterlockedIncrement(&ExpPoolBigEntriesInUse);
  if ( v9 < 0x10 || ExpPoolBigEntriesInUse <= (unsigned int)(SListFaultAddress >> 2) )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      _InterlockedAnd((_DWORD *)&stru_140EFEF90.Header.WaitListHead.Flink + 1, 0xBFFFFFFF);
      _InterlockedDecrement((_DWORD *)&stru_140EFEF90.Header.WaitListHead.Flink + 1);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented((char *)&stru_140EFEF90.Header.WaitListHead.Flink + 4, retaddr);
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  else if ( ExTryConvertSharedSpinLockExclusive((PEX_SPIN_LOCK)&stru_140EFEF90.Header.WaitListHead.Flink + 1) == 1 )
  {
    ExpResizeBigPageTable(v27, v26, P);
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)&stru_140EFEF90.Header.WaitListHead.Flink + 1, CurrentIrql);
    v28 = P[0];
    if ( P[0] )
    {
      do
      {
        v29 = v28;
        v28 = (_QWORD *)*v28;
        ExFreePoolWithTag(v29, 0);
      }
      while ( v28 );
    }
  }
  else
  {
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)&stru_140EFEF90.Header.WaitListHead.Flink + 1, CurrentIrql);
  }
  return 1LL;
}
