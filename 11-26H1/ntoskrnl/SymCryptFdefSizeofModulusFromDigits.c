/*
 * XREFs of SymCryptFdefSizeofModulusFromDigits @ 0x14056F8E8
 * Callers:
 *     SymCryptSizeofModulusFromDigits @ 0x14055EEC0 (SymCryptSizeofModulusFromDigits.c)
 *     SymCryptFdefModulusCreate @ 0x14056F6EC (SymCryptFdefModulusCreate.c)
 * Callees:
 *     SymCryptFdefSizeofDivisorFromDigits @ 0x14057011C (SymCryptFdefSizeofDivisorFromDigits.c)
 */

__int64 __fastcall SymCryptFdefSizeofModulusFromDigits(__int64 a1)
{
  if ( (unsigned int)(a1 - 1) > 0x7FF )
    return 0LL;
  else
    return ((_DWORD)a1 << 7) + 64 + (unsigned int)SymCryptFdefSizeofDivisorFromDigits(a1);
}
