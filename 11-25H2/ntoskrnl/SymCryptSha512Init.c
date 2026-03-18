/*
 * XREFs of SymCryptSha512Init @ 0x140524610
 * Callers:
 *     HashpInitHash @ 0x140820400 (HashpInitHash.c)
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
  *(_OWORD *)(a1 + 176) = xmmword_14001FD20;
  *(_OWORD *)(a1 + 192) = xmmword_14001FD30;
  *(_OWORD *)(a1 + 208) = xmmword_14001FD40;
  return result;
}
