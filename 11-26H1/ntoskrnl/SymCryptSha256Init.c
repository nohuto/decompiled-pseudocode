/*
 * XREFs of SymCryptSha256Init @ 0x1405571D0
 * Callers:
 *     SymCryptSha256 @ 0x1405558C0 (SymCryptSha256.c)
 *     SymCryptParallelSha256Init @ 0x140557E94 (SymCryptParallelSha256Init.c)
 *     SymCryptParallelSha256ResultDone @ 0x140558140 (SymCryptParallelSha256ResultDone.c)
 *     HashpInitHash @ 0x1408B26DC (HashpInitHash.c)
 * Callees:
 *     <none>
 */

void __fastcall SymCryptSha256Init(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_140023A98;
  *(_OWORD *)(a1 + 112) = xmmword_140023AA8;
}
