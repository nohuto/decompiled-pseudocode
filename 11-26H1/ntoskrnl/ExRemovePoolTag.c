/*
 * XREFs of ExRemovePoolTag @ 0x140346850
 * Callers:
 *     MmFreeContiguousMemory @ 0x140346600 (MmFreeContiguousMemory.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     ExpFreePoolChecks @ 0x140346B10 (ExpFreePoolChecks.c)
 *     ExpPoolTrackerReturnLimit @ 0x140347070 (ExpPoolTrackerReturnLimit.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140347130 (ExpRemovePoolTrackerExpansion.c)
 *     EtwTracePool @ 0x1403CAA34 (EtwTracePool.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExpPoolFlagsToPoolType @ 0x140C16F50 (ExpPoolFlagsToPoolType.c)
 */

__int64 __fastcall ExRemovePoolTag(ULONG_PTR BugCheckParameter2, _DWORD *a2, __int64 *a3, _DWORD *a4)
{
  KIRQL v8; // r11
  int v9; // r9d
  unsigned int v10; // edx
  unsigned int v11; // ebx
  __int64 v12; // r8
  char *v13; // rdx
  int v14; // ecx
  unsigned int v15; // r14d
  __int64 v16; // rbp
  unsigned __int8 v17; // r15
  unsigned int v18; // r14d
  __int64 v19; // r12
  __int64 v20; // rdi
  __int64 v21; // rax
  int StackBase; // r10d
  unsigned __int64 v23; // rdi
  __int64 v24; // r13
  unsigned int v25; // edx
  unsigned int v26; // r11d
  __int64 v27; // r8
  int v29; // r9d
  __int64 v30; // r9
  int v31; // edx
  _BYTE *v32; // r9
  int v33; // [rsp+30h] [rbp-48h] BYREF
  __int64 v34; // [rsp+38h] [rbp-40h]
  char v35; // [rsp+80h] [rbp+8h] BYREF
  _DWORD *v36; // [rsp+88h] [rbp+10h]
  char v37; // [rsp+98h] [rbp+20h] BYREF

  v36 = a2;
  v34 = *a4 & 0x1C0;
  v8 = ExAcquireSpinLockShared(&ExpLargePoolTableLock);
  v9 = 1;
  v10 = (PoolBigPageTableSize - 1) & ((40543 * (BugCheckParameter2 >> 12)) ^ ((40543 * (BugCheckParameter2 >> 12)) >> 32));
  v11 = 0;
  while ( 1 )
  {
    v12 = 32LL * v10;
    if ( *(_QWORD *)((char *)PoolBigPageTable + v12) == BugCheckParameter2 )
      break;
    if ( ++v10 >= (unsigned __int64)PoolBigPageTableSize )
    {
      if ( !v9 )
        goto LABEL_24;
      v10 = 0;
      v9 = 0;
    }
  }
  v13 = (char *)PoolBigPageTable + v12;
  if ( !((char *)PoolBigPageTable + v12) )
LABEL_24:
    KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter2, (unsigned int)*a4, 0LL);
  v14 = *((_DWORD *)v13 + 2);
  v15 = *((_DWORD *)v13 + 3);
  v16 = *((_QWORD *)v13 + 2);
  *a2 = v14;
  *(_QWORD *)a4 = (v15 >> 8) & 0xFFF;
  *a3 = v16;
  if ( v14 == 1819242320 )
  {
    v17 = 0;
    LOWORD(v18) = 0;
  }
  else
  {
    v17 = v15;
    v18 = v15 >> 20;
  }
  _InterlockedDecrement(&ExpPoolBigEntriesInUse);
  _InterlockedIncrement64((volatile signed __int64 *)v13);
  ExReleaseSpinLockShared(&ExpLargePoolTableLock, v8);
  v19 = (unsigned int)*a2;
  v20 = *(_QWORD *)a4;
  v33 = 0;
  v35 = 0;
  if ( (_DWORD)v19 == PoolHitTag )
    __debugbreak();
  v21 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
  {
    v21 = ExpPoolFlagsToPoolType(v20, v20 & 0x10, (unsigned int)&v33, (unsigned int)&v35, (__int64)&v37);
    if ( (int)v21 >= 0 )
    {
      v31 = v33;
      if ( v35 )
        v31 = v33 | 8;
      v21 = EtwTracePool(3618, v31, v19, BugCheckParameter2, v16);
    }
  }
  LODWORD(v21) = KeGetPcr()->Prcb.Number;
  StackBase = (int)stru_140EFF2C0.StackBase;
  v23 = v20 & 0xFFFFFFFFFFFFFFFBuLL;
  v24 = *(&stru_140EFF2C0.ThreadLock + v21);
  v25 = LODWORD(stru_140EFF2C0.StackBase) & ((40543 * v19) ^ ((unsigned __int64)(40543 * v19) >> 32));
  v26 = v25;
  do
  {
    while ( 1 )
    {
      v27 = v24 + 80LL * v25;
      if ( *(_DWORD *)v27 == (_DWORD)v19 )
      {
        ExpPoolTrackerReturnLimit((v23 & 0x100) == 0, v16);
        goto LABEL_15;
      }
      if ( *(_DWORD *)v27 )
        break;
      v29 = *(_DWORD *)(stru_140EFF2C0.QuantumTarget + 80LL * v25);
      if ( !v29 )
        break;
      *(_DWORD *)v27 = v29;
      v30 = *(_QWORD *)(stru_140EFF2C0.QuantumTarget + 80LL * v25 + 72);
      if ( v30 )
        *(_QWORD *)(v27 + 72) = v30;
    }
    v25 = StackBase & (v25 + 1);
  }
  while ( v25 != v26 );
  ExpRemovePoolTrackerExpansion((unsigned int)v19, v16, v23);
LABEL_15:
  if ( v17 )
  {
    v32 = (_BYTE *)(BugCheckParameter2 + v16 - (unsigned __int16)v18);
    while ( v11 < (unsigned __int16)v18 )
    {
      if ( *v32 != v17 )
        KeBugCheckEx(0xC2u, 0x62uLL, BugCheckParameter2, (ULONG_PTR)v32, v17);
      ++v32;
      ++v11;
    }
  }
  return ExpFreePoolChecks(BugCheckParameter2, BugCheckParameter2);
}
