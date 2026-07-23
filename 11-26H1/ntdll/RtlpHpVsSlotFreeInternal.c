/*
 * XREFs of RtlpHpVsSlotFreeInternal @ 0x1800E045C
 * Callers:
 *     RtlpHpVsSlotFreeList @ 0x1800E0364 (RtlpHpVsSlotFreeList.c)
 * Callees:
 *     RtlpHpVsChunkFree @ 0x18008B490 (RtlpHpVsChunkFree.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpVsSlotFreeInternal(unsigned __int64 a1, _RTL_RB_TREE *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rbx
  _QWORD *v6; // r10
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  unsigned __int64 v11; // r8
  int v12; // ecx

  v4 = HIWORD(a3);
  v5 = 0LL;
  v6 = (_QWORD *)a3;
  if ( BYTE6(RtlpHpHeapGlobals) ^ (unsigned __int8)(BYTE6(a3) ^ HIWORD(*(_QWORD *)a3)) )
  {
    v8 = a3;
    goto LABEL_6;
  }
  if ( WORD2(a3) ^ (unsigned __int16)(HIDWORD(*(_QWORD *)a3) ^ WORD2(RtlpHpHeapGlobals)) )
  {
    a3 -= 16
        * (WORD2(a3) ^ (unsigned __int64)(unsigned __int16)(((unsigned __int64)RtlpHpHeapGlobals ^ *(_QWORD *)a3) >> 32));
    if ( BYTE6(RtlpHpHeapGlobals) ^ (unsigned __int8)(HIWORD(*(_QWORD *)a3) ^ BYTE6(a3)) )
    {
      v8 = a3;
LABEL_6:
      v9 = RtlpHpHeapGlobals ^ *(_DWORD *)(a3 + 8) ^ v8;
LABEL_7:
      v10 = (unsigned __int8)v9;
      goto LABEL_8;
    }
    if ( WORD2(a3) ^ (unsigned __int16)(WORD2(RtlpHpHeapGlobals) ^ HIDWORD(*(_QWORD *)a3)) )
    {
      a3 -= 16 * (WORD2(RtlpHpHeapGlobals) ^ (unsigned __int64)(unsigned __int16)(WORD2(a3) ^ HIDWORD(*(_QWORD *)a3)));
      v9 = RtlpHpHeapGlobals ^ *(_DWORD *)(a3 + 8) ^ a3;
      goto LABEL_7;
    }
  }
  v10 = 0;
LABEL_8:
  v11 = (a3 - (unsigned int)(v10 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  if ( (((unsigned __int16)(*(_WORD *)(v11 + 32) ^ *(_WORD *)(v11 + 36)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    v12 = 18;
    goto LABEL_12;
  }
  if ( !(BYTE6(RtlpHpHeapGlobals) ^ (unsigned __int8)(v4 ^ HIWORD(*v6))) )
  {
    LODWORD(v11) = (_DWORD)v6;
    v12 = 8;
LABEL_12:
    RtlpLogHeapFailure(v12, *(_DWORD *)(a1 + 8) ^ a1, v11, 0, 0LL, 0LL);
    return v5;
  }
  return RtlpHpVsChunkFree(a1, a2, v11, (__int64)v6, 0, a4);
}
