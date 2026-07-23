/*
 * XREFs of RtlpHpPgGetUserSize @ 0x180081808
 * Callers:
 *     RtlpHpExtrasGet @ 0x1800043C0 (RtlpHpExtrasGet.c)
 *     RtlpHpTagFreeHeap @ 0x180004680 (RtlpHpTagFreeHeap.c)
 *     RtlpHpSizeHeap @ 0x1800051D0 (RtlpHpSizeHeap.c)
 *     RtlSizeHeap @ 0x1800058B0 (RtlSizeHeap.c)
 *     RtlpHpTagReAllocateHeap @ 0x180080F40 (RtlpHpTagReAllocateHeap.c)
 *     RtlpHpReallocComputeSizes @ 0x1800811E0 (RtlpHpReallocComputeSizes.c)
 *     RtlpHpSegReportPageRange @ 0x18011D164 (RtlpHpSegReportPageRange.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int64 __fastcall RtlpHpPgGetUserSize(unsigned __int64 a1, __int64 a2, __int64 a3, int *a4)
{
  __int16 v7; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int8 v8; // [rsp+42h] [rbp+Ah]

  v7 = 0;
  v8 = 0;
  ((void (__fastcall *)(_QWORD, __int64, __int16 *, __int64, int))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 56)))(
    *(_QWORD *)a1,
    a2,
    &v7,
    3LL,
    1);
  if ( a4 )
    *a4 = (unsigned __int8)v7 >> 7;
  return a3 - 16 * (unsigned int)v8 - (v7 & 0x7F) - ((unsigned __int64)HIBYTE(v7) >> 4) - 0x2000;
}
