/*
 * XREFs of SymCryptSha256Init @ 0x140554D40
 * Callers:
 *     SymCryptSha256 @ 0x140553430 (SymCryptSha256.c)
 *     SymCryptParallelSha256Init @ 0x140555A04 (SymCryptParallelSha256Init.c)
 *     SymCryptParallelSha256ResultDone @ 0x140555CB0 (SymCryptParallelSha256ResultDone.c)
 *     HashpInitHash @ 0x1408AC298 (HashpInitHash.c)
 * Callees:
 *     <none>
 */

void __fastcall SymCryptSha256Init(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_1400241D8;
  *(_OWORD *)(a1 + 112) = xmmword_1400241E8;
}
