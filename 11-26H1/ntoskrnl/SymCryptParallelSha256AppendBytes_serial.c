/*
 * XREFs of SymCryptParallelSha256AppendBytes_serial @ 0x140557E0C
 * Callers:
 *     SymCryptParallelSha256Append @ 0x140557370 (SymCryptParallelSha256Append.c)
 * Callees:
 *     SymCryptSha256AppendBlocks @ 0x140555A30 (SymCryptSha256AppendBlocks.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptParallelSha256AppendBytes_serial(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 result; // rax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 )
  {
    v3 = 0LL;
    v8 = 0LL;
    do
    {
      SymCryptSha256AppendBlocks(
        **(_QWORD **)(a1 + 8 * v3) + 96LL,
        *(_QWORD *)(*(_QWORD *)(a1 + 8 * v3) + 32LL),
        a3,
        (__int64)&v8);
      *(_QWORD *)(*(_QWORD *)(a1 + 8 * v3) + 32LL) += a3;
      result = *(_QWORD *)(a1 + 8 * v3++);
      *(_QWORD *)(result + 40) -= a3;
    }
    while ( v3 < a2 );
  }
  return result;
}
