/*
 * XREFs of SymCryptFdefModulusInitMontgomery @ 0x14056F770
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptFdefModulusInitMontgomeryInternal @ 0x14056F7C0 (SymCryptFdefModulusInitMontgomeryInternal.c)
 */

__int64 __fastcall SymCryptFdefModulusInitMontgomery(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptFdefModulusInitMontgomeryInternal(a1, (unsigned int)(16 * *(_DWORD *)(a1 + 4)), a2, a3);
}
