/*
 * XREFs of RtlpHpVsContextCompact @ 0x180016560
 * Callers:
 *     RtlpHpHeapCompact @ 0x180016180 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlpHpVsSlotFreeList @ 0x18008E93C (RtlpHpVsSlotFreeList.c)
 *     RtlpHpVsContextGetSlotInfo @ 0x180097620 (RtlpHpVsContextGetSlotInfo.c)
 *     RtlpHpVsSlotCompactChunks @ 0x1800F8860 (RtlpHpVsSlotCompactChunks.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     RtlpInterlockedFlushSList @ 0x180162D50 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall RtlpHpVsContextCompact(__int64 a1)
{
  __int64 result; // rax
  unsigned __int16 *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rcx
  _BYTE v7[256]; // [rsp+20h] [rbp-128h] BYREF

  result = RtlpHpVsContextGetSlotInfo(a1, v7);
  if ( (_DWORD)result )
  {
    v3 = (unsigned __int16 *)v7;
    v4 = (unsigned int)result;
    do
    {
      v5 = a1 + ((unsigned __int64)*v3 << 6);
      result = RtlpInterlockedFlushSList(v5 + 64);
      if ( result )
        result = RtlpHpVsSlotFreeList(a1, v5, result);
      if ( *(_WORD *)(a1 + 6) )
      {
        result = *(__int16 *)(a1 + 6);
        v6 = *(_QWORD *)(result + a1 + 32);
      }
      else
      {
        v6 = *(_QWORD *)(a1 + 96);
      }
      if ( v6 )
        result = RtlpHpVsSlotCompactChunks(a1, v5);
      v3 += 2;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
