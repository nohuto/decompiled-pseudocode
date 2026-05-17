/*
 * XREFs of RtlpSetSegmentInfo @ 0x18001C5C0
 * Callers:
 *     RtlpLocalInfoAllocFromCache @ 0x18001B870 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18001CED0 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlpLogHeapAffinitySlotAssign @ 0x1801502A0 (RtlpLogHeapAffinitySlotAssign.c)
 */

__int64 __fastcall RtlpSetSegmentInfo(__int64 *a1, __int64 a2)
{
  unsigned int v5; // edi
  unsigned int v6; // r8d
  unsigned int v7; // edx
  signed __int32 v8; // ebp
  __int64 v9; // rdx
  int v10; // r10d
  signed __int64 v11; // rcx
  __int64 v12; // r9
  signed __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  signed __int64 v16; // r8
  __int64 v17; // rcx

  if ( *a1 == a2 )
    return 1LL;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( MEMORY[0x7FFE036A] > 1u )
    v6 = 100;
  while ( v7 <= v6 )
  {
    v8 = *((_DWORD *)a1 + 8);
    if ( v8 >= 0 )
    {
      if ( !(_WORD)v8 )
        return v5;
      if ( _InterlockedCompareExchange((volatile signed __int32 *)a1 + 8, v8 | 0x80000000, v8) == v8 )
      {
        if ( v8 != -1 )
        {
          if ( v8 )
          {
            v9 = *a1;
            v10 = *((unsigned __int16 *)a1 + 20);
            _m_prefetchw((const void *)(*a1 + 160));
            do
              v11 = *(_QWORD *)(v9 + 160);
            while ( _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(v9 + 160),
                      (unsigned int)(v11 - v10) | ((unsigned __int64)(unsigned int)(HIDWORD(v11) - 1) << 32),
                      v11) != v11 );
            v12 = *((unsigned __int16 *)a1 + 20);
            _m_prefetchw((const void *)(a2 + 160));
            do
            {
              v13 = *(_QWORD *)(a2 + 160);
              v14 = (unsigned int)(HIDWORD(v13) + 1);
              if ( !(_DWORD)v12 )
                v14 = (unsigned int)(HIDWORD(v13) - 1);
              v15 = (unsigned int)(v13 + v12);
              v16 = v15 | (v14 << 32);
            }
            while ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 160), v16, v13) != v13 );
            *a1 = a2;
            v5 = 1;
            if ( (unsigned int)RtlGetCurrentServiceSessionId(v13, v15, v16, v12) )
              v17 = (__int64)NtCurrentPeb()->SharedData + 550;
            else
              v17 = 2147353472LL;
            if ( *(_BYTE *)v17 )
            {
              if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
                RtlpLogHeapAffinitySlotAssign(
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 24LL) + 24LL),
                  a1[1],
                  (unsigned int)LOBYTE(NtCurrentTeb()->HeapThreadData) - 1);
            }
          }
          *((_DWORD *)a1 + 8) = v8;
        }
        return v5;
      }
    }
    ++v7;
  }
  return v5;
}
