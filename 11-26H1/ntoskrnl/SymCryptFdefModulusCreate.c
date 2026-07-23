/*
 * XREFs of SymCryptFdefModulusCreate @ 0x14056F6EC
 * Callers:
 *     SymCryptModulusCreate @ 0x14055EE60 (SymCryptModulusCreate.c)
 * Callees:
 *     SymCryptFdefSizeofModulusFromDigits @ 0x14056F8E8 (SymCryptFdefSizeofModulusFromDigits.c)
 *     SymCryptFdefDivisorCreate @ 0x14056FAA4 (SymCryptFdefDivisorCreate.c)
 */

_DWORD *__fastcall SymCryptFdefModulusCreate(_DWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  _DWORD *v6; // rsi
  unsigned int v7; // eax

  v6 = 0LL;
  v7 = SymCryptFdefSizeofModulusFromDigits(a3);
  if ( v7 && a2 >= v7 )
  {
    a1[2] = v7;
    *a1 = 1733099520;
    a1[4] = a3 << 6;
    v6 = a1;
    a1[1] = a3;
    a1[3] = 0;
    SymCryptFdefDivisorCreate(a1 + 16, a2 - 64, a3);
  }
  return v6;
}
