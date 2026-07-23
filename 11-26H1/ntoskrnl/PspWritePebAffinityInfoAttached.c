/*
 * XREFs of PspWritePebAffinityInfoAttached @ 0x1409E64F4
 * Callers:
 *     PspUpdatePebForAffinityChange @ 0x1409E5A34 (PspUpdatePebForAffinityChange.c)
 * Callees:
 *     KeQueryPrimaryGroupAffinityProcess @ 0x14045BF50 (KeQueryPrimaryGroupAffinityProcess.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 */

__int64 __fastcall PspWritePebAffinityInfoAttached(__int64 a1)
{
  __int64 v2; // r15
  __int64 v3; // rdi
  __int64 *v4; // rax
  __int64 v5; // rsi
  __int64 result; // rax
  __int128 v7; // [rsp+28h] [rbp-50h] BYREF
  __int128 v8; // [rsp+38h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 736);
  v3 = 0LL;
  v4 = *(__int64 **)(a1 + 784);
  if ( v4 )
    v3 = *v4;
  do
  {
    v7 = 0LL;
    if ( (*(_DWORD *)(a1 + 136) & 0x1000) != 0 )
      WORD4(v7) = *(_WORD *)(a1 + 416);
    else
      KeQueryPrimaryGroupAffinityProcess(a1, (__int64)&v7);
    v5 = v7;
    RtlWriteULong64ToUser((_QWORD *)(v2 + 312), v7);
    if ( v3 )
      RtlWriteULongToUser((_DWORD *)(v3 + 192), v5 | HIDWORD(v5));
    v8 = 0LL;
    if ( (*(_DWORD *)(a1 + 136) & 0x1000) != 0 )
    {
      result = *(unsigned __int16 *)(a1 + 416);
    }
    else
    {
      KeQueryPrimaryGroupAffinityProcess(a1, (__int64)&v8);
      result = WORD4(v8);
    }
  }
  while ( WORD4(v7) != (_WORD)result || v5 != (_QWORD)v8 );
  return result;
}
