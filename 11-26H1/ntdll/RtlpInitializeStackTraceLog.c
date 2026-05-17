/*
 * XREFs of RtlpInitializeStackTraceLog @ 0x180122340
 * Callers:
 *     RtlpRegisterStackTrace @ 0x1800EC194 (RtlpRegisterStackTrace.c)
 * Callees:
 *     RtlCreateMemoryBlockLookaside @ 0x180075B80 (RtlCreateMemoryBlockLookaside.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180140440 (RtlDestroyMemoryBlockLookaside.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x18016E010 (RtlAllocateMemoryBlockLookaside.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

_UNKNOWN **RtlpInitializeStackTraceLog()
{
  _UNKNOWN **result; // rax
  union _SLIST_HEADER *v1; // rdi
  _QWORD *v2; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  union _SLIST_HEADER *v4; // [rsp+40h] [rbp+8h] BYREF
  void *v5; // [rsp+48h] [rbp+10h] BYREF

  result = &retaddr;
  if ( !RtlpHeapStackTraceLog )
  {
    v4 = 0LL;
    v5 = 0LL;
    result = (_UNKNOWN **)RtlCreateMemoryBlockLookaside(&v4, 0, 0x10000uLL, 0x10uLL, 0x1920uLL);
    if ( (int)result >= 0 )
    {
      v1 = v4;
      if ( (int)RtlAllocateMemoryBlockLookaside(v4, 6432LL, &v5) < 0 )
        return (_UNKNOWN **)RtlDestroyMemoryBlockLookaside(v1);
      v2 = v5;
      memset_thunk_772440563353939046(v5, 0, 0x1920uLL);
      *v2 = v1;
      result = (_UNKNOWN **)_InterlockedCompareExchange64(&RtlpHeapStackTraceLog, (signed __int64)v2, 0LL);
      if ( result )
        return (_UNKNOWN **)RtlDestroyMemoryBlockLookaside(v1);
    }
  }
  return result;
}
