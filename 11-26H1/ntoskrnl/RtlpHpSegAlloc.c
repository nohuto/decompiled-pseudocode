/*
 * XREFs of RtlpHpSegAlloc @ 0x14034D14C
 * Callers:
 *     RtlpHpAllocateHeapBackend @ 0x14034D110 (RtlpHpAllocateHeapBackend.c)
 *     RtlpHpMetadataAlloc @ 0x1403542D4 (RtlpHpMetadataAlloc.c)
 *     RtlpHpAllocateHeap @ 0x140399800 (RtlpHpAllocateHeap.c)
 *     RtlpHpSegSubAllocate @ 0x1404D8FC4 (RtlpHpSegSubAllocate.c)
 *     ExAllocateHeapSpecialPool @ 0x1405140E8 (ExAllocateHeapSpecialPool.c)
 *     RtlpHpAllocateHeapInternal @ 0x14052345C (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpSegPageRangeAllocate @ 0x14034D918 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x14034FBC0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeCommit @ 0x140350650 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x140351280 (RtlpHpSegPageRangeComputeLargePageCost.c)
 *     RtlHeapZero @ 0x140736E90 (RtlHeapZero.c)
 */

__int64 __fastcall RtlpHpSegAlloc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned __int64 v6; // r8
  unsigned int v8; // edi
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rsi
  int v12; // r14d
  int v13; // r12d
  unsigned int v14; // eax
  __int64 v15; // rdi

  v6 = (unsigned __int64)(a3 + 4095) >> 12;
  v8 = v6 + 1;
  if ( (a5 & 4) == 0 )
    v8 = v6;
  v9 = (unsigned __int64)(a4 + 4095) >> 12;
  if ( (a5 & 0x800000) != 0 && (unsigned int)-*(_DWORD *)a1 > 0x200000 )
    return 0LL;
  v10 = RtlpHpSegPageRangeAllocate(a1, v8, a5);
  v11 = v10;
  if ( !v10 )
    return 0LL;
  v12 = *(unsigned __int8 *)(v10 + 31);
  v13 = (unsigned __int16)~*(_WORD *)(v10 + 28);
  if ( !(_DWORD)v9 )
    goto LABEL_9;
  v14 = a5 & 0xFFFFFFFD;
  if ( !v13 )
    v14 = a5;
  if ( (int)RtlpHpSegPageRangeCommit(a1, v11, 0, v9, v14, 0LL) < 0 )
  {
    v15 = 0LL;
    RtlpHpSegPageRangeShrink(a1, v11);
  }
  else
  {
LABEL_9:
    if ( (a5 & 4) != 0 )
      RtlpHpSegPageRangeCommit(a1, v11, v8 - 1, v8 - (v12 << *(_BYTE *)(a1 + 9)) - 1, 0, 0LL);
    *(_DWORD *)(v11 + 4) = (v12 << *(_BYTE *)(a1 + 8)) - a2;
    v15 = (*(_QWORD *)a1 & v11) + ((unsigned int)((v11 - (*(_QWORD *)a1 & v11)) >> 5) << *(_BYTE *)(a1 + 8));
    if ( (a5 & 2) != 0
      && (v13
       || (unsigned int)`RtlpHpMemoryTypePageSize'::`2'::PageSize[(unsigned __int8)BYTE1(*(_QWORD *)(a1 + 40))] > 0x100000
       || (*(_BYTE *)(a1 + 13) & 7) != 0 && (int)RtlpHpSegPageRangeComputeLargePageCost(a1, v15, (unsigned int)a2) <= 2) )
    {
      RtlHeapZero(v15, (a2 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    }
  }
  return v15;
}
