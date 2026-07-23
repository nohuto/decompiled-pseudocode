/*
 * XREFs of SymCryptSha512Init @ 0x140562A74
 * Callers:
 *     HashpInitHash @ 0x1408B26DC (HashpInitHash.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptSha512Init(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 160) = SymCryptSha512InitialState;
  *(_OWORD *)(a1 + 176) = xmmword_1400245A0;
  *(_OWORD *)(a1 + 192) = xmmword_1400245B0;
  *(_OWORD *)(a1 + 208) = xmmword_1400245C0;
  return result;
}
