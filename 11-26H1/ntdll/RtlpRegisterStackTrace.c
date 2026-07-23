/*
 * XREFs of RtlpRegisterStackTrace @ 0x1800EB364
 * Callers:
 *     RtlpStackTraceDatabaseLogPrefix @ 0x1800EB2B0 (RtlpStackTraceDatabaseLogPrefix.c)
 * Callees:
 *     RtlExtendMemoryZone @ 0x1800EB550 (RtlExtendMemoryZone.c)
 *     RtlpInitializeStackTraceLog @ 0x1801220E0 (RtlpInitializeStackTraceLog.c)
 *     RtlpInterlockedPushEntrySList @ 0x180162C10 (RtlpInterlockedPushEntrySList.c)
 *     RtlCompareMemory @ 0x1801630E0 (RtlCompareMemory.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x18016D010 (RtlAllocateMemoryBlockLookaside.c)
 */

void **__fastcall RtlpRegisterStackTrace(unsigned int a1, const void *a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v5; // rsi
  __int64 v7; // r14
  _DWORD *v8; // rdi
  __int64 v10; // rdi
  void **v11; // rbp
  void **v12; // rbx
  void **v13; // rax
  void **v14; // r8
  void **v15; // r12
  void **v16; // rcx
  void **v17; // rdx
  _DWORD *v18; // rbx
  PVOID Block; // [rsp+68h] [rbp+20h] BYREF

  v3 = RtlpHeapStackTraceLog;
  v5 = a1;
  if ( RtlpHeapStackTraceLog || (RtlpInitializeStackTraceLog(), (v3 = RtlpHeapStackTraceLog) != 0) )
  {
    if ( (_DWORD)v5 )
    {
      v7 = v3 + 16 * (a3 % 0x191 + 1LL);
      v8 = *(_DWORD **)(v7 + 8);
      if ( v8 && v8[2] == a3 && v8[3] == (_DWORD)v5 && RtlCompareMemory(a2, v8 + 4, 8 * v5) == 8 * v5 )
        return (void **)v8;
      v10 = 8 * v5;
      while ( 1 )
      {
        v11 = *(void ***)v7;
        v12 = v11;
        v13 = *(void ***)v7;
        Block = *(PVOID *)v7;
        v14 = v11;
        v15 = v11;
        v16 = v11;
        v17 = v11;
        while ( v13 )
        {
          if ( *((_DWORD *)v16 + 2) == a3
            && *((_DWORD *)v17 + 3) == (_DWORD)v5
            && RtlCompareMemory(a2, v14 + 2, 8 * v5) == v10 )
          {
            *(_QWORD *)(v7 + 8) = v12;
            return v15;
          }
          v13 = (void **)*v12;
          v12 = v13;
          Block = v13;
          v14 = v13;
          v15 = v13;
          v16 = v13;
          v17 = v13;
        }
        if ( RtlAllocateMemoryBlockLookaside(*(PVOID *)RtlpHeapStackTraceLog, v10 + 16, &Block) < 0
          && ((int)RtlExtendMemoryZone(*(_QWORD *)(*(_QWORD *)RtlpHeapStackTraceLog + 16LL), 0x10000LL) < 0
           || RtlAllocateMemoryBlockLookaside(*(PVOID *)RtlpHeapStackTraceLog, v10 + 16, &Block) < 0) )
        {
          break;
        }
        v18 = Block;
        *((_DWORD *)Block + 2) = a3;
        v18[3] = v5;
        *(_QWORD *)v18 = v11;
        memmove(v18 + 4, a2, 8 * v5);
        if ( v11 == (void **)_InterlockedCompareExchange64(
                               (volatile signed __int64 *)v7,
                               (signed __int64)v18,
                               (signed __int64)v11) )
        {
          _InterlockedIncrement((volatile signed __int32 *)(RtlpHeapStackTraceLog + 8));
          return (void **)v18;
        }
        RtlpInterlockedPushEntrySList(*((_QWORD *)v18 - 2), v18 - 12);
      }
    }
  }
  return 0LL;
}
