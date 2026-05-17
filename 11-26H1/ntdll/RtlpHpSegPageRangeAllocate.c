/*
 * XREFs of RtlpHpSegPageRangeAllocate @ 0x180096D10
 * Callers:
 *     RtlpHpSegAlloc @ 0x1800E0094 (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegFreeRangeInsert @ 0x18006AD78 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegFreeRangeRemove @ 0x18006AF00 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpLargeLockAcquire @ 0x180089C88 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpSegSegmentInitialize @ 0x180089EBC (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegHeapAddSegment @ 0x180089F98 (RtlpHpSegHeapAddSegment.c)
 *     RtlpHpSegSegmentAllocate @ 0x18008AB18 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegPageRangeSplit @ 0x180097090 (RtlpHpSegPageRangeSplit.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x18015829C (RtlpHpSegLargeRangeAllocate.c)
 */

__int64 __fastcall RtlpHpSegPageRangeAllocate(__int64 a1, int a2, int a3)
{
  __int64 v4; // rdx
  unsigned int v6; // r15d
  __int64 v7; // rbx
  unsigned int v8; // r8d
  __int64 v9; // rdx
  int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // r14
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // edx
  _BYTE *v18; // rax
  __int64 v19; // rdx

  v4 = (unsigned int)(a2 - 1);
  v6 = (unsigned int)(v4 + (1 << *(_BYTE *)(a1 + 9))) >> *(_BYTE *)(a1 + 9);
  RtlpHpLargeLockAcquire(a1, v4);
  v7 = *(_QWORD *)(a1 + 96);
  v8 = v6 << 24;
  if ( (*(_BYTE *)(a1 + 104) & 1) != 0 && v7 )
    v7 ^= a1 + 96;
  v9 = 0LL;
  while ( v7 )
  {
    if ( v8 > *(_DWORD *)(v7 + 28) )
    {
      v15 = *(_QWORD *)(v7 + 8);
    }
    else
    {
      if ( v8 >= *(_DWORD *)(v7 + 28) )
      {
        v10 = a3 & 0x800000;
        goto LABEL_7;
      }
      v15 = *(_QWORD *)v7;
      v9 = v7;
    }
    if ( (*(_BYTE *)(a1 + 104) & 1) != 0 && v15 )
      v7 ^= v15;
    else
      v7 = v15;
  }
  v7 = v9;
  v10 = a3 & 0x800000;
  if ( !v9 )
    goto LABEL_10;
LABEL_7:
  if ( v10 )
    v7 = RtlpHpSegLargeRangeAllocate(a1, v7, v6, 1LL);
  else
    RtlpHpSegFreeRangeRemove(a1, v7);
  if ( v7 )
    goto LABEL_20;
LABEL_10:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
  v12 = RtlpHpSegSegmentAllocate(a1, 0);
  v13 = v12;
  if ( !v12 )
    return 0LL;
  RtlpHpSegSegmentInitialize((_BYTE *)a1, v12, 0);
  v7 = v13 + 32LL * *(unsigned __int8 *)(a1 + 10);
  RtlpHpLargeLockAcquire(a1, v19);
  RtlpHpSegHeapAddSegment(a1, v13);
  if ( v10 )
    v7 = RtlpHpSegLargeRangeAllocate(a1, v7, v6, 0LL);
LABEL_20:
  v16 = RtlpHpSegPageRangeSplit(v11, v7, v6);
  if ( v16 )
    RtlpHpSegFreeRangeInsert(a1, v16, 0LL);
  if ( (a3 & 4) != 0 )
    *(_DWORD *)(v7 + 8) |= 2u;
  *(_BYTE *)(v7 + 24) |= (a3 & 0xE000000 | 0x800000u) >> 23;
  *(_BYTE *)(32LL * (v6 - 1) + v7 + 24) |= 1u;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
  *(_BYTE *)(v7 + 26) = 0;
  v17 = 1;
  if ( v6 - 1 > 1 )
  {
    v18 = (_BYTE *)(v7 + 56);
    do
    {
      v18[2] = v17++;
      *v18 |= 1u;
      v18 += 32;
    }
    while ( v17 < v6 - 1 );
  }
  return v7;
}
