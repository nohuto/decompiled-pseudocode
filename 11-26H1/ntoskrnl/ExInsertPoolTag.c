/*
 * XREFs of ExInsertPoolTag @ 0x14034CE1C
 * Callers:
 *     MiAllocateContiguousMemory @ 0x14034C30C (MiAllocateContiguousMemory.c)
 * Callees:
 *     ExpAddTagForBigPages @ 0x14029A5D0 (ExpAddTagForBigPages.c)
 *     ExpPoolTrackerReturnLimit @ 0x140347070 (ExpPoolTrackerReturnLimit.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140347130 (ExpRemovePoolTrackerExpansion.c)
 *     ExpInsertPoolTracker @ 0x14034CF24 (ExpInsertPoolTracker.c)
 *     EtwTracePool @ 0x1403CAA34 (EtwTracePool.c)
 *     ExpCleanupBigTag @ 0x1406D00B0 (ExpCleanupBigTag.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExpPoolFlagsToPoolType @ 0x140C16F50 (ExpPoolFlagsToPoolType.c)
 */

__int64 __fastcall ExInsertPoolTag(unsigned int a1, ULONG_PTR a2, unsigned __int64 a3, __int64 a4, char a5)
{
  unsigned int v5; // ebx
  __int64 v6; // rsi
  char v9; // r15
  unsigned __int16 v10; // r12
  unsigned __int64 v11; // rdi
  void *v13; // rcx
  __int64 v14; // rax
  int v15; // edx
  int StackBase; // r10d
  __int64 v17; // rbp
  unsigned int v18; // edx
  unsigned int v19; // r11d
  __int64 v20; // r8
  int v21; // r9d
  __int64 v22; // r9
  int v23; // [rsp+70h] [rbp+18h] BYREF
  char v24; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0;
  v6 = a1;
  v9 = 0;
  v10 = 0;
  if ( (a5 & 1) != 0 )
  {
    v13 = (void *)(a2 + a3);
    if ( (((_DWORD)a2 + (_DWORD)a3) & 0xFFF) != 0 )
    {
      v9 = MEMORY[0xFFFFF78000000320] | 1;
      v10 = 4096 - ((unsigned __int16)v13 & 0xFFF);
      memset_0(v13, MEMORY[0xFFFFF78000000320] | 1, v10);
    }
  }
  if ( a3 < a3 + 4095 )
  {
    v11 = (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    if ( (unsigned int)ExpAddTagForBigPages(a2, (unsigned int)v6, v11, 136, v10, v9) )
    {
      if ( (unsigned int)ExpInsertPoolTracker((unsigned int)v6, (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL, 136LL, a2) )
      {
        return 1;
      }
      else
      {
        v23 = 0;
        a5 = 0;
        if ( (_DWORD)v6 == PoolHitTag )
          __debugbreak();
        v14 = DWORD1(PerfGlobalGroupMask);
        if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
        {
          v14 = ExpPoolFlagsToPoolType(136, 0, (unsigned int)&v23, (unsigned int)&a5, (__int64)&v24);
          if ( (int)v14 >= 0 )
          {
            v15 = v23;
            if ( a5 )
              v15 = v23 | 8;
            v14 = EtwTracePool(3618, v15, v6, a2, (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL);
          }
        }
        LODWORD(v14) = KeGetPcr()->Prcb.Number;
        StackBase = (int)stru_140EFF2C0.StackBase;
        v17 = *(&stru_140EFF2C0.ThreadLock + v14);
        v18 = LODWORD(stru_140EFF2C0.StackBase) & ((40543 * v6) ^ ((unsigned __int64)(40543 * v6) >> 32));
        v19 = v18;
        while ( 1 )
        {
          v20 = v17 + 80LL * v18;
          if ( *(_DWORD *)v20 == (_DWORD)v6 )
            break;
          if ( *(_DWORD *)v20 || (v21 = *(_DWORD *)(stru_140EFF2C0.QuantumTarget + 80LL * v18)) == 0 )
          {
            v18 = StackBase & (v18 + 1);
            if ( v18 == v19 )
            {
              ExpRemovePoolTrackerExpansion(v6, v11, 136LL);
              goto LABEL_25;
            }
          }
          else
          {
            *(_DWORD *)v20 = v21;
            v22 = *(_QWORD *)(stru_140EFF2C0.QuantumTarget + 80LL * v18 + 72);
            if ( v22 )
              *(_QWORD *)(v20 + 72) = v22;
          }
        }
        ExpPoolTrackerReturnLimit(1, v11, v20);
LABEL_25:
        ExpCleanupBigTag(a2);
      }
    }
  }
  return v5;
}
