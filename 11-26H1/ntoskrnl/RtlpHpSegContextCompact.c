/*
 * XREFs of RtlpHpSegContextCompact @ 0x1403494AC
 * Callers:
 *     RtlpHpHeapCompact @ 0x140349464 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlpHpSegLockAcquire @ 0x14027ECE0 (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegHeapRemoveSegment @ 0x1403487A4 (RtlpHpSegHeapRemoveSegment.c)
 *     RtlpHpSegFreeRangeInsert @ 0x14034D30C (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegLockRelease @ 0x14034DF84 (RtlpHpSegLockRelease.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x14034F8C0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegPageRangeShrink @ 0x14034FBC0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegSegmentFree @ 0x1403517EC (RtlpHpSegSegmentFree.c)
 *     RtlpHpSegFreeRangeRemove @ 0x1403799B0 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpPgCleanupAllocationForCompaction @ 0x14063CE68 (RtlpHpPgCleanupAllocationForCompaction.c)
 */

_QWORD *__fastcall RtlpHpSegContextCompact(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  bool v4; // zf
  _QWORD *v5; // rdi
  _QWORD *result; // rax
  _QWORD *v8; // rdx
  char v9; // al
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  struct _KLOCK_ENTRIES *v14; // r9
  char v15; // al
  _QWORD *v16; // rdx
  _QWORD *v17; // rsi
  unsigned __int64 i; // rdi
  __int64 v19; // rcx
  _QWORD *v20; // r9
  __int64 v21; // rsi
  _QWORD *v22; // [rsp+20h] [rbp-10h] BYREF
  _QWORD **v23; // [rsp+28h] [rbp-8h]
  char v24; // [rsp+50h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(a1 + 88) == 0LL;
  v5 = &v22;
  v23 = &v22;
  v22 = &v22;
  if ( !v4 )
  {
    v9 = RtlpHpSegLockAcquire(a1, a2, a3, a4);
    v10 = *(_QWORD *)(a1 + 112);
    LOBYTE(v11) = v9;
    *(_QWORD *)(a1 + 112) = 0LL;
    RtlpHpSegLockRelease(a1, v11);
    if ( v10 )
    {
      do
      {
        v21 = *(_QWORD *)v10;
        if ( (*(_BYTE *)(v10 + 24) & 0x1C) == 0x10 )
          RtlpHpPgCleanupAllocationForCompaction(
            *(_QWORD *)(a1 + 144),
            (*(_QWORD *)a1 & v10) + ((unsigned int)((v10 - (*(_QWORD *)a1 & v10)) >> 5) << *(_BYTE *)(a1 + 8)),
            *(unsigned __int8 *)(v10 + 31) << *(_BYTE *)(a1 + 8));
        *(_BYTE *)(v10 + 24) &= 0x9Fu;
        RtlpHpSegPageRangeShrink(a1, v10);
        v10 = v21;
      }
      while ( v21 );
    }
    v15 = RtlpHpSegLockAcquire(a1, v12, v13, v14);
    v24 = v15;
    v17 = *(_QWORD **)(a1 + 72);
    if ( v17 != (_QWORD *)(a1 + 72) )
    {
      do
      {
        for ( i = (unsigned __int64)&v17[4 * *(unsigned __int8 *)(a1 + 10)];
              i < (unsigned __int64)(v17 + 1024);
              i += 32LL * *(unsigned __int8 *)(i + 31) )
        {
          if ( (*(_BYTE *)(i + 24) & 1) == 0 && *(_WORD *)(i + 28) != 0xFFFF )
          {
            RtlpHpSegFreeRangeRemove(a1, i);
            *(_BYTE *)(i + 24) |= 1u;
            v19 = 32LL * ((unsigned int)*(unsigned __int8 *)(i + 31) - 1);
            *(_BYTE *)(v19 + i + 24) |= 1u;
            i = RtlpHpSegPageRangeCoalesce(a1, i, 1LL, &v24);
            v16 = (_QWORD *)RtlpHpSegFreeRangeInsert(a1, i, 0LL);
            if ( v16 )
            {
              v17 = (_QWORD *)v17[1];
              RtlpHpSegHeapRemoveSegment(a1, v16);
              v20 = v23;
              if ( *v23 != &v22 )
                __fastfail(3u);
              v16[1] = v23;
              *v16 = &v22;
              *v20 = v16;
              v23 = (_QWORD **)v16;
              break;
            }
          }
        }
        v17 = (_QWORD *)*v17;
      }
      while ( v17 != (_QWORD *)(a1 + 72) );
      v15 = v24;
    }
    LOBYTE(v16) = v15;
    RtlpHpSegLockRelease(a1, v16);
    v5 = v22;
  }
  while ( 1 )
  {
    result = &v22;
    if ( v5 == &v22 )
      break;
    v8 = v5;
    v5 = (_QWORD *)*v5;
    RtlpHpSegSegmentFree(a1, v8, 0x7FFFFFFFLL, 1LL);
  }
  return result;
}
