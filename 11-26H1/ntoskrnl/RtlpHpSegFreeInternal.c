/*
 * XREFs of RtlpHpSegFreeInternal @ 0x140354B48
 * Callers:
 *     RtlpHpFreeHeap @ 0x140349090 (RtlpHpFreeHeap.c)
 *     RtlpHpMetadataFree @ 0x140354540 (RtlpHpMetadataFree.c)
 *     RtlpHpAllocateHeapSlow @ 0x1403546B4 (RtlpHpAllocateHeapSlow.c)
 *     ExFreeHeapPool @ 0x1403A9910 (ExFreeHeapPool.c)
 * Callees:
 *     RtlpHpSegPageRangeShrink @ 0x14034FBC0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpVsContextFree @ 0x140354D90 (RtlpHpVsContextFree.c)
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 *     RtlpHpPgContextFree @ 0x14063D310 (RtlpHpPgContextFree.c)
 */

__int64 __fastcall RtlpHpSegFreeInternal(__int64 a1, __int64 a2, signed __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char v4; // al
  signed __int64 v5; // r10
  char v7; // cl
  signed __int64 v9; // r11
  int v10; // r8d
  unsigned int v11; // r8d
  __int64 v12; // r10
  unsigned int v13; // r11d
  signed __int64 v14; // rcx
  signed __int64 v15; // rdx
  int v17; // ecx
  signed __int64 v18; // [rsp+40h] [rbp+8h] BYREF
  signed __int64 v19; // [rsp+50h] [rbp+18h]

  v4 = *(_BYTE *)(a3 + 24);
  v5 = *(_QWORD *)a1 & a3;
  LODWORD(v18) = 0;
  v7 = *(_BYTE *)(a1 + 8);
  v9 = v5 + ((unsigned int)((a3 - v5) >> 5) << v7);
  if ( v4 != 15 )
  {
    if ( a2 == v9 )
    {
      if ( ((v4 - 3) & 0xFB) == 0 )
      {
        RtlpHpSegPageRangeShrink(a1, a3, (volatile signed __int64 *)a3, a4);
        v11 = 1;
        goto LABEL_10;
      }
    }
    else
    {
      if ( (v4 & 0x40) != 0 )
      {
        v10 = a2;
        v17 = 8;
        goto LABEL_18;
      }
      if ( v4 == 19 )
      {
        v11 = RtlpHpPgContextFree(
                *(_QWORD *)(a1 + 144),
                v5 + ((unsigned int)((a3 - v5) >> 5) << v7),
                (*(unsigned __int8 *)(a3 + 31) << v7) - (unsigned __int64)*(unsigned int *)(a3 + 4),
                a2);
        goto LABEL_10;
      }
    }
    v10 = a2;
LABEL_17:
    v17 = 9;
LABEL_18:
    RtlpLogHeapFailure(v17, *(_QWORD *)(a1 + 56), v10, 0, 0LL, 0LL);
    v11 = 0;
    goto LABEL_10;
  }
  v10 = a2;
  if ( a2 == v9 )
    goto LABEL_17;
  v11 = RtlpHpVsContextFree(*(_QWORD *)(a1 + 32), v9, a2, &v18);
  if ( v11 )
  {
    v12 = *(_QWORD *)(a1 + 24);
    if ( (unsigned int)v18 < *(unsigned __int16 *)(v12 + 76) )
    {
      v13 = *((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned __int64)(unsigned int)(v18 + 15) >> 4)) - 1;
      do
      {
        v14 = *(_QWORD *)(v12 + 8LL * v13 + 448);
        v19 = v14;
        v15 = v14;
        v18 = v14;
        if ( (v14 & 1) == 0 )
          break;
        if ( WORD1(v19) > 1u )
        {
          WORD1(v18) = WORD1(v19) - 1;
          v15 = v18;
        }
      }
      while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 8LL * v13 + 448), v15, v14) != v14 );
    }
  }
LABEL_10:
  if ( a4 )
    LODWORD(a4->Thread) = 3;
  return v11;
}
