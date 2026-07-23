/*
 * XREFs of SymCryptFdefModElementCreate @ 0x14056E66C
 * Callers:
 *     SymCryptModElementCreate @ 0x14055EA6C (SymCryptModElementCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefModElementCreate(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edx

  v3 = (*(_DWORD *)(a3 + 4) << 6) - 64;
  *(_QWORD *)(v3 + a1) = 0LL;
  *(_QWORD *)(v3 + a1 + 8) = 0LL;
  *(_QWORD *)(v3 + a1 + 16) = 0LL;
  *(_QWORD *)(v3 + a1 + 24) = 0LL;
  *(_QWORD *)(v3 + a1 + 32) = 0LL;
  *(_QWORD *)(v3 + a1 + 40) = 0LL;
  *(_QWORD *)(v3 + a1 + 48) = 0LL;
  *(_QWORD *)(v3 + a1 + 56) = 0LL;
  return a1;
}
