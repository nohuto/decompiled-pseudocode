/*
 * XREFs of RtlpHpSegPageRangeShrink @ 0x180096F44
 * Callers:
 *     RtlpHpSegContextCompact @ 0x180016214 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegFreeInternal @ 0x18001AD38 (RtlpHpSegFreeInternal.c)
 *     RtlpHpSegSuballocatorFree @ 0x180096C50 (RtlpHpSegSuballocatorFree.c)
 *     RtlpHpSegReAlloc @ 0x1800B1A2C (RtlpHpSegReAlloc.c)
 *     RtlpHpSegAlloc @ 0x1800E0094 (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x18006A960 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegFreeRangeInsert @ 0x18006AD78 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpLargeLockAcquire @ 0x180089C88 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpSegSegmentFree @ 0x18008A6AC (RtlpHpSegSegmentFree.c)
 *     RtlpHpSegHeapRemoveSegment @ 0x1800C16E0 (RtlpHpSegHeapRemoveSegment.c)
 */

unsigned int *__fastcall RtlpHpSegPageRangeShrink(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned int v4; // ebp
  __int64 v6; // r14
  _BYTE *v8; // rcx
  char v9; // al
  int v10; // edx
  __int16 v11; // dx
  int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned int *result; // rax
  char v17; // [rsp+50h] [rbp+18h] BYREF

  v3 = a2;
  v4 = *(unsigned __int8 *)(a2 + 31) - a3;
  v6 = a2 + 32LL * a3;
  if ( v4 - 1 > 1 )
  {
    v8 = (_BYTE *)(v6 + 56);
    a2 = v4 - 2;
    do
    {
      *v8 &= ~1u;
      v8 += 32;
      --a2;
    }
    while ( a2 );
  }
  v9 = RtlpHpLargeLockAcquire(a1, a2);
  v10 = *(_DWORD *)(v3 + 28);
  v17 = v9;
  v11 = ~(_WORD)v10;
  if ( *(unsigned __int8 *)(v3 + 31) == v4 )
  {
    LOWORD(v12) = 0;
  }
  else
  {
    *(_BYTE *)(v3 + 31) = a3;
    v12 = a3 << *(_BYTE *)(a1 + 9);
    *(_WORD *)(v3 + 28) = ~(_WORD)v12;
  }
  *(_BYTE *)(v6 + 24) |= 2u;
  *(_BYTE *)(32LL * (v4 - 1) + v6 + 26) = v4 - 1;
  *(_WORD *)(v6 + 28) = ~(v11 - v12);
  *(_BYTE *)(v6 + 31) = v4;
  *(_DWORD *)v6 = -857879331;
  *(_BYTE *)(v6 + 24) &= 0xE3u;
  v13 = RtlpHpSegPageRangeCoalesce(a1, v6, 0, &v17);
  v14 = RtlpHpSegFreeRangeInsert(a1, v13, 0LL);
  v15 = v14;
  if ( v14 )
    RtlpHpSegHeapRemoveSegment(a1, v14);
  result = (unsigned int *)RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
  if ( v15 )
    return RtlpHpSegSegmentFree(a1, v15, 0x7FFFFFFFu, 1);
  return result;
}
