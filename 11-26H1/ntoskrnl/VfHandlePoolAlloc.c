/*
 * XREFs of VfHandlePoolAlloc @ 0x140C4A310
 * Callers:
 *     ExAllocatePoolWithTagFromNode @ 0x140399FE0 (ExAllocatePoolWithTagFromNode.c)
 *     CcFlushCachePriv @ 0x14039A060 (CcFlushCachePriv.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     IovAllocateMdl @ 0x140C26A70 (IovAllocateMdl.c)
 *     IovAllocateWorkItem @ 0x140C26BB0 (IovAllocateWorkItem.c)
 *     ViIrpAllocateLockedPacket @ 0x140C327C0 (ViIrpAllocateLockedPacket.c)
 *     ViSpIoSetCompletionRoutineEx_Exit @ 0x140C499E0 (ViSpIoSetCompletionRoutineEx_Exit.c)
 *     ViSpRtlReplaceStringBuffer @ 0x140C49E34 (ViSpRtlReplaceStringBuffer.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithTagPriority @ 0x14045ECF0 (ExAllocatePoolWithTagPriority.c)
 *     ExIsSpecialPoolAddress @ 0x14047E9E4 (ExIsSpecialPoolAddress.c)
 *     ViGrowPoolAllocation @ 0x140648F70 (ViGrowPoolAllocation.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExpPoolFlagsToPoolType @ 0x140C16F50 (ExpPoolFlagsToPoolType.c)
 *     ViTargetIncrementCounter @ 0x140C2F778 (ViTargetIncrementCounter.c)
 *     VfFillAllocatedMemory @ 0x140C2FA48 (VfFillAllocatedMemory.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x140C3A918 (VfFaultsIsSystemSufficientlyBooted.c)
 *     ExAllocatePoolSanityChecks @ 0x140C492A4 (ExAllocatePoolSanityChecks.c)
 *     ViPostPoolAllocation @ 0x140C4A790 (ViPostPoolAllocation.c)
 *     ViPtLogPoolTraceWrapper @ 0x140C4B06C (ViPtLogPoolTraceWrapper.c)
 *     VfTargetDriversGetVerifierData @ 0x140C4CB68 (VfTargetDriversGetVerifierData.c)
 */

PVOID __fastcall VfHandlePoolAlloc(
        POOL_TYPE PoolType,
        __int64 BugCheckParameter3,
        ULONG_PTR a3,
        unsigned int a4,
        EX_POOL_PRIORITY Priority,
        __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  PSLIST_ENTRY v8; // r14
  unsigned int v9; // esi
  __int64 v11; // rbx
  POOL_TYPE v12; // ebp
  _SLIST_HEADER *VerifierData; // r13
  __int64 v14; // r12
  EX_POOL_PRIORITY v15; // r15d
  __int64 PoolWithTagPriority; // rax
  __int64 v17; // rbx
  __int64 v18; // r12
  unsigned int v19; // r15d
  _SLIST_ENTRY *v21; // rax
  size_t v22; // rdi
  __int64 v23; // rcx
  unsigned int i; // edx
  char v25[4]; // [rsp+40h] [rbp-58h] BYREF
  int v26; // [rsp+44h] [rbp-54h]
  unsigned int v27; // [rsp+48h] [rbp-50h]
  size_t v28; // [rsp+50h] [rbp-48h]
  ULONG_PTR v29; // [rsp+58h] [rbp-40h]
  POOL_TYPE v30; // [rsp+A0h] [rbp+8h] BYREF
  int v31; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v32; // [rsp+B8h] [rbp+20h] BYREF

  v32 = a4;
  v30 = PoolType;
  v8 = 0LL;
  v9 = a4;
  v26 = 0;
  v27 = 0;
  v11 = BugCheckParameter3;
  v12 = PoolType;
  VerifierData = 0LL;
  if ( BugCheckParameter3 )
  {
    if ( (int)ExpPoolFlagsToPoolType(BugCheckParameter3, 0, (int *)&v30, v25, &v31) < 0 )
    {
LABEL_40:
      if ( a6 )
        return (PVOID)ExAllocatePool3(v11, (struct _KLOCK_ENTRIES *)a3, v9, a6, a7);
      else
        return (PVOID)ExAllocatePool2(v11, a3, v9);
    }
    v12 = v30;
  }
  v14 = a8;
  if ( !KernelVerifier )
    goto LABEL_3;
  if ( (v12 & 0x80u) == 0 )
  {
    v12 |= 0x80u;
    if ( v11 )
      v11 |= 0x200uLL;
  }
  else
  {
    v26 = 1;
    VerifierData = (_SLIST_HEADER *)VfTargetDriversGetVerifierData(a8);
    if ( !VerifierData )
    {
      if ( !v11 )
        return ExAllocatePoolWithTagPriority(v12, a3, v9, Priority);
      goto LABEL_40;
    }
  }
LABEL_3:
  if ( (MmVerifierData & 1) != 0 )
  {
    ExAllocatePoolSanityChecks(v12, a3, &v32, v14);
    v9 = v32;
  }
  v31 = 0;
  if ( !a3 && (unsigned int)VfVerifyMode <= 1 )
  {
    v31 = 1;
    a3 = 1LL;
  }
  v29 = a3;
  v28 = a3;
  _InterlockedIncrement(&dword_140F08A30);
  if ( (v12 & 2) != 0 && (VfRuleClasses & 4) != 0 && (unsigned int)VfFaultsIsSystemSufficientlyBooted() )
    CarReportRuleViolationFromNt(194, 154LL, (int)v12 & 0xFFFFFFFFFFFFFF7FuLL, a3, v9, 2u, v14);
  v15 = Priority;
  if ( (VfRuleClasses & 1) != 0 || DifpSpecialPoolEnabled )
  {
    if ( (Priority & 9) == 0 )
    {
      if ( MmSpecialPoolCatchOverruns == 1 )
        v15 = Priority | 8;
      else
        v15 = Priority | 9;
    }
    if ( v11 )
      v11 |= 0x100000000uLL;
  }
  if ( (VfRuleClasses & 8) != 0
    && !_bittest(&VfOptionFlags, 0xCu)
    && (v12 & 0x20) == 0
    && v9 != 1316118851
    && v9 != 1850304854 )
  {
    if ( !v26 )
      VerifierData = (_SLIST_HEADER *)VfTargetDriversGetVerifierData(v14);
    if ( VerifierData && a3 + 8 >= a3 )
    {
      v8 = RtlpInterlockedPopEntrySList(VerifierData + 5);
      if ( v8 || (v8 = ViGrowPoolAllocation(VerifierData)) != 0LL )
      {
        v12 |= 0x40u;
        a3 += 8LL;
        if ( !v11 )
          goto LABEL_11;
        v11 |= 0x400uLL;
      }
    }
    else
    {
      ++dword_140F08A5C;
    }
  }
  if ( !v11 )
  {
LABEL_11:
    PoolWithTagPriority = (__int64)ExAllocatePoolWithTagPriority(v12, a3, v9, v15);
    goto LABEL_12;
  }
  if ( a6 )
    PoolWithTagPriority = ExAllocatePool3(v11, (struct _KLOCK_ENTRIES *)a3, v9, a6, a7);
  else
    PoolWithTagPriority = ExAllocatePool2(v11, a3, v9);
LABEL_12:
  v17 = PoolWithTagPriority;
  if ( !PoolWithTagPriority )
  {
    ++dword_140F08A48;
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a8, 176LL);
    if ( v8 )
      RtlpInterlockedPushEntrySList(VerifierData + 5, v8);
    if ( (v12 & 0x10) != 0 )
      RtlRaiseStatus(-1073741670);
    return 0LL;
  }
  v18 = a8;
  if ( v31 && (VfRuleClasses & 8) != 0 )
  {
    v23 = 3LL * (((unsigned __int8)_InterlockedExchangeAdd(&ViBugcheckWorkaroundLogIndex, 1u) + 1) & 0xF);
    ViBugcheckWorkaroundLog[2 * v23] = 1;
    qword_140FF31E8[v23] = v18;
    qword_140FF31F0[v23] = PoolWithTagPriority;
  }
  v19 = 0;
  _InterlockedIncrement(&dword_140F08A34);
  if ( (unsigned int)ExIsSpecialPoolAddress(PoolWithTagPriority) == 1 )
  {
    v19 = 1;
  }
  else if ( a3 <= 0xFE0 )
  {
    goto LABEL_17;
  }
  _InterlockedIncrement(&dword_140F08A38);
LABEL_17:
  if ( v8 )
  {
    *((_QWORD *)&v8->Next + 1) = v18;
    v8->Next = (_SLIST_ENTRY *)(v17 | v19);
    v21 = (_SLIST_ENTRY *)v29;
    if ( !v19 )
      v21 = (_SLIST_ENTRY *)a3;
    v8[1].Next = v21;
    *((_QWORD *)&v8[1].Next + 1) = v9;
    ViPostPoolAllocation(v8, (unsigned int)v12);
  }
  if ( (VfRuleClasses & 8) != 0 )
  {
    if ( (unsigned int)(DifpPoolTagsSize - 1) <= 9 )
    {
      for ( i = v27; i < DifpPoolTagsSize; ++i )
      {
        if ( *((_DWORD *)&DifpPoolTags + i) == v9 )
          goto LABEL_43;
      }
      v22 = v28;
    }
    else
    {
LABEL_43:
      v22 = v28;
      ViPtLogPoolTraceWrapper(v17, v9, v28, 0LL);
    }
    if ( v8 && !v19 && (v12 & 0x400) == 0 )
      VfFillAllocatedMemory((void *)v17, v22);
  }
  return (PVOID)v17;
}
