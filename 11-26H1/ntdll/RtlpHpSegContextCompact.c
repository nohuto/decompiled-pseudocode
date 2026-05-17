/*
 * XREFs of RtlpHpSegContextCompact @ 0x180016214
 * Callers:
 *     RtlpHpHeapCompact @ 0x180016180 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x18006A960 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegFreeRangeInsert @ 0x18006AD78 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegFreeRangeRemove @ 0x18006AF00 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpLargeLockAcquire @ 0x180089C88 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpSegSegmentFree @ 0x18008A6AC (RtlpHpSegSegmentFree.c)
 *     RtlpHpSegPageRangeShrink @ 0x180096F44 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegHeapRemoveSegment @ 0x1800C16E0 (RtlpHpSegHeapRemoveSegment.c)
 *     RtlpHpPgCleanupAllocationForCompaction @ 0x180101CBC (RtlpHpPgCleanupAllocationForCompaction.c)
 */

_QWORD *__fastcall RtlpHpSegContextCompact(__int64 a1)
{
  bool v1; // zf
  _QWORD *v2; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rsi
  _QWORD *v7; // rdx
  _QWORD *i; // rsi
  unsigned __int64 j; // rdi
  __int64 v10; // rcx
  _QWORD *v11; // r9
  _QWORD *v12; // rdx
  _QWORD *result; // rax
  _QWORD *v14; // [rsp+20h] [rbp-10h] BYREF
  _QWORD **v15; // [rsp+28h] [rbp-8h]
  char v16; // [rsp+60h] [rbp+30h] BYREF

  v1 = *(_QWORD *)(a1 + 88) == 0LL;
  v2 = &v14;
  v15 = &v14;
  v14 = &v14;
  if ( !v1 )
  {
    ((void (*)(void))RtlpHpLargeLockAcquire)();
    v4 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0LL;
    RtlReleaseSRWLockExclusive(a1 + 64, v5);
    if ( v4 )
    {
      do
      {
        v6 = *(_QWORD *)v4;
        if ( (*(_BYTE *)(v4 + 24) & 0x1C) == 0x10 )
          RtlpHpPgCleanupAllocationForCompaction(
            *(_QWORD *)(a1 + 144),
            (*(_QWORD *)a1 & v4) + ((unsigned int)((v4 - (*(_QWORD *)a1 & v4)) >> 5) << *(_BYTE *)(a1 + 8)),
            *(unsigned __int8 *)(v4 + 31) << *(_BYTE *)(a1 + 8));
        *(_BYTE *)(v4 + 24) &= 0x9Fu;
        RtlpHpSegPageRangeShrink(a1, v4, 0LL);
        v4 = v6;
      }
      while ( v6 );
    }
    v16 = RtlpHpLargeLockAcquire(a1);
    for ( i = *(_QWORD **)(a1 + 72); i != (_QWORD *)(a1 + 72); i = (_QWORD *)*i )
    {
      for ( j = (unsigned __int64)&i[4 * *(unsigned __int8 *)(a1 + 10)];
            j < (unsigned __int64)(i + 1024);
            j += 32LL * *(unsigned __int8 *)(j + 31) )
      {
        if ( (*(_BYTE *)(j + 24) & 1) == 0 && *(_WORD *)(j + 28) != 0xFFFF )
        {
          RtlpHpSegFreeRangeRemove(a1, j);
          *(_BYTE *)(j + 24) |= 1u;
          v10 = 32LL * ((unsigned int)*(unsigned __int8 *)(j + 31) - 1);
          *(_BYTE *)(v10 + j + 24) |= 1u;
          j = RtlpHpSegPageRangeCoalesce(a1, j, 1LL, &v16);
          v7 = (_QWORD *)RtlpHpSegFreeRangeInsert(a1, j, 0LL);
          if ( v7 )
          {
            i = (_QWORD *)i[1];
            RtlpHpSegHeapRemoveSegment(a1, v7);
            v11 = v15;
            if ( *v15 != &v14 )
              __fastfail(3u);
            v7[1] = v15;
            *v7 = &v14;
            *v11 = v7;
            v15 = (_QWORD **)v7;
            break;
          }
        }
      }
    }
    RtlReleaseSRWLockExclusive(a1 + 64, v7);
    v2 = v14;
  }
  while ( 1 )
  {
    result = &v14;
    if ( v2 == &v14 )
      break;
    v12 = v2;
    v2 = (_QWORD *)*v2;
    RtlpHpSegSegmentFree(a1, v12, 0x7FFFFFFFLL, 1LL);
  }
  return result;
}
