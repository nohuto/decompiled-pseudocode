/*
 * XREFs of RtlpHpVsContextCompact @ 0x180061C90
 * Callers:
 *     RtlpHpHeapCompact @ 0x1800618B0 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlpHpVsSlotFreeList @ 0x1800E0364 (RtlpHpVsSlotFreeList.c)
 *     RtlpHpVsContextGetSlotInfo @ 0x1800E09A0 (RtlpHpVsContextGetSlotInfo.c)
 *     RtlpHpVsSlotCompactChunks @ 0x1800F8030 (RtlpHpVsSlotCompactChunks.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     RtlpInterlockedFlushSList @ 0x180162C50 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall RtlpHpVsContextCompact(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int16 *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rcx
  _BYTE v10[256]; // [rsp+20h] [rbp-128h] BYREF

  result = RtlpHpVsContextGetSlotInfo(a1, v10);
  if ( (_DWORD)result )
  {
    v6 = (unsigned __int16 *)v10;
    v7 = (unsigned int)result;
    do
    {
      v8 = a1 + ((unsigned __int64)*v6 << 6);
      result = RtlpInterlockedFlushSList(v8 + 64, v3, v4, v5);
      if ( result )
        result = RtlpHpVsSlotFreeList(a1, v8, result);
      if ( *(_WORD *)(a1 + 6) )
      {
        result = *(__int16 *)(a1 + 6);
        v9 = *(_QWORD *)(result + a1 + 32);
      }
      else
      {
        v9 = *(_QWORD *)(a1 + 96);
      }
      if ( v9 )
        result = RtlpHpVsSlotCompactChunks(a1, v8);
      v6 += 2;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
