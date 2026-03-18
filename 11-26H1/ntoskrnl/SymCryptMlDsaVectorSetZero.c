/*
 * XREFs of SymCryptMlDsaVectorSetZero @ 0x140574748
 * Callers:
 *     SymCryptMlDsaMatrixVectorMontMul @ 0x140572CA0 (SymCryptMlDsaMatrixVectorMontMul.c)
 *     SymCryptMlDsaPkDecode @ 0x140572D9C (SymCryptMlDsaPkDecode.c)
 *     SymCryptMlDsaSkDecode @ 0x140573AF4 (SymCryptMlDsaSkDecode.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall SymCryptMlDsaVectorSetZero(_BYTE *a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax

  v1 = 0;
  if ( *a1 )
  {
    do
    {
      memset_0(&a1[1024 * (unsigned __int64)v1 + 8], 0, 0x400uLL);
      result = (unsigned __int8)*a1;
      ++v1;
    }
    while ( v1 < (unsigned int)result );
  }
  return result;
}
