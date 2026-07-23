/*
 * XREFs of RtlpSetSegmentInfo @ 0x180007690
 * Callers:
 *     RtlpLocalInfoAllocFromCache @ 0x180006940 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180007FA0 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlpLogHeapAffinitySlotAssign @ 0x180150150 (RtlpLogHeapAffinitySlotAssign.c)
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
  int v12; // r9d
  signed __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx

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
              v14 = HIDWORD(*(_QWORD *)(a2 + 160));
              v15 = (unsigned int)(v14 + 1);
              if ( !v12 )
                v15 = (unsigned int)(v14 - 1);
              v13 = *(_QWORD *)(a2 + 160);
            }
            while ( _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(a2 + 160),
                      (unsigned int)(v13 + v12) | (unsigned __int64)(v15 << 32),
                      v13) != v13 );
            *a1 = a2;
            v5 = 1;
            if ( RtlGetCurrentServiceSessionId() )
              v16 = (__int64)NtCurrentPeb()->SharedData + 550;
            else
              v16 = 2147353472LL;
            if ( *(_BYTE *)v16 )
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
