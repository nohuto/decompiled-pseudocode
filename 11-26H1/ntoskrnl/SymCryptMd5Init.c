/*
 * XREFs of SymCryptMd5Init @ 0x140564880
 * Callers:
 *     HashpInitHash @ 0x1408B26DC (HashpInitHash.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptMd5Init(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_1400245E8;
  return result;
}
