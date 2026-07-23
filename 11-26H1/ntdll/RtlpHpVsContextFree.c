/*
 * XREFs of RtlpHpVsContextFree @ 0x1800E0118
 * Callers:
 *     RtlpHpSegFreeInternal @ 0x180005E18 (RtlpHpSegFreeInternal.c)
 * Callees:
 *     RtlpHpVsSlotFreeList @ 0x1800E0364 (RtlpHpVsSlotFreeList.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 *     RtlpInterlockedPushEntrySList @ 0x180162C10 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x180162C50 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall RtlpHpVsContextFree(__int64 a1, _WORD *a2, __int64 a3, unsigned int *a4)
{
  __int64 v4; // rbx
  _WORD *v5; // r10
  __int64 v7; // rdi
  __int64 v8; // rsi
  int v9; // r9d
  int v10; // ecx
  char v12; // al
  unsigned int v13; // ecx
  __int64 v14; // r14
  __int64 v15; // rcx
  __int64 v16; // r10
  int v17; // eax
  int v18; // ecx
  __int64 v19; // [rsp+40h] [rbp+8h]

  v4 = a3 - 16;
  v5 = a2;
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 && (a3 & 0xFFF) == 0 )
    v4 = a3 - 32;
  v7 = 0LL;
  if ( !a2 )
  {
    if ( BYTE6(RtlpHpHeapGlobals) ^ (unsigned __int8)(BYTE6(v4) ^ HIWORD(*(_QWORD *)v4)) )
    {
      v18 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v4 + 8) ^ v4);
    }
    else
    {
      if ( WORD2(v4) ^ (unsigned __int16)(WORD2(RtlpHpHeapGlobals) ^ HIDWORD(*(_QWORD *)v4)) )
      {
        v16 = v4
            - 16
            * (WORD2(v4) ^ (unsigned __int64)(unsigned __int16)(((unsigned __int64)RtlpHpHeapGlobals ^ *(_QWORD *)v4) >> 32));
        if ( BYTE6(RtlpHpHeapGlobals) ^ (unsigned __int8)(HIWORD(*(_QWORD *)v16) ^ BYTE6(v16)) )
        {
          v17 = RtlpHpHeapGlobals ^ *(_DWORD *)(v16 + 8) ^ v16;
        }
        else
        {
          if ( !(WORD2(v16) ^ (unsigned __int16)(WORD2(RtlpHpHeapGlobals) ^ HIDWORD(*(_QWORD *)v16))) )
          {
            v18 = 0;
            goto LABEL_23;
          }
          v16 -= 16
               * (WORD2(RtlpHpHeapGlobals) ^ (unsigned __int64)(unsigned __int16)(WORD2(v16) ^ HIDWORD(*(_QWORD *)v16)));
          v17 = RtlpHpHeapGlobals ^ *(_DWORD *)(v16 + 8) ^ v16;
        }
        v18 = (unsigned __int8)v17;
LABEL_23:
        v5 = (_WORD *)((v16 - (unsigned int)(v18 << 12)) & 0xFFFFFFFFFFFFF000uLL);
        goto LABEL_3;
      }
      v18 = 0;
    }
    v16 = v4;
    goto LABEL_23;
  }
LABEL_3:
  if ( (((unsigned __int16)(v5[16] ^ v5[18]) ^ 0x2BED) & 0x7FFF) == 0 )
  {
    v19 = v4 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v4;
    if ( !BYTE6(v19) )
    {
      v8 = *(_QWORD *)(a1 + 8) ^ a1;
      v9 = v4;
      v10 = 8;
      goto LABEL_5;
    }
    v12 = *(_BYTE *)(a1 + 4);
    v13 = 16 * WORD1(v19) - 16;
    v14 = a1 + ((unsigned __int64)(unsigned __int16)v5[17] << 6);
    *a4 = v13;
    if ( (v12 & 2) != 0 && v13 < 0x1000 )
    {
      v15 = v14 + 64;
      if ( *(_WORD *)(v14 + 64) < 0x20u )
      {
        RtlpInterlockedPushEntrySList(v15, v4 + 16);
        goto LABEL_10;
      }
      v7 = RtlpInterlockedFlushSList(v15);
    }
    *(_QWORD *)(v4 + 16) = v7;
    RtlpHpVsSlotFreeList(a1, v14, v4 + 16);
LABEL_10:
    LODWORD(v7) = 1;
    return (unsigned int)v7;
  }
  v8 = *(_QWORD *)(a1 + 8) ^ a1;
  LODWORD(a3) = (_DWORD)v5;
  v9 = 0;
  v10 = 18;
LABEL_5:
  RtlpLogHeapFailure(v10, v8, a3, v9, 0LL, 0LL);
  return (unsigned int)v7;
}
