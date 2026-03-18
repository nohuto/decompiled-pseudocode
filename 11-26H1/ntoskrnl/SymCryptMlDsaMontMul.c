/*
 * XREFs of SymCryptMlDsaMontMul @ 0x140572D60
 * Callers:
 *     SymCryptMlDsaVerifyEx @ 0x14055DDF0 (SymCryptMlDsaVerifyEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptMlDsaMontMul(unsigned int a1, unsigned int a2)
{
  unsigned __int64 v2; // r8

  v2 = ((a2 * (unsigned __int64)a1) >> 32) - ((8380417 * (unsigned __int64)(58728449 * a2 * a1)) >> 32);
  return (unsigned int)v2 + (HIDWORD(v2) & 0x7FE001);
}
