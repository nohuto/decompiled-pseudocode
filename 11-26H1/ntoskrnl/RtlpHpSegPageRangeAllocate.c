/*
 * XREFs of RtlpHpSegPageRangeAllocate @ 0x14034D918
 * Callers:
 *     RtlpHpSegAlloc @ 0x14034D14C (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlpHpSegLockAcquire @ 0x14027ECE0 (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegFreeRangeInsert @ 0x14034D30C (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegPageRangeSplit @ 0x14034D460 (RtlpHpSegPageRangeSplit.c)
 *     RtlpHpSegLockRelease @ 0x14034DF84 (RtlpHpSegLockRelease.c)
 *     RtlpHpSegSegmentAllocate @ 0x140351E7C (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegSegmentInitialize @ 0x14035247C (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegFreeRangeRemove @ 0x1403799B0 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpSegHeapAddSegment @ 0x1404B7CAC (RtlpHpSegHeapAddSegment.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x140518FC4 (RtlpHpSegLargeRangeAllocate.c)
 */

__int64 __fastcall RtlpHpSegPageRangeAllocate(__int64 a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rdx
  int v6; // r12d
  unsigned int v7; // r15d
  char v8; // al
  __int64 v9; // rbx
  char v10; // r13
  unsigned int v11; // r8d
  __int64 v12; // rdx
  int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // edx
  _BYTE *v18; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // r8
  struct _KLOCK_ENTRIES *v25; // r9

  v5 = (unsigned int)(a2 - 1);
  v6 = a3;
  v7 = (unsigned int)(v5 + (1 << *(_BYTE *)(a1 + 9))) >> *(_BYTE *)(a1 + 9);
  v8 = RtlpHpSegLockAcquire(a1, v5, a3, a4);
  v9 = *(_QWORD *)(a1 + 96);
  v10 = v8;
  v11 = v7 << 24;
  if ( (*(_BYTE *)(a1 + 104) & 1) != 0 && v9 )
    v9 ^= a1 + 96;
  v12 = 0LL;
  while ( v9 )
  {
    if ( v11 > *(_DWORD *)(v9 + 28) )
    {
      v20 = *(_QWORD *)(v9 + 8);
    }
    else
    {
      if ( v11 >= *(_DWORD *)(v9 + 28) )
      {
        v13 = v6 & 0x800000;
        goto LABEL_7;
      }
      v20 = *(_QWORD *)v9;
      v12 = v9;
    }
    if ( (*(_BYTE *)(a1 + 104) & 1) != 0 && v20 )
      v9 ^= v20;
    else
      v9 = v20;
  }
  v9 = v12;
  v13 = v6 & 0x800000;
  if ( !v12 )
    goto LABEL_23;
LABEL_7:
  if ( v13 )
    v9 = RtlpHpSegLargeRangeAllocate(a1, v9, v7, 1LL);
  else
    RtlpHpSegFreeRangeRemove(a1, v9);
  if ( v9 )
    goto LABEL_10;
LABEL_23:
  LOBYTE(v12) = v10;
  RtlpHpSegLockRelease(a1, v12);
  v21 = RtlpHpSegSegmentAllocate(a1, 0LL, v13 != 0 ? 2 : 0);
  v22 = v21;
  if ( !v21 )
    return 0LL;
  RtlpHpSegSegmentInitialize(a1, v21, 0LL);
  v9 = v22 + 32LL * *(unsigned __int8 *)(a1 + 10);
  v10 = RtlpHpSegLockAcquire(a1, v23, v24, v25);
  RtlpHpSegHeapAddSegment(a1, v22);
  if ( v13 )
    v9 = RtlpHpSegLargeRangeAllocate(a1, v9, v7, 0LL);
LABEL_10:
  v15 = RtlpHpSegPageRangeSplit(v14, v9, v7);
  if ( v15 )
    RtlpHpSegFreeRangeInsert(a1, v15, 0);
  if ( (v6 & 4) != 0 )
    *(_DWORD *)(v9 + 8) |= 2u;
  LOBYTE(v16) = v10;
  *(_BYTE *)(v9 + 24) |= (v6 & 0xE000000 | 0x800000u) >> 23;
  *(_BYTE *)(32LL * (v7 - 1) + v9 + 24) |= 1u;
  RtlpHpSegLockRelease(a1, v16);
  v17 = 1;
  *(_BYTE *)(v9 + 26) = 0;
  if ( v7 - 1 > 1 )
  {
    v18 = (_BYTE *)(v9 + 56);
    do
    {
      v18[2] = v17++;
      *v18 |= 1u;
      v18 += 32;
    }
    while ( v17 < v7 - 1 );
  }
  return v9;
}
