/*
 * XREFs of SymCryptMlDsaVectorINTT @ 0x14057448C
 * Callers:
 *     SymCryptMlDsaSignEx @ 0x14055D89C (SymCryptMlDsaSignEx.c)
 *     SymCryptMlDsaVerifyEx @ 0x14055DDF0 (SymCryptMlDsaVerifyEx.c)
 *     SymCryptMlDsaPkEncode @ 0x140572FE0 (SymCryptMlDsaPkEncode.c)
 *     SymCryptMlDsaSkEncode @ 0x140573DD0 (SymCryptMlDsaSkEncode.c)
 *     SymCryptMlDsakeyComputeT @ 0x1405747F8 (SymCryptMlDsakeyComputeT.c)
 * Callees:
 *     SymCryptMlDsaPolyElementINTT @ 0x1405732B0 (SymCryptMlDsaPolyElementINTT.c)
 */

__int64 __fastcall SymCryptMlDsaVectorINTT(_BYTE *a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax

  v1 = 0;
  if ( *a1 )
  {
    do
    {
      SymCryptMlDsaPolyElementINTT(&a1[1024 * (unsigned __int64)v1 + 8]);
      result = (unsigned __int8)*a1;
      ++v1;
    }
    while ( v1 < (unsigned int)result );
  }
  return result;
}
