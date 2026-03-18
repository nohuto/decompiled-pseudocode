/*
 * XREFs of VmpProcessInvalidateList @ 0x140518B00
 * Callers:
 *     VmpFlushTb @ 0x1402519C4 (VmpFlushTb.c)
 *     VmpInsertInvalidateListRange @ 0x140251FD8 (VmpInsertInvalidateListRange.c)
 *     VmpFlushTbVaRange @ 0x14025248C (VmpFlushTbVaRange.c)
 *     VmpInvalidateSlatBatched @ 0x1406C1430 (VmpInvalidateSlatBatched.c)
 *     VmpUnpinMemoryRangeHelper @ 0x1406C286C (VmpUnpinMemoryRangeHelper.c)
 * Callees:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140207BF0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     HvlMapSparseGpaPages @ 0x14048ED40 (HvlMapSparseGpaPages.c)
 *     VmpConvertInvalidateFlagsToMapFlags @ 0x1406C0DDC (VmpConvertInvalidateFlagsToMapFlags.c)
 *     VmpInvalidateSingleGpaRange @ 0x1406C13D4 (VmpInvalidateSingleGpaRange.c)
 *     VmpLogTbFlushSlatInvalidate @ 0x1406C330C (VmpLogTbFlushSlatInvalidate.c)
 */

char __fastcall VmpProcessInvalidateList(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  ULONG64 v4; // r12
  unsigned int v5; // edi
  unsigned __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rbp
  unsigned __int64 v10; // r15
  int v11; // ecx
  __int64 v12; // r8
  char result; // al
  unsigned __int64 v14; // rsi
  __int64 i; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rax
  int v20; // eax
  __int64 v21; // r10
  unsigned __int64 QpcTimeStamp; // [rsp+78h] [rbp+10h] BYREF

  v2 = a1;
  if ( stru_140F066E8.QuantumTarget
    && *(_DWORD *)stru_140F066E8.QuantumTarget
    && tlgKeywordOn(stru_140F066E8.QuantumTarget, 2LL) )
  {
    v4 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
  }
  else
  {
    v4 = 0LL;
  }
  v5 = *(_WORD *)(a2 + 6) & 2;
  if ( _bittest64(*(const signed __int64 **)(stru_140F066E8.ThreadLock + 8), 1u) )
    v5 |= 4u;
  if ( (*(_DWORD *)(a2 + 4) & 1) != 0 )
  {
    v6 = *(_QWORD *)(a2 + 8);
    v7 = *(_QWORD *)(a2 + 16) >> 12;
    v8 = ((v7 + 511) & 0xFFFFFFFFFFFFFE00uLL) - v7;
    if ( v6 < v8 + 512 )
    {
      v8 = 0LL;
      v10 = 0LL;
      v9 = *(_QWORD *)(a2 + 8);
    }
    else
    {
      v9 = ((_WORD)v6 - (_WORD)v8) & 0x1FF;
      v10 = v6 - v9 - v8;
      if ( v8 )
        VmpInvalidateSingleGpaRange(
          *(_QWORD *)(a1 + 120),
          *(_QWORD *)(a2 + 16) >> 12,
          ((v7 + 511) & 0xFFFFFFFFFFFFFE00uLL) - v7,
          v5);
    }
    v2 = a1;
    if ( v10 )
      VmpInvalidateSingleGpaRange(*(_QWORD *)(a1 + 120), v8 + v7, v10 >> 9, v5 | 1);
    if ( v9 )
      VmpInvalidateSingleGpaRange(*(_QWORD *)(a1 + 120), v7 + v8 + v10, v9, v5);
  }
  else
  {
    v14 = 0LL;
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)a2; i = (unsigned int)(i + 1) )
    {
      v16 = *(_QWORD *)(a2 + 8LL * (unsigned int)i + 16) >> 12;
      v17 = (*(_QWORD *)(a2 + 8LL * (unsigned int)i + 16) & 0xFFFLL) + v16 - 1;
      if ( v16 <= v17 )
      {
        v18 = *(_QWORD *)(a2 + 8LL * (unsigned int)i + 16) >> 12;
        v19 = (_QWORD *)(a2 + 4112 + 16 * v14);
        v14 += *(_QWORD *)(a2 + 8LL * (unsigned int)i + 16) & 0xFFFLL;
        do
        {
          *v19 = v18++;
          v19 += 2;
        }
        while ( v18 <= v17 );
      }
    }
    QpcTimeStamp = 0LL;
    v20 = VmpConvertInvalidateFlagsToMapFlags(v5, i);
    if ( (int)HvlMapSparseGpaPages(*(_QWORD *)(v2 + 120), v20, v14, v21, &QpcTimeStamp) < 0 )
      NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
    if ( QpcTimeStamp != v14 )
      NT_ASSERT("PageCountProcessed == NumberOfPages");
  }
  if ( v4 )
  {
    KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
    if ( stru_140F066E8.QuantumTarget )
    {
      if ( *(_DWORD *)stru_140F066E8.QuantumTarget && tlgKeywordOn(stru_140F066E8.QuantumTarget, 2LL) )
        VmpLogTbFlushSlatInvalidate(
          v11,
          *(_QWORD *)(a2 + 8),
          *(_DWORD *)a2,
          *(_DWORD *)(a2 + 4),
          v12,
          *(_QWORD *)(v2 + 120));
    }
  }
  result = *(_BYTE *)(a2 + 5);
  *(_DWORD *)(a2 + 4) = 0;
  *(_BYTE *)(a2 + 5) = result;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)a2 = 0;
  return result;
}
