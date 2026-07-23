/*
 * XREFs of RtlpHpVsContextCompact @ 0x140349C64
 * Callers:
 *     RtlpHpHeapCompact @ 0x140349464 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlpHpVsSlotFreeList @ 0x14035501C (RtlpHpVsSlotFreeList.c)
 *     RtlpHpVsContextGetSlotInfo @ 0x1403561FC (RtlpHpVsContextGetSlotInfo.c)
 *     RtlpHpVsSlotCompactChunks @ 0x1404135D0 (RtlpHpVsSlotCompactChunks.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlpInterlockedFlushSList @ 0x1407358E0 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall RtlpHpVsContextCompact(__int64 a1)
{
  __int64 result; // rax
  unsigned __int16 *v3; // rdi
  __int64 v4; // rsi
  _SLIST_HEADER *v5; // rbp
  PSLIST_ENTRY v6; // rax
  __int64 v7; // rcx
  _BYTE v8[256]; // [rsp+20h] [rbp-128h] BYREF

  result = RtlpHpVsContextGetSlotInfo(a1, v8);
  if ( (_DWORD)result )
  {
    v3 = (unsigned __int16 *)v8;
    v4 = (unsigned int)result;
    do
    {
      v5 = (_SLIST_HEADER *)(a1 + ((unsigned __int64)*v3 << 6));
      v6 = RtlpInterlockedFlushSList(v5 + 4);
      if ( v6 )
        RtlpHpVsSlotFreeList(a1, v5, v6);
      result = *(__int16 *)(a1 + 6);
      if ( (_WORD)result )
        v7 = *(_QWORD *)(result + a1 + 32);
      else
        v7 = *(_QWORD *)(a1 + 96);
      if ( v7 )
        result = RtlpHpVsSlotCompactChunks(a1, v5);
      v3 += 2;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
