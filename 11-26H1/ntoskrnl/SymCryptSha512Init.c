/*
 * XREFs of SymCryptSha512Init @ 0x140560558
 * Callers:
 *     HashpInitHash @ 0x1408AC298 (HashpInitHash.c)
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
  *(_OWORD *)(a1 + 176) = xmmword_140024CE0;
  *(_OWORD *)(a1 + 192) = xmmword_140024CF0;
  *(_OWORD *)(a1 + 208) = xmmword_140024D00;
  return result;
}
