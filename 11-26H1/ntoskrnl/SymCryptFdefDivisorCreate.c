/*
 * XREFs of SymCryptFdefDivisorCreate @ 0x1405708C4
 * Callers:
 *     SymCryptDivisorCreate @ 0x14055C0E8 (SymCryptDivisorCreate.c)
 *     SymCryptFdefModulusCreate @ 0x14057050C (SymCryptFdefModulusCreate.c)
 * Callees:
 *     SymCryptIntCreate @ 0x14055C1F0 (SymCryptIntCreate.c)
 *     SymCryptSizeofDivisorFromDigits @ 0x14055C990 (SymCryptSizeofDivisorFromDigits.c)
 */

_DWORD *__fastcall SymCryptFdefDivisorCreate(_DWORD *a1, unsigned __int64 a2, int a3)
{
  _DWORD *v6; // rdi
  unsigned int v7; // eax

  v6 = 0LL;
  v7 = SymCryptSizeofDivisorFromDigits();
  if ( v7 && a2 >= v7 )
  {
    a1[2] = v7;
    *a1 = 1732509696;
    a1[1] = a3;
    v6 = a1;
    SymCryptIntCreate();
  }
  return v6;
}
