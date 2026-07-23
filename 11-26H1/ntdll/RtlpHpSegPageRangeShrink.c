/*
 * XREFs of RtlpHpSegPageRangeShrink @ 0x180071824
 * Callers:
 *     RtlpHpSegFreeInternal @ 0x180005E18 (RtlpHpSegFreeInternal.c)
 *     RtlpHpSegContextCompact @ 0x180061944 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegSuballocatorFree @ 0x180071530 (RtlpHpSegSuballocatorFree.c)
 *     RtlpHpSegReAlloc @ 0x18008159C (RtlpHpSegReAlloc.c)
 *     RtlpHpSegAlloc @ 0x1800DD93C (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegSegmentFree @ 0x18006DAE4 (RtlpHpSegSegmentFree.c)
 *     RtlpHpLargeLockAcquire @ 0x18007100C (RtlpHpLargeLockAcquire.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x18008ADB0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegFreeRangeInsert @ 0x18008B1C8 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegHeapRemoveSegment @ 0x1800BEE70 (RtlpHpSegHeapRemoveSegment.c)
 */

void __fastcall RtlpHpSegPageRangeShrink(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebp
  __int64 v6; // r14
  _BYTE *v8; // rcx
  __int64 v9; // rdx
  char v10; // al
  int v11; // edx
  __int16 v12; // dx
  int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  char v17; // [rsp+50h] [rbp+18h] BYREF

  v4 = *(unsigned __int8 *)(a2 + 31) - a3;
  v6 = a2 + 32LL * a3;
  if ( v4 - 1 > 1 )
  {
    v8 = (_BYTE *)(v6 + 56);
    v9 = v4 - 2;
    do
    {
      *v8 &= ~1u;
      v8 += 32;
      --v9;
    }
    while ( v9 );
  }
  v10 = RtlpHpLargeLockAcquire((_RTL_SRWLOCK *)a1);
  v11 = *(_DWORD *)(a2 + 28);
  v17 = v10;
  v12 = ~(_WORD)v11;
  if ( *(unsigned __int8 *)(a2 + 31) == v4 )
  {
    LOWORD(v13) = 0;
  }
  else
  {
    *(_BYTE *)(a2 + 31) = a3;
    v13 = a3 << *(_BYTE *)(a1 + 9);
    *(_WORD *)(a2 + 28) = ~(_WORD)v13;
  }
  *(_BYTE *)(v6 + 24) |= 2u;
  *(_BYTE *)(32LL * (v4 - 1) + v6 + 26) = v4 - 1;
  *(_WORD *)(v6 + 28) = ~(v12 - v13);
  *(_BYTE *)(v6 + 31) = v4;
  *(_DWORD *)v6 = -857879331;
  *(_BYTE *)(v6 + 24) &= 0xE3u;
  v14 = RtlpHpSegPageRangeCoalesce(a1, v6, 0LL, &v17);
  v15 = RtlpHpSegFreeRangeInsert(a1, v14, 0LL);
  v16 = v15;
  if ( v15 )
    RtlpHpSegHeapRemoveSegment(a1, v15);
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
  if ( v16 )
    RtlpHpSegSegmentFree(a1, v16, 0x7FFFFFFFu, 1);
}
