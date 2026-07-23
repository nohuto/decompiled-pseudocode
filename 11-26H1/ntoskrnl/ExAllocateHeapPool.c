/*
 * XREFs of ExAllocateHeapPool @ 0x14039A530
 * Callers:
 *     ExpAllocatePoolWithTagFromNode @ 0x14039A460 (ExpAllocatePoolWithTagFromNode.c)
 * Callees:
 *     ExpAddTagForBigPages @ 0x14029A5D0 (ExpAddTagForBigPages.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlpHpFreeHeap @ 0x140349090 (RtlpHpFreeHeap.c)
 *     RtlpHpAllocateHeapBackend @ 0x14034D110 (RtlpHpAllocateHeapBackend.c)
 *     ExpPoolTrackerChargeEntry @ 0x140399730 (ExpPoolTrackerChargeEntry.c)
 *     RtlpHpAllocateHeap @ 0x140399800 (RtlpHpAllocateHeap.c)
 *     ExFreeHeapPool @ 0x1403A9910 (ExFreeHeapPool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1403CA7E4 (ExpInsertPoolTrackerExpansion.c)
 *     EtwTracePool @ 0x1403CAA34 (EtwTracePool.c)
 *     ExCheckSingleFilter @ 0x14042D60C (ExCheckSingleFilter.c)
 *     ExpSplitCacheAlignedAllocation @ 0x140447ED0 (ExpSplitCacheAlignedAllocation.c)
 *     ExHeapLookasideReplenish @ 0x140461000 (ExHeapLookasideReplenish.c)
 *     ExpPlFindLimitEntry @ 0x1404D05D0 (ExpPlFindLimitEntry.c)
 *     ExAllocateHeapSpecialPool @ 0x1405140E8 (ExAllocateHeapSpecialPool.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     KasanPoolAllocateNoInline @ 0x1405E02D0 (KasanPoolAllocateNoInline.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     RtlHeapZero @ 0x140736E90 (RtlHeapZero.c)
 *     ExpPoolFlagsToPoolType @ 0x140C16F50 (ExpPoolFlagsToPoolType.c)
 */

__int64 __fastcall ExAllocateHeapPool(
        __int64 a1,
        ULONG_PTR a2,
        size_t a3,
        unsigned int a4,
        ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v5; // rbx
  __int16 v7; // r13
  unsigned int v8; // r10d
  ULONG_PTR v9; // rdi
  __int64 v10; // r8
  ULONG_PTR v11; // r14
  unsigned int v12; // ecx
  ULONG_PTR v13; // rdi
  int v14; // r12d
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r15
  void **v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // r15
  __int16 v21; // r8
  __int64 v22; // r13
  _BYTE *v23; // rsi
  unsigned __int64 v24; // rsi
  __int16 v25; // r8
  unsigned __int64 Heap; // rax
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // r10
  unsigned int v30; // r9d
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rdx
  char v34; // al
  int v35; // edx
  int v36; // ecx
  char v37; // dl
  char v38; // cl
  char v39; // r8
  unsigned int v40; // r10d
  char v41; // dl
  __int64 v42; // rax
  ULONG_PTR v43; // r14
  __int64 v44; // r9
  unsigned int v45; // r8d
  __int64 v46; // r13
  int v47; // eax
  __int64 v48; // rcx
  int v49; // r10d
  int v51; // r11d
  __int64 v52; // rax
  __int64 v53; // rcx
  int v54; // r11d
  __int64 v55; // rdx
  __int64 HeapSpecialPool; // rax
  int v57; // r11d
  __int64 LimitEntry; // rax
  __int64 v59; // rcx
  __int64 v60; // r11
  __int64 v61; // r8
  int v62; // edx
  unsigned __int64 v63; // r9
  char v64; // cl
  char v65; // dl
  char v66; // cl
  int v67; // edx
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rcx
  char *v71; // rax
  __int64 v72; // [rsp+30h] [rbp-41h] BYREF
  __int64 v73; // [rsp+38h] [rbp-39h]
  char *StackBase; // [rsp+40h] [rbp-31h]
  char *StackLimit; // [rsp+48h] [rbp-29h]
  unsigned __int64 v76; // [rsp+50h] [rbp-21h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-19h] BYREF
  void *v78; // [rsp+70h] [rbp-1h]
  unsigned int v80; // [rsp+D8h] [rbp+67h] BYREF
  __int64 v81; // [rsp+E0h] [rbp+6Fh] BYREF
  unsigned int v82; // [rsp+E8h] [rbp+77h]

  v82 = a4;
  v5 = 0LL;
  v7 = ~(_BYTE)a2 & 2;
  v8 = a4;
  v9 = a2;
  v10 = a1;
  v11 = 0LL;
  if ( (a2 & 0x140) == 0 && (ExpPoolFlags & 0x400) != 0 )
    v9 = a2 & 0xFFFFFFFFFFFFFF3FuLL | 0x40;
  if ( a3 <= 0xFE0
    && (MmSpecialPoolTag
     && a3
     && ((unsigned int)ExCheckSingleFilter(a4, (unsigned int)MmSpecialPoolTag, a1) || v63 >= a3 + 16 && v63 < a3 + 32)
     || (v9 & 0x100000000LL) != 0) )
  {
    HeapSpecialPool = ExAllocateHeapSpecialPool(v9, a3);
    v11 = HeapSpecialPool;
    if ( HeapSpecialPool )
    {
      _InterlockedIncrement((volatile signed __int32 *)&stru_140EFF2C0.InitialStack);
      return HeapSpecialPool;
    }
    v10 = a1;
    v8 = v82;
  }
  v12 = BugCheckParameter2;
  v13 = v9 & 0xFFF;
  v14 = 1;
  v15 = 1LL;
  if ( a3 )
    v15 = a3;
  v76 = v15;
  if ( (_DWORD)BugCheckParameter2 != 0x80000000 && (unsigned int)BugCheckParameter2 >= (unsigned __int16)KeNumberNodes )
    KeBugCheckEx(0xC2u, 0xEuLL, (unsigned int)BugCheckParameter2, v13 & 0xFFFFFFFFFFFFFDFFuLL, v8);
  v16 = v15;
  StackLimit = (char *)(v13 & 8);
  if ( (v13 & 8) != 0 )
  {
    v16 = v15 + (unsigned int)ExpCacheAlignExtra;
    if ( v16 < v15 )
    {
      v22 = 0LL;
      goto LABEL_23;
    }
  }
  if ( v10 )
  {
    if ( (_DWORD)BugCheckParameter2 == 0x80000000 )
      v12 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
    v19 = *(_QWORD *)(v10 + 16 * (v12 + 5LL));
  }
  else
  {
    if ( (_DWORD)BugCheckParameter2 == 0x80000000 )
      v12 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
    if ( v12 >= HIDWORD(stru_140E6BFE8.Header.WaitListHead.Flink) )
      v12 = 0;
    v17 = &stru_140E6BFE8.SListFaultAddress + 1048 * v12;
    if ( (v13 & 0x10) != 0 )
    {
      v19 = (__int64)v17[3];
    }
    else
    {
      if ( (v13 & 0x100) != 0 )
        v18 = 2LL;
      else
        v18 = (v13 & 0x80u) == 0LL;
      v19 = (__int64)v17[v18];
    }
  }
  v81 = v19;
  if ( v16 > 0xFE0 )
  {
    v24 = (v15 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (((_WORD)v15 + 15) & 0xFF0u) > 0xFC0 || v24 - 4033 > 0xF03E )
      v24 = (v24 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    if ( v24 < v15 )
    {
      v22 = v81;
      goto LABEL_23;
    }
    if ( (v24 & 0xFFF) != 0 || v24 > *(unsigned int *)(v19 + 528) )
    {
      v25 = v7;
      v22 = v81;
      Heap = (unsigned __int64)RtlpHpAllocateHeap(v81, v24, v25);
    }
    else
    {
      v22 = v81;
      Heap = RtlpHpAllocateHeapBackend(v81, v24, v24, ~(_BYTE)v13 & 2);
    }
    v11 = Heap;
    if ( !Heap )
      goto LABEL_24;
    v27 = v82;
    if ( !(unsigned int)ExpAddTagForBigPages(Heap, v82, v24, v13, 0, 0) )
    {
LABEL_95:
      RtlpHpFreeHeap(v22, v11);
      goto LABEL_24;
    }
    LODWORD(v72) = 0;
    LOBYTE(v80) = 0;
    LOBYTE(v81) = 0;
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( (_DWORD)v27 == PoolHitTag )
      __debugbreak();
    v28 = DWORD1(PerfGlobalGroupMask);
    if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    {
      v28 = ExpPoolFlagsToPoolType(v13, v13 & 0x10, (unsigned int)&v72, (unsigned int)&v80, (__int64)&v81);
      if ( (int)v28 >= 0 )
      {
        v67 = v72;
        if ( (_BYTE)v80 )
          v67 = v72 | 8;
        v28 = EtwTracePool(3616, v67, v27, v11, v24);
      }
    }
    LODWORD(v28) = KeGetPcr()->Prcb.Number;
    StackBase = (char *)stru_140EFF2C0.StackBase;
    v29 = *(&stru_140EFF2C0.ThreadLock + v28);
    v81 = v29;
    v30 = LODWORD(stru_140EFF2C0.StackBase) & ((40543 * v27) ^ ((unsigned __int64)(40543 * v27) >> 32));
    StackLimit = (char *)stru_140EFF2C0.StackLimit;
    v72 = v30;
    v80 = v30;
    while ( 1 )
    {
      v31 = 80LL * v30;
      v32 = *(_DWORD *)(v29 + v31);
      v33 = v29 + v31;
      v73 = v31;
      if ( v32 == (_DWORD)v27 )
      {
        v14 = ExpPoolTrackerChargeEntry((((v13 & 0xFFFFFFFFFFFFFFFBuLL) >> 8) & 1) == 0, v24, v29 + v31);
LABEL_47:
        v34 = (v13 & 0x100) != 0 && (v13 & 0x10) == 0;
        if ( !byte_140FC8BD8 )
          goto LABEL_73;
        v35 = v24;
        v36 = v11;
LABEL_87:
        KasanPoolAllocateNoInline(v36, v35, v11, v76, v34);
        goto LABEL_73;
      }
      if ( v32 )
      {
LABEL_93:
        v30 = (unsigned int)StackBase & (v30 + 1);
        v72 = v30;
        if ( v30 == v80 )
        {
          ExpInsertPoolTrackerExpansion((unsigned int)v27, v24, v13 & 0xFFFFFFFFFFFFFFFBuLL);
          goto LABEL_47;
        }
      }
      else
      {
        v57 = *(_DWORD *)(v31 + stru_140EFF2C0.QuantumTarget);
        if ( v57 )
        {
          *(_DWORD *)v33 = v57;
          v61 = *(_QWORD *)(v31 + stru_140EFF2C0.QuantumTarget + 72);
          if ( v61 )
            *(_QWORD *)(v33 + 72) = v61;
        }
        else
        {
          if ( (char *)v30 == StackLimit - 1 )
            goto LABEL_93;
          KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
          v73 += stru_140EFF2C0.QuantumTarget;
          if ( !*(_DWORD *)v73 )
          {
            LimitEntry = ExpPlFindLimitEntry((unsigned int)v27);
            *(_QWORD *)(v73 + 72) = LimitEntry;
            v59 = v81;
            *(_QWORD *)(v81 + v60 + 72) = LimitEntry;
            *(_DWORD *)(v60 + stru_140EFF2C0.QuantumTarget) = v27;
            *(_DWORD *)(v59 + v60) = v27;
          }
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v30 = v72;
          v29 = v81;
        }
      }
    }
  }
  v20 = (v16 + 31) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v20 < 0x201 )
    goto LABEL_21;
  if ( v20 > 0xF80 )
    goto LABEL_21;
  v68 = *((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned __int64)(unsigned int)v20 >> 4));
  v20 = (unsigned __int16)RtlpBucketBlockSizes[v68];
  v69 = (unsigned int)(v68 - 33);
  v70 = *(_QWORD *)(v19 + 56);
  v80 = v69;
  v73 = v70;
  if ( !v70 )
    goto LABEL_21;
  v71 = (char *)(v70 + ((v69 + 1) << 6));
  StackBase = v71;
  ++*((_DWORD *)v71 + 5);
  if ( *(_WORD *)v71 )
  {
    v23 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)v71);
    if ( v23 )
      goto LABEL_138;
    v19 = v81;
    v71 = StackBase;
    v70 = v73;
  }
  ++*((_DWORD *)v71 + 6);
  v23 = (_BYTE *)ExHeapLookasideReplenish(v70, v80, v19, v20);
LABEL_138:
  if ( (v13 & 2) != 0 )
  {
    if ( v23 )
      goto LABEL_141;
  }
  else if ( v23 )
  {
    RtlHeapZero(v23 + 16, v20 - 16);
LABEL_141:
    v22 = v81;
    goto LABEL_22;
  }
LABEL_21:
  v21 = v7;
  v22 = v81;
  v23 = RtlpHpAllocateHeap(v81, v20, v21);
  if ( !v23 )
    goto LABEL_23;
LABEL_22:
  v11 = (ULONG_PTR)v23;
  switch ( v13 & 0x1C0 )
  {
    case 0x40uLL:
      v37 = 0;
      break;
    case 0x80uLL:
      v37 = 0;
      break;
    case 0x100uLL:
      v37 = 1;
      if ( (v13 & 0x10) == 0 )
        v37 = 1;
      break;
    default:
LABEL_23:
      if ( !v11 )
        goto LABEL_24;
      goto LABEL_95;
  }
  v38 = v37 | 0x20;
  if ( (v13 & 4) == 0 )
    v38 = v37;
  v39 = v38;
  if ( (v13 & 2) != 0 )
    v39 = v38;
  if ( (v13 & 0x100000629LL) != 0 )
  {
    v64 = v39 | 4;
    if ( !StackLimit )
      v64 = v39;
    v65 = v64 | 0x80;
    if ( (v13 & 0x200) == 0 )
      v65 = v64;
    v66 = v65 | 0x40;
    if ( (v13 & 0x400) == 0 )
      v66 = v65;
    v39 = v66;
    if ( (v13 & 1) != 0 )
    {
      v39 = v66 | 8;
      if ( (v13 & 0x20) != 0 )
        v39 = v66;
    }
    else if ( (v13 & 0x20) != 0 )
    {
      v39 = v66 | 0x10;
    }
  }
  v40 = v82;
  v23[2] = v20 >> 4;
  *((_DWORD *)v23 + 1) = v40;
  *v23 = 0;
  v41 = v39 | 8;
  if ( (v13 & 1) == 0 )
    v41 = v39;
  LODWORD(v72) = 0;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v23[3] = v41 & 0x6D | 2;
  LOBYTE(v80) = 0;
  LOBYTE(v81) = 0;
  LockHandle.LockQueue = 0LL;
  if ( v40 == PoolHitTag )
    __debugbreak();
  v42 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
  {
    v42 = ExpPoolFlagsToPoolType(v13 & 0x3CD, 0, (unsigned int)&v72, (unsigned int)&v80, (__int64)&v81);
    if ( (int)v42 >= 0 )
    {
      v62 = v72;
      if ( (_BYTE)v80 )
        v62 = v72 | 8;
      v42 = EtwTracePool(3616, v62, v82, (int)v23 + 16, v20);
    }
    v40 = v82;
  }
  LODWORD(v42) = KeGetPcr()->Prcb.Number;
  v43 = v13 & 0x3C9;
  v78 = stru_140EFF2C0.StackBase;
  v44 = *(&stru_140EFF2C0.ThreadLock + v42);
  StackBase = (char *)stru_140EFF2C0.StackLimit;
  v81 = v44;
  v45 = (unsigned __int64)stru_140EFF2C0.StackBase & ((40543 * v40) ^ ((40543 * (unsigned __int64)v40) >> 32));
  v72 = v45;
  v80 = v45;
  do
  {
    while ( 1 )
    {
      v46 = 80LL * v45;
      v47 = *(_DWORD *)(v44 + v46);
      v48 = v44 + v46;
      if ( v47 == v40 )
      {
        v14 = ExpPoolTrackerChargeEntry(((v43 >> 8) & 1) == 0, v20, v44 + v46);
        goto LABEL_68;
      }
      if ( v47 )
        break;
      v51 = *(_DWORD *)(stru_140EFF2C0.QuantumTarget + 80LL * v45);
      if ( v51 )
      {
        *(_DWORD *)v48 = v51;
        v55 = *(_QWORD *)(stru_140EFF2C0.QuantumTarget + v46 + 72);
        if ( v55 )
          *(_QWORD *)(v48 + 72) = v55;
      }
      else
      {
        if ( (char *)v45 == StackBase - 1 )
          break;
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        v73 = v46 + stru_140EFF2C0.QuantumTarget;
        if ( !*(_DWORD *)(v46 + stru_140EFF2C0.QuantumTarget) )
        {
          v52 = ExpPlFindLimitEntry(v82);
          *(_QWORD *)(v73 + 72) = v52;
          v53 = v81;
          *(_QWORD *)(v81 + v46 + 72) = v52;
          *(_DWORD *)(stru_140EFF2C0.QuantumTarget + v46) = v54;
          *(_DWORD *)(v53 + v46) = v54;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v45 = v72;
        v44 = v81;
        v40 = v82;
      }
    }
    v45 = (unsigned int)v78 & (v45 + 1);
    v72 = v45;
  }
  while ( v45 != v80 );
  ExpInsertPoolTrackerExpansion(v40, v20, v43);
LABEL_68:
  v49 = (int)v23;
  if ( StackLimit )
    v23 = (_BYTE *)ExpSplitCacheAlignedAllocation(v23);
  v11 = (ULONG_PTR)(v23 + 16);
  v34 = (v13 & 0x100) != 0 && (v13 & 0x10) == 0;
  if ( byte_140FC8BD8 )
  {
    v35 = v20;
    v36 = v49;
    goto LABEL_87;
  }
LABEL_73:
  if ( v14 )
  {
    v5 = v11;
    if ( v11 )
      return v5;
  }
  else
  {
    ExFreeHeapPool(v11);
  }
LABEL_24:
  if ( (v13 & 0x20) != 0 )
    RtlRaiseStatus(-1073741670);
  return v5;
}
