/*
 * XREFs of RtlpHpSegSegmentFree @ 0x18008A6AC
 * Callers:
 *     RtlpHpSegContextCompact @ 0x180016214 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegContextCleanup @ 0x180089CA4 (RtlpHpSegContextCleanup.c)
 *     RtlpHpSegSegmentAllocate @ 0x18008AB18 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x180096F44 (RtlpHpSegPageRangeShrink.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpSegMgrRelease @ 0x18008A7C4 (RtlpHpSegMgrRelease.c)
 *     RtlpHeapLogRangeRelease @ 0x18008A90C (RtlpHeapLogRangeRelease.c)
 *     RtlCSparseBitmapBitsClear @ 0x18008AD64 (RtlCSparseBitmapBitsClear.c)
 */

unsigned int *__fastcall RtlpHpSegSegmentFree(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v5; // rbp
  unsigned __int64 i; // rcx
  unsigned int *result; // rax
  __int64 v10; // rcx

  v5 = (unsigned int)-*(_DWORD *)a1;
  if ( a4 )
    RtlCSparseBitmapBitsClear(
      &unk_1801C78C0,
      2 * ((unsigned __int64)(a2 - qword_1801C78B8) >> 20),
      2 * ((unsigned __int64)(unsigned int)v5 >> 20));
  if ( a3 == 0x7FFFFFFF )
  {
    a3 = 2;
    for ( i = 32LL * *(unsigned __int8 *)(a1 + 10) + a2; i < a2 + 0x2000; i += 32LL * *(unsigned __int8 *)(i + 31) )
      a3 += (unsigned __int16)~*(_WORD *)(i + 28);
  }
  RtlpHpSegMgrRelease(a1, a2, a3);
  _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), -(__int64)a3);
  _InterlockedAdd64(
    (volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1),
    -(__int64)((unsigned __int64)(unsigned int)-*(_DWORD *)a1 >> 12));
  result = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)result )
  {
    result = (unsigned int *)NtCurrentPeb();
    v10 = *((_QWORD *)result + 18) + 558LL;
  }
  else
  {
    v10 = 2147353480LL;
  }
  if ( *(_BYTE *)v10 )
    return (unsigned int *)RtlpHeapLogRangeRelease(a1, a2, v5);
  return result;
}
