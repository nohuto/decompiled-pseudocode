/*
 * XREFs of RtlpHpSegSegmentFree @ 0x18006DAE4
 * Callers:
 *     RtlpHpSegContextCompact @ 0x180061944 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegSegmentAllocate @ 0x18006DF50 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x180071824 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegContextCleanup @ 0x1800E00B8 (RtlpHpSegContextCleanup.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpSegMgrRelease @ 0x18006DBFC (RtlpHpSegMgrRelease.c)
 *     RtlpHeapLogRangeRelease @ 0x18006DD44 (RtlpHeapLogRangeRelease.c)
 *     RtlCSparseBitmapBitsClear @ 0x18006E19C (RtlCSparseBitmapBitsClear.c)
 */

int __fastcall RtlpHpSegSegmentFree(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v5; // rbp
  unsigned __int64 i; // rcx
  struct _PEB *v9; // rax
  __int64 v10; // rcx

  v5 = (unsigned int)-*(_DWORD *)a1;
  if ( a4 )
    RtlCSparseBitmapBitsClear(
      &BaseAddress,
      2 * ((unsigned __int64)(a2 - qword_1801C6908) >> 20),
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
  LODWORD(v9) = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)v9 )
  {
    v9 = NtCurrentPeb();
    v10 = (__int64)v9->SharedData + 558;
  }
  else
  {
    v10 = 2147353480LL;
  }
  if ( *(_BYTE *)v10 )
    LODWORD(v9) = RtlpHeapLogRangeRelease(a1, a2, v5);
  return (int)v9;
}
