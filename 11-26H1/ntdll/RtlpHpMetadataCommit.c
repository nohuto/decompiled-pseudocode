/*
 * XREFs of RtlpHpMetadataCommit @ 0x1800E7268
 * Callers:
 *     RtlpHpHeapExtendContext @ 0x1800E6C10 (RtlpHpHeapExtendContext.c)
 *     RtlpHpHeapAllocate @ 0x1800E6ECC (RtlpHpHeapAllocate.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x180005150 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpSegPageRangeCommit @ 0x180089CA0 (RtlpHpSegPageRangeCommit.c)
 */

__int64 __fastcall RtlpHpMetadataCommit(__int64 a1, int a2, unsigned __int64 a3, _QWORD *a4, int a5)
{
  __int64 v8; // r14
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // r10
  __int64 v12; // r8
  char v13; // cl
  unsigned __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  int v17; // r9d

  v8 = 2LL * (unsigned int)dword_18017B028[(unsigned __int8)BYTE1(*a4)];
  if ( (_WORD)a1 )
  {
    v9 = 0;
  }
  else
  {
    v10 = RtlCSparseBitmapBitmaskRead((__int64)&BaseAddress, 2 * ((unsigned __int64)(a1 - qword_1801C6908) >> 20));
    if ( v10 )
      v9 = v10 - 1;
    else
      v9 = 2;
  }
  v11 = 192LL * v9 + qword_1801CA198[v8] + 320;
  v12 = *(_QWORD *)v11 & a1;
  if ( (RtlpHpHeapGlobals ^ *(_QWORD *)(v12 + 0x10) ^ v12) != v11
    || (v13 = *(_BYTE *)(v11 + 8),
        v14 = v12 + 32 * ((unsigned __int64)(unsigned int)(a1 - v12) >> v13),
        v15 = v14 - 32LL * *(unsigned __int8 *)(v14 + 26),
        (*(_BYTE *)(v15 + 24) & 3) != 3)
    || v12 + ((unsigned int)((v15 - v12) >> 5) << v13) != a1 && (*(_BYTE *)(v15 + 24) & 0x1Cu) < 8 )
  {
    v15 = 0LL;
  }
  v16 = a3 >> 12;
  v17 = -(int)v16;
  if ( a5 )
    v17 = v16;
  return RtlpHpSegPageRangeCommit(v11, v15, (unsigned int)(a2 - a1) >> 12, v17, 0, 0LL);
}
