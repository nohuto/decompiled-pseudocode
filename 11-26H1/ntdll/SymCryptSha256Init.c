/*
 * XREFs of SymCryptSha256Init @ 0x1800FEB88
 * Callers:
 *     SymCryptSha256 @ 0x1800FD6DC (SymCryptSha256.c)
 * Callees:
 *     <none>
 */

void __fastcall SymCryptSha256Init(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_180182400;
  *(_OWORD *)(a1 + 112) = xmmword_180182410;
}
