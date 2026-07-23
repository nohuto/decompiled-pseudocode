/*
 * XREFs of MiInitializeLargeNonPagedPoolLeafFrames @ 0x1404D2D08
 * Callers:
 *     MiLinkPoolCommitChain @ 0x140367300 (MiLinkPoolCommitChain.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiSetPfnContainingFrame @ 0x14033DC90 (MiSetPfnContainingFrame.c)
 */

__int64 __fastcall MiInitializeLargeNonPagedPoolLeafFrames(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 48 * a2 - 0x220000000000LL;
  v4 = (*(_QWORD *)((((((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL;
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v6);
    while ( *(__int64 *)(v3 + 24) < 0 );
  }
  *(_QWORD *)(v3 + 8) = a1;
  *(_DWORD *)(v3 + 32) = *(_DWORD *)(v3 + 32) & 0xFFF8FFFF | 0x60000;
  *(_QWORD *)v3 = 0LL;
  MiSetPfnContainingFrame(v3, v4);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
