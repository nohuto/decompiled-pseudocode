/*
 * XREFs of RtlpHpSegPageRangeAllocate @ 0x1800715F0
 * Callers:
 *     RtlpHpSegAlloc @ 0x1800DD93C (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegSegmentAllocate @ 0x18006DF50 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpLargeLockAcquire @ 0x18007100C (RtlpHpLargeLockAcquire.c)
 *     RtlpHpSegPageRangeSplit @ 0x180071970 (RtlpHpSegPageRangeSplit.c)
 *     RtlpHpSegFreeRangeInsert @ 0x18008B1C8 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegFreeRangeRemove @ 0x18008B350 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpSegHeapAddSegment @ 0x1800E1FF8 (RtlpHpSegHeapAddSegment.c)
 *     RtlpHpSegSegmentInitialize @ 0x1800E2038 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x18015816C (RtlpHpSegLargeRangeAllocate.c)
 */

__int64 __fastcall RtlpHpSegPageRangeAllocate(__int64 a1, int a2, int a3)
{
  unsigned int v5; // r15d
  __int64 v6; // rbx
  unsigned int v7; // r8d
  __int64 v8; // rdx
  int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // edx
  _BYTE *v17; // rax

  v5 = (unsigned int)(a2 - 1 + (1 << *(_BYTE *)(a1 + 9))) >> *(_BYTE *)(a1 + 9);
  RtlpHpLargeLockAcquire((_RTL_SRWLOCK *)a1);
  v6 = *(_QWORD *)(a1 + 96);
  v7 = v5 << 24;
  if ( (*(_BYTE *)(a1 + 104) & 1) != 0 && v6 )
    v6 ^= a1 + 96;
  v8 = 0LL;
  while ( v6 )
  {
    if ( v7 > *(_DWORD *)(v6 + 28) )
    {
      v14 = *(_QWORD *)(v6 + 8);
    }
    else
    {
      if ( v7 >= *(_DWORD *)(v6 + 28) )
      {
        v9 = a3 & 0x800000;
        goto LABEL_7;
      }
      v14 = *(_QWORD *)v6;
      v8 = v6;
    }
    if ( (*(_BYTE *)(a1 + 104) & 1) != 0 && v14 )
      v6 ^= v14;
    else
      v6 = v14;
  }
  v6 = v8;
  v9 = a3 & 0x800000;
  if ( !v8 )
    goto LABEL_10;
LABEL_7:
  if ( v9 )
    v6 = RtlpHpSegLargeRangeAllocate(a1, v6, v5, 1LL);
  else
    RtlpHpSegFreeRangeRemove(a1, v6);
  if ( v6 )
    goto LABEL_20;
LABEL_10:
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
  v11 = RtlpHpSegSegmentAllocate(a1, 0);
  v12 = v11;
  if ( !v11 )
    return 0LL;
  RtlpHpSegSegmentInitialize(a1, v11, 0LL);
  v6 = v12 + 32LL * *(unsigned __int8 *)(a1 + 10);
  RtlpHpLargeLockAcquire((_RTL_SRWLOCK *)a1);
  RtlpHpSegHeapAddSegment(a1, v12);
  if ( v9 )
    v6 = RtlpHpSegLargeRangeAllocate(a1, v6, v5, 0LL);
LABEL_20:
  v15 = RtlpHpSegPageRangeSplit(v10, v6, v5);
  if ( v15 )
    RtlpHpSegFreeRangeInsert(a1, v15, 0LL);
  if ( (a3 & 4) != 0 )
    *(_DWORD *)(v6 + 8) |= 2u;
  *(_BYTE *)(v6 + 24) |= (a3 & 0xE000000 | 0x800000u) >> 23;
  *(_BYTE *)(32LL * (v5 - 1) + v6 + 24) |= 1u;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
  *(_BYTE *)(v6 + 26) = 0;
  v16 = 1;
  if ( v5 - 1 > 1 )
  {
    v17 = (_BYTE *)(v6 + 56);
    do
    {
      v17[2] = v16++;
      *v17 |= 1u;
      v17 += 32;
    }
    while ( v16 < v5 - 1 );
  }
  return v6;
}
