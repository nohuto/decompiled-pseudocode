/*
 * XREFs of SymCryptFdefSizeofDivisorFromDigits @ 0x140570F3C
 * Callers:
 *     SymCryptSizeofDivisorFromDigits @ 0x14055C990 (SymCryptSizeofDivisorFromDigits.c)
 *     SymCryptFdefModulusCopyFixupMontgomery @ 0x1405704E0 (SymCryptFdefModulusCopyFixupMontgomery.c)
 *     SymCryptFdefModulusInitMontgomeryInternal @ 0x1405705E0 (SymCryptFdefModulusInitMontgomeryInternal.c)
 *     SymCryptFdefSizeofModulusFromDigits @ 0x140570708 (SymCryptFdefSizeofModulusFromDigits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefSizeofDivisorFromDigits(int a1)
{
  if ( (unsigned int)(a1 - 1) > 0x7FF )
    return 0LL;
  else
    return (unsigned int)((a1 + 1) << 6);
}
