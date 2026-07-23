/*
 * XREFs of RtlpHpVsContextFree @ 0x140354D90
 * Callers:
 *     RtlpHpSegFreeInternal @ 0x140354B48 (RtlpHpSegFreeInternal.c)
 *     RtlpFreeNTHeapInternal @ 0x140354CB0 (RtlpFreeNTHeapInternal.c)
 * Callees:
 *     RtlpHpVsSlotFreeList @ 0x14035501C (RtlpHpVsSlotFreeList.c)
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1407358E0 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall RtlpHpVsContextFree(__int64 a1, _WORD *a2, __int64 a3, unsigned int *a4)
{
  __int64 v4; // rbx
  PSLIST_ENTRY v6; // rsi
  __int64 v7; // rax
  unsigned int v8; // ecx
  _SLIST_HEADER *v9; // r14
  _SLIST_HEADER *v10; // rcx
  __int64 v12; // rdx
  int v13; // ecx

  v4 = a3 - 16;
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 && (a3 & 0xFFF) == 0 )
    v4 = a3 - 32;
  v6 = 0LL;
  if ( !a2 )
  {
    if ( BYTE2(PspTlsContext.Timer.Period) ^ (unsigned __int8)(BYTE6(v4) ^ HIWORD(*(_QWORD *)v4)) )
    {
      v13 = (unsigned __int8)(LOBYTE(PspTlsContext.Timer.Processor) ^ *(_BYTE *)(v4 + 8) ^ v4);
    }
    else
    {
      if ( WORD2(v4) ^ (unsigned __int16)(LOWORD(PspTlsContext.Timer.Period) ^ HIDWORD(*(_QWORD *)v4)) )
      {
        v12 = v4
            - 16
            * (WORD2(v4) ^ LOWORD(PspTlsContext.Timer.Period) ^ (unsigned __int64)(unsigned __int16)WORD2(*(_QWORD *)v4));
        if ( BYTE2(PspTlsContext.Timer.Period) ^ (unsigned __int8)(HIWORD(*(_QWORD *)v12) ^ BYTE6(v12)) )
        {
          v13 = (unsigned __int8)(LOBYTE(PspTlsContext.Timer.Processor) ^ *(_BYTE *)(v12 + 8) ^ v12);
        }
        else if ( LOWORD(PspTlsContext.Timer.Period) ^ (unsigned __int16)(HIDWORD(*(_QWORD *)v12) ^ WORD2(v12)) )
        {
          v12 -= 16
               * (LOWORD(PspTlsContext.Timer.Period) ^ (unsigned __int16)WORD2(*(_QWORD *)v12) ^ (unsigned __int64)WORD2(v12));
          v13 = (unsigned __int8)(LOBYTE(PspTlsContext.Timer.Processor) ^ *(_BYTE *)(v12 + 8) ^ v12);
        }
        else
        {
          v13 = 0;
        }
        goto LABEL_21;
      }
      v13 = 0;
    }
    v12 = v4;
LABEL_21:
    a2 = (_WORD *)((v12 - (unsigned int)(v13 << 12)) & 0xFFFFFFFFFFFFF000uLL);
  }
  if ( (((unsigned __int16)(a2[16] ^ a2[18]) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    RtlpLogHeapFailure(18, *(_DWORD *)(a1 + 8) ^ a1, (_DWORD)a2, 0, 0LL, 0LL);
    return 0LL;
  }
  else
  {
    v7 = v4 ^ *(_QWORD *)&PspTlsContext.Timer.Processor ^ *(_QWORD *)v4;
    if ( BYTE6(v7) )
    {
      LOBYTE(v7) = *(_BYTE *)(a1 + 4);
      v8 = 16 * WORD1(v7) - 16;
      v9 = (_SLIST_HEADER *)(a1 + ((unsigned __int64)(unsigned __int16)a2[17] << 6));
      *a4 = v8;
      if ( (v7 & 2) != 0 && v8 < 0x1000 )
      {
        v10 = v9 + 4;
        if ( LOWORD(v9[4].Alignment) < 0x20u )
        {
          RtlpInterlockedPushEntrySList(v10, (PSLIST_ENTRY)(v4 + 16));
          return 1LL;
        }
        v6 = RtlpInterlockedFlushSList(v10);
      }
      *(_QWORD *)(v4 + 16) = v6;
      RtlpHpVsSlotFreeList(a1, v9, v4 + 16);
      return 1LL;
    }
    RtlpLogHeapFailure(8, *(_DWORD *)(a1 + 8) ^ a1, a3, v4, 0LL, 0LL);
    return 0LL;
  }
}
