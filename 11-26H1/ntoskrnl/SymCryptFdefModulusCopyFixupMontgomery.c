/*
 * XREFs of SymCryptFdefModulusCopyFixupMontgomery @ 0x14056F6C0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptFdefSizeofDivisorFromDigits @ 0x14057011C (SymCryptFdefSizeofDivisorFromDigits.c)
 */

__int64 __fastcall SymCryptFdefModulusCopyFixupMontgomery(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (unsigned int)SymCryptFdefSizeofDivisorFromDigits(*(unsigned int *)(a2 + 4));
  *(_QWORD *)(a2 + 40) = (unsigned int)result + a2 + 64;
  return result;
}
