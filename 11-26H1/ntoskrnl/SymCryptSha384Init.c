/*
 * XREFs of SymCryptSha384Init @ 0x14056133C
 * Callers:
 *     SymCryptSha384Result @ 0x140561388 (SymCryptSha384Result.c)
 *     HashpInitHash @ 0x1408B26DC (HashpInitHash.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptSha384Init(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 160) = SymCryptSha384InitialState;
  *(_OWORD *)(a1 + 176) = xmmword_140024560;
  *(_OWORD *)(a1 + 192) = xmmword_140024570;
  *(_OWORD *)(a1 + 208) = xmmword_140024580;
  return result;
}
