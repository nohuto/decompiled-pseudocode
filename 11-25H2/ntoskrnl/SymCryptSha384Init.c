/*
 * XREFs of SymCryptSha384Init @ 0x140522F80
 * Callers:
 *     SymCryptSha384Result @ 0x140522FCC (SymCryptSha384Result.c)
 *     HashpInitHash @ 0x140820400 (HashpInitHash.c)
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
  *(_OWORD *)(a1 + 176) = xmmword_14001FCE0;
  *(_OWORD *)(a1 + 192) = xmmword_14001FCF0;
  *(_OWORD *)(a1 + 208) = xmmword_14001FD00;
  return result;
}
