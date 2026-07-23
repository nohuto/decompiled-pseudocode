/*
 * XREFs of RtlpHpLfhSubsegmentSizeBlock @ 0x1800042A0
 * Callers:
 *     RtlpHpExtrasGet @ 0x1800043C0 (RtlpHpExtrasGet.c)
 *     RtlpHpTagFreeHeap @ 0x180004680 (RtlpHpTagFreeHeap.c)
 *     RtlpHpSizeHeap @ 0x1800051D0 (RtlpHpSizeHeap.c)
 *     RtlSizeHeap @ 0x1800058B0 (RtlSizeHeap.c)
 *     RtlpHpTagReAllocateHeap @ 0x180080F40 (RtlpHpTagReAllocateHeap.c)
 *     RtlpHpReallocComputeSizes @ 0x1800811E0 (RtlpHpReallocComputeSizes.c)
 *     RtlpHpSegReportPageRange @ 0x18011D164 (RtlpHpSegReportPageRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentSizeBlock(__int64 a1, unsigned __int64 a2, __int64 a3, int *a4)
{
  unsigned __int64 v6; // rax
  unsigned int v8; // r11d
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // r10
  unsigned __int16 v13; // ax
  unsigned int v14; // edx
  int v15; // r8d
  unsigned int v16; // ecx

  v6 = a2 >> 12;
  v8 = qword_1801C5EC8 ^ *(_DWORD *)(a2 + 40) ^ (a2 >> 12);
  v9 = (unsigned int)a3 - HIWORD(v8) - (unsigned int)a2;
  v10 = (v9 * (unsigned __int64)*(unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6) + a1 + 72)) >> 32;
  if ( (_DWORD)v9 != (_DWORD)v10 * (unsigned __int16)v8 )
    return -1LL;
  v11 = 1LL << (v10 & 0x1F);
  v12 = a2
      + 8
      * ((v9 * (unsigned __int64)*(unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6) + a1 + 72)) >> 37);
  if ( ((unsigned int)*(_QWORD *)(v12 + 64) & (unsigned int)v11) == 0 )
    return -1LL;
  v13 = *(_WORD *)(a2 + 40) ^ qword_1801C5EC8 ^ v6;
  if ( (HIDWORD(*(_QWORD *)(v12 + 64)) & v11) != 0 )
  {
    v14 = *(unsigned __int16 *)(v13 + a3 - 2);
    v15 = *(_WORD *)(v13 + a3 - 2) & 0x3FF;
    if ( (v14 & 0x8000u) != 0 )
      v15 = 1;
    if ( a4 )
      *a4 = (v14 >> 14) & 1;
    return (unsigned int)v13 - v15;
  }
  else
  {
    v16 = v13;
    if ( a4 )
      *a4 = 0;
  }
  return v16;
}
