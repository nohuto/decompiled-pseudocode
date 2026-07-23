/*
 * XREFs of ExPoolCleanupExpansionTable @ 0x140524D04
 * Callers:
 *     ExpInsertPoolTrackerExpansion @ 0x1403CA7E4 (ExpInsertPoolTrackerExpansion.c)
 * Callees:
 *     ExpPoolTrackerReturnLimit @ 0x140347070 (ExpPoolTrackerReturnLimit.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140347130 (ExpRemovePoolTrackerExpansion.c)
 *     ExFreeHeapPages @ 0x1403483D8 (ExFreeHeapPages.c)
 *     EtwTracePool @ 0x1403CAA34 (EtwTracePool.c)
 *     ExpPoolFlagsToPoolType @ 0x140C16F50 (ExpPoolFlagsToPoolType.c)
 */

__int64 __fastcall ExPoolCleanupExpansionTable(ULONG_PTR BugCheckParameter3, unsigned __int64 a2)
{
  __int64 v4; // rax
  __int16 v5; // dx
  int StackBase; // r10d
  __int64 v7; // rcx
  int v8; // r11d
  __int64 v9; // rsi
  __int64 v10; // r8
  int v11; // r9d
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  int v16; // [rsp+30h] [rbp-18h] BYREF
  char v17; // [rsp+60h] [rbp+18h] BYREF
  char v18; // [rsp+68h] [rbp+20h] BYREF

  v16 = 0;
  v17 = 0;
  v18 = 0;
  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  v4 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
  {
    v4 = ExpPoolFlagsToPoolType(64, 0, (unsigned int)&v16, (unsigned int)&v17, (__int64)&v18);
    if ( (int)v4 >= 0 )
    {
      v5 = v16;
      if ( v17 )
        v5 = v16 | 8;
      v4 = EtwTracePool(0xE22u, v5, 0x6C6F6F50u, BugCheckParameter3, a2);
    }
  }
  LODWORD(v4) = KeGetPcr()->Prcb.Number;
  StackBase = (int)stru_140EFF2C0.StackBase;
  v7 = (__int64)stru_140EFF2C0.StackBase & 0x40DEDA5;
  v8 = (__int64)stru_140EFF2C0.StackBase & 0x40DEDA5;
  v9 = *(&stru_140EFF2C0.ThreadLock + v4);
  while ( 1 )
  {
    v10 = v9 + 80 * v7;
    if ( *(_DWORD *)v10 == 1819242320 )
      break;
    if ( *(_DWORD *)v10 || (v11 = *(_DWORD *)(stru_140EFF2C0.QuantumTarget + 80 * v7)) == 0 )
    {
      v7 = StackBase & (unsigned int)(v7 + 1);
      if ( (_DWORD)v7 == v8 )
      {
        ExpRemovePoolTrackerExpansion(1819242320, a2, 64LL);
        return ExFreeHeapPages(BugCheckParameter3, v13, v14);
      }
    }
    else
    {
      *(_DWORD *)v10 = v11;
      v12 = *(_QWORD *)(stru_140EFF2C0.QuantumTarget + 80 * v7 + 72);
      if ( v12 )
        *(_QWORD *)(v10 + 72) = v12;
    }
  }
  ExpPoolTrackerReturnLimit(1, a2, v10);
  return ExFreeHeapPages(BugCheckParameter3, v13, v14);
}
