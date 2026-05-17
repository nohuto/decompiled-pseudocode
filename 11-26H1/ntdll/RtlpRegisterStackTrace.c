/*
 * XREFs of RtlpRegisterStackTrace @ 0x1800EC194
 * Callers:
 *     RtlpStackTraceDatabaseLogPrefix @ 0x1800EC0E0 (RtlpStackTraceDatabaseLogPrefix.c)
 * Callees:
 *     RtlExtendMemoryZone @ 0x1800EC380 (RtlExtendMemoryZone.c)
 *     RtlpInitializeStackTraceLog @ 0x180122340 (RtlpInitializeStackTraceLog.c)
 *     RtlpInterlockedPushEntrySList @ 0x180162D10 (RtlpInterlockedPushEntrySList.c)
 *     RtlCompareMemory @ 0x1801631E0 (RtlCompareMemory.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x18016E010 (RtlAllocateMemoryBlockLookaside.c)
 */

_DWORD *__fastcall RtlpRegisterStackTrace(unsigned int a1, const void *a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v5; // rsi
  signed __int64 *v7; // r14
  _DWORD *v8; // rdi
  __int64 v10; // rdi
  signed __int64 v11; // rbp
  _QWORD *v12; // rbx
  _QWORD *v13; // rax
  signed __int64 v14; // r8
  signed __int64 v15; // r12
  signed __int64 v16; // rcx
  signed __int64 v17; // rdx
  signed __int64 v18; // rbx
  signed __int64 v19; // [rsp+68h] [rbp+20h] BYREF

  v3 = RtlpHeapStackTraceLog;
  v5 = a1;
  if ( RtlpHeapStackTraceLog || (RtlpInitializeStackTraceLog(), (v3 = RtlpHeapStackTraceLog) != 0) )
  {
    if ( (_DWORD)v5 )
    {
      v7 = (signed __int64 *)(v3 + 16 * (a3 % 0x191 + 1LL));
      v8 = (_DWORD *)v7[1];
      if ( v8 && v8[2] == a3 && v8[3] == (_DWORD)v5 && RtlCompareMemory(a2, v8 + 4, 8 * v5) == 8 * v5 )
        return v8;
      v10 = 8 * v5;
      while ( 1 )
      {
        v11 = *v7;
        v12 = (_QWORD *)v11;
        v13 = (_QWORD *)*v7;
        v19 = *v7;
        v14 = v11;
        v15 = v11;
        v16 = v11;
        v17 = v11;
        while ( v13 )
        {
          if ( *(_DWORD *)(v16 + 8) == a3
            && *(_DWORD *)(v17 + 12) == (_DWORD)v5
            && RtlCompareMemory(a2, (const void *)(v14 + 16), 8 * v5) == v10 )
          {
            v7[1] = (signed __int64)v12;
            return (_DWORD *)v15;
          }
          v13 = (_QWORD *)*v12;
          v12 = v13;
          v19 = (signed __int64)v13;
          v14 = (signed __int64)v13;
          v15 = (signed __int64)v13;
          v16 = (signed __int64)v13;
          v17 = (signed __int64)v13;
        }
        if ( (int)RtlAllocateMemoryBlockLookaside(*(_QWORD *)RtlpHeapStackTraceLog, v10 + 16, &v19) < 0
          && ((int)RtlExtendMemoryZone(*(_QWORD *)(*(_QWORD *)RtlpHeapStackTraceLog + 16LL)) < 0
           || (int)RtlAllocateMemoryBlockLookaside(*(_QWORD *)RtlpHeapStackTraceLog, v10 + 16, &v19) < 0) )
        {
          break;
        }
        v18 = v19;
        *(_DWORD *)(v19 + 8) = a3;
        *(_DWORD *)(v18 + 12) = v5;
        *(_QWORD *)v18 = v11;
        memmove((void *)(v18 + 16), a2, 8 * v5);
        if ( v11 == _InterlockedCompareExchange64(v7, v18, v11) )
        {
          _InterlockedIncrement((volatile signed __int32 *)(RtlpHeapStackTraceLog + 8));
          return (_DWORD *)v18;
        }
        RtlpInterlockedPushEntrySList(*(_QWORD *)(v18 - 16), v18 - 48);
      }
    }
  }
  return 0LL;
}
