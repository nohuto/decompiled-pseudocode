/*
 * XREFs of RtlpHpSegAlloc @ 0x1800DD93C
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x18002DB90 (RtlpHpMetadataAlloc.c)
 *     RtlpHpReallocMove @ 0x1800818A0 (RtlpHpReallocMove.c)
 *     RtlpHpAllocateHeapSlow @ 0x180096F60 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpAllocateHeapInternal @ 0x1800DC7B4 (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpAllocateHeapBackend @ 0x1800DD904 (RtlpHpAllocateHeapBackend.c)
 *     RtlpHpSegSubAllocate @ 0x180117AE0 (RtlpHpSegSubAllocate.c)
 * Callees:
 *     RtlpHpSegPageRangeAllocate @ 0x1800715F0 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x180071824 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeCommit @ 0x180089CA0 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x1800E94C0 (RtlpHpSegPageRangeComputeLargePageCost.c)
 *     RtlHeapZero @ 0x1801641D0 (RtlHeapZero.c)
 */

__int64 __fastcall RtlpHpSegAlloc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned __int64 v6; // r8
  int v8; // edi
  unsigned __int64 v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rsi
  int v13; // r14d
  int v14; // r12d
  unsigned int v15; // eax

  v6 = (unsigned __int64)(a3 + 4095) >> 12;
  v8 = v6 + 1;
  if ( (a5 & 4) == 0 )
    v8 = v6;
  v9 = (unsigned __int64)(a4 + 4095) >> 12;
  if ( (a5 & 0x800000) != 0 && (unsigned int)-*(_DWORD *)a1 > 0x200000 )
    return 0LL;
  v11 = RtlpHpSegPageRangeAllocate(a1, v8, a5);
  v12 = v11;
  if ( !v11 )
    return 0LL;
  v13 = *(unsigned __int8 *)(v11 + 31);
  v14 = (unsigned __int16)~*(_WORD *)(v11 + 28);
  if ( !(_DWORD)v9 )
    goto LABEL_12;
  v15 = a5 & 0xFFFFFFFD;
  if ( !v14 )
    v15 = a5;
  if ( (int)RtlpHpSegPageRangeCommit(a1, v12, 0, v9, v15, 0LL) < 0 )
  {
    v10 = 0LL;
    RtlpHpSegPageRangeShrink(a1, v12, 0);
  }
  else
  {
LABEL_12:
    if ( (a5 & 4) != 0 )
      RtlpHpSegPageRangeCommit(a1, v12, v8 - 1, v8 - (v13 << *(_BYTE *)(a1 + 9)) - 1, 0, 0LL);
    *(_DWORD *)(v12 + 4) = (v13 << *(_BYTE *)(a1 + 8)) - a2;
    v10 = (*(_QWORD *)a1 & v12) + ((unsigned int)((v12 - (*(_QWORD *)a1 & v12)) >> 5) << *(_BYTE *)(a1 + 8));
    if ( (a5 & 2) != 0
      && (v14
       || (unsigned int)`RtlpHpMemoryTypePageSize'::`2'::PageSize[(unsigned __int8)BYTE1(*(_QWORD *)(a1 + 40))] > 0x100000
       || (*(_BYTE *)(a1 + 13) & 7) != 0 && (int)RtlpHpSegPageRangeComputeLargePageCost(a1, v10, (unsigned int)a2) <= 2) )
    {
      RtlHeapZero(v10, (a2 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    }
  }
  return v10;
}
