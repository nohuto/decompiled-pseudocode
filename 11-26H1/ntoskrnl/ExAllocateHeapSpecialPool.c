/*
 * XREFs of ExAllocateHeapSpecialPool @ 0x14051A678
 * Callers:
 *     ExAllocateHeapPool @ 0x1403987D0 (ExAllocateHeapPool.c)
 * Callees:
 *     MmDeterminePoolType @ 0x1402609A0 (MmDeterminePoolType.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpFreeHeapSpecialPool @ 0x140345B28 (ExpFreeHeapSpecialPool.c)
 *     RtlpHpSegAlloc @ 0x14034B0CC (RtlpHpSegAlloc.c)
 *     ExpPoolTrackerChargeEntry @ 0x1403979B0 (ExpPoolTrackerChargeEntry.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1403C08E4 (ExpInsertPoolTrackerExpansion.c)
 *     EtwTracePool @ 0x1403C0B34 (EtwTracePool.c)
 *     ExGetHeapFromType @ 0x140413870 (ExGetHeapFromType.c)
 *     ExpPlFindLimitEntry @ 0x1404D6E00 (ExpPlFindLimitEntry.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     KasanPoolAllocateNoInline @ 0x1405DD960 (KasanPoolAllocateNoInline.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExpPoolFlagsToPoolType @ 0x140C10F50 (ExpPoolFlagsToPoolType.c)
 */

unsigned __int64 __fastcall ExAllocateHeapSpecialPool(ULONG_PTR BugCheckParameter2, size_t Size, unsigned int a3)
{
  __int64 v3; // r12
  unsigned int v5; // esi
  ULONG_PTR v6; // rcx
  unsigned __int8 CurrentIrql; // dl
  __int64 v8; // rax
  unsigned __int64 v9; // r14
  char v10; // bl
  size_t v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r13
  __int64 v15; // r15
  __int64 v16; // rax
  __int16 v17; // dx
  int StackBase; // r9d
  unsigned __int64 v19; // r15
  __int64 v20; // r11
  __int64 v21; // r8
  unsigned int v22; // r12d
  unsigned int v23; // r10d
  unsigned int v24; // ecx
  __int64 v25; // r13
  int v26; // r8d
  __int64 v27; // rdx
  _QWORD *LimitEntry; // rax
  int v29; // r11d
  int v30; // r14d
  __int64 v31; // rsi
  __int64 v33; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v34; // [rsp+38h] [rbp-48h]
  void *v35; // [rsp+40h] [rbp-40h]
  __int64 v36; // [rsp+48h] [rbp-38h]
  size_t v37; // [rsp+50h] [rbp-30h]
  __int64 HeapFromType; // [rsp+58h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  unsigned int v40; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v41; // [rsp+D0h] [rbp+50h]
  __int64 v42; // [rsp+D8h] [rbp+58h] BYREF

  v41 = a3;
  v3 = a3;
  v5 = BugCheckParameter2;
  if ( (BugCheckParameter2 & 8) != 0 )
  {
    if ( Size + (unsigned int)ExpCacheAlignExtra > 0xFE0 )
      return 0LL;
    LODWORD(v34) = ExpCacheLineSize;
  }
  else
  {
    LODWORD(v34) = 16;
  }
  v6 = BugCheckParameter2 & 0x1C0;
  if ( v6 != 256 && (ExpPoolFlags & 0x400) != 0 )
    v5 = v5 & 0xFFFFFF3F | 0x40;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > (unsigned __int8)((v6 != 256) + 1) )
    KeBugCheckEx(0xC1u, CurrentIrql, v5, Size, 0x30uLL);
  HeapFromType = ExGetHeapFromType(v5, 0x80000000, 1);
  v8 = RtlpHpSegAlloc(HeapFromType + 320, 4096LL, 4096LL, 4096LL, 4u);
  v9 = v8;
  if ( !v8 )
    return 0LL;
  v10 = MEMORY[0xFFFFF78000000320];
  memset_0((void *)(v8 + 16), MEMORY[0xFFFFF78000000320] | 1, 0xFF0uLL);
  *(_QWORD *)(v9 + 8) = 0LL;
  *(_DWORD *)(v9 + 4) = v3;
  v11 = Size - 8;
  if ( (v5 & 0x400) == 0 )
    v11 = Size;
  *(_DWORD *)v9 = v11;
  v37 = v11;
  *(_BYTE *)(v9 + 2) = v10 | 1;
  if ( (v5 & 0x400) != 0 )
    *(_DWORD *)v9 |= 0x4000u;
  if ( (v5 & 8) != 0 )
    *(_DWORD *)v9 |= 0x2000u;
  v12 = ~((unsigned int)v34 - 1LL);
  v13 = v12 & (v9 - v11 + 4096);
  v14 = 4096 - ((unsigned __int16)v12 & (unsigned __int16)(v9 - v11 + 4096) & 0xFFFu);
  v34 = v14;
  if ( (v5 & 2) == 0 )
    memset_0((void *)(v12 & (v9 - v11 + 4096)), 0, v11);
  v15 = MmDeterminePoolType(v9);
  LODWORD(v33) = 0;
  LOBYTE(v40) = 0;
  LOBYTE(v42) = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (_DWORD)v3 == PoolHitTag )
    __debugbreak();
  v16 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
  {
    v16 = ExpPoolFlagsToPoolType(v15, v15 & 0x10, (unsigned int)&v33, (unsigned int)&v40, (__int64)&v42);
    if ( (int)v16 >= 0 )
    {
      v17 = v33;
      if ( (_BYTE)v40 )
        v17 = v33 | 8;
      v16 = EtwTracePool(0xE20u, v17, v3, v9, v14);
    }
  }
  LODWORD(v16) = KeGetPcr()->Prcb.Number;
  StackBase = (int)stru_140EFEF90.StackBase;
  v19 = v15 & 0xFFFFFFFFFFFFFFFBuLL;
  v20 = PoolTrackTableSize;
  v21 = *((_QWORD *)&stru_140EFEF90.CurrentRunTime + v16);
  v42 = v21;
  v35 = stru_140EFEF90.StackBase;
  v22 = LODWORD(stru_140EFEF90.StackBase) & ((40543 * v3) ^ ((unsigned __int64)(40543 * v3) >> 32));
  v36 = PoolTrackTableSize;
  v23 = v22;
  v40 = v22;
LABEL_27:
  v24 = v41;
  while ( 1 )
  {
    v25 = v21 + 80LL * v22;
    if ( *(_DWORD *)v25 == v24 )
      break;
    if ( *(_DWORD *)v25 )
      goto LABEL_38;
    v26 = *(_DWORD *)(PoolTrackTable + 80LL * v22);
    if ( v26 )
    {
      *(_DWORD *)v25 = v26;
      v21 = v42;
      v27 = *(_QWORD *)(PoolTrackTable + 80LL * v22 + 72);
      if ( v27 )
        *(_QWORD *)(v25 + 72) = v27;
    }
    else
    {
      if ( v22 != v20 - 1 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&stru_140EFEF90.Header.WaitListHead.Blink, &LockHandle);
        v33 = PoolTrackTable;
        if ( !*(_DWORD *)(PoolTrackTable + 80LL * v22) )
        {
          LimitEntry = ExpPlFindLimitEntry(v41);
          *(_QWORD *)(v33 + 80LL * v22 + 72) = LimitEntry;
          *(_QWORD *)(v25 + 72) = LimitEntry;
          *(_DWORD *)(PoolTrackTable + 80LL * v22) = v29;
          *(_DWORD *)v25 = v29;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        StackBase = (int)v35;
        v23 = v40;
        v20 = v36;
        v21 = v42;
        goto LABEL_27;
      }
      v21 = v42;
LABEL_38:
      v22 = StackBase & (v22 + 1);
      if ( v22 == v23 )
      {
        ExpInsertPoolTrackerExpansion(v24, v34, v19);
        v30 = 1;
        goto LABEL_41;
      }
    }
  }
  v30 = ExpPoolTrackerChargeEntry(((v19 >> 8) & 1) == 0, v34, v21 + 80LL * v22);
LABEL_41:
  v31 = v5 & 0x110;
  if ( byte_140FC7BE8 )
    KasanPoolAllocateNoInline(v13 & 0xFFFFF000, 4096, v13, v37, v31 == 256);
  if ( !v30 )
  {
    ExpFreeHeapSpecialPool(HeapFromType, v13);
    return 0LL;
  }
  return v13;
}
