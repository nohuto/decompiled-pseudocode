/*
 * XREFs of SymCryptMlDsaVectorINTT @ 0x1405736F0
 * Callers:
 *     SymCryptMlDsaSignEx @ 0x14055FD94 (SymCryptMlDsaSignEx.c)
 *     SymCryptMlDsaVerifyEx @ 0x140560308 (SymCryptMlDsaVerifyEx.c)
 *     SymCryptMlDsaPkEncode @ 0x1405721EC (SymCryptMlDsaPkEncode.c)
 *     SymCryptMlDsaSkEncode @ 0x140573034 (SymCryptMlDsaSkEncode.c)
 *     SymCryptMlDsakeyComputeT @ 0x140573A5C (SymCryptMlDsakeyComputeT.c)
 * Callees:
 *     SymCryptMlDsaPolyElementINTT @ 0x1405724BC (SymCryptMlDsaPolyElementINTT.c)
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
