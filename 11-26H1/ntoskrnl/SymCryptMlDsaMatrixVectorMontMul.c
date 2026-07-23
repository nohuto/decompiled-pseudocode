/*
 * XREFs of SymCryptMlDsaMatrixVectorMontMul @ 0x140571EAC
 * Callers:
 *     SymCryptMlDsaSignEx @ 0x14055FD94 (SymCryptMlDsaSignEx.c)
 *     SymCryptMlDsaVerifyEx @ 0x140560308 (SymCryptMlDsaVerifyEx.c)
 *     SymCryptMlDsakeyComputeT @ 0x140573A5C (SymCryptMlDsakeyComputeT.c)
 * Callees:
 *     SymCryptMlDsaPolyElementAdd @ 0x1405722C4 (SymCryptMlDsaPolyElementAdd.c)
 *     SymCryptMlDsaPolyElementMontMul @ 0x140572604 (SymCryptMlDsaPolyElementMontMul.c)
 *     SymCryptMlDsaVectorSetZero @ 0x1405739AC (SymCryptMlDsaVectorSetZero.c)
 */

__int64 __fastcall SymCryptMlDsaMatrixVectorMontMul(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v9; // ebx
  unsigned int v10; // ecx
  unsigned int v11; // ebp

  result = SymCryptMlDsaVectorSetZero(a3);
  v9 = 0;
  if ( *a1 )
  {
    LOBYTE(v10) = a1[1];
    do
    {
      v11 = 0;
      if ( (_BYTE)v10 )
      {
        do
        {
          SymCryptMlDsaPolyElementMontMul(
            &a1[1024 * (unsigned __int64)(v11 + v9 * (unsigned __int8)v10) + 8],
            a2 + ((unsigned __int64)v11 << 10) + 8,
            a4);
          SymCryptMlDsaPolyElementAdd(((unsigned __int64)v9 << 10) + a3 + 8, a4, ((unsigned __int64)v9 << 10) + a3 + 8);
          v10 = a1[1];
          ++v11;
        }
        while ( v11 < v10 );
      }
      result = *a1;
      ++v9;
    }
    while ( v9 < (unsigned int)result );
  }
  return result;
}
