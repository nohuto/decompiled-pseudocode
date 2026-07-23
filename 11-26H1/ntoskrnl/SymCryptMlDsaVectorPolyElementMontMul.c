/*
 * XREFs of SymCryptMlDsaVectorPolyElementMontMul @ 0x1405738E0
 * Callers:
 *     SymCryptMlDsaSignEx @ 0x14055FD94 (SymCryptMlDsaSignEx.c)
 *     SymCryptMlDsaVerifyEx @ 0x140560308 (SymCryptMlDsaVerifyEx.c)
 * Callees:
 *     SymCryptMlDsaPolyElementMontMul @ 0x140572604 (SymCryptMlDsaPolyElementMontMul.c)
 */

__int64 __fastcall SymCryptMlDsaVectorPolyElementMontMul(_BYTE *a1, unsigned int *a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 result; // rax

  v3 = 0;
  if ( *a1 )
  {
    do
    {
      SymCryptMlDsaPolyElementMontMul(
        (__int64)&a1[1024 * (unsigned __int64)v3 + 8],
        a2,
        ((unsigned __int64)v3 << 10) + a3 + 8);
      result = (unsigned __int8)*a1;
      ++v3;
    }
    while ( v3 < (unsigned int)result );
  }
  return result;
}
