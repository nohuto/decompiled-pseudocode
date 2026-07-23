/*
 * XREFs of SymCryptMlDsaVectorPower2Round @ 0x140573944
 * Callers:
 *     SymCryptMlDsakeyComputeT @ 0x140573A5C (SymCryptMlDsakeyComputeT.c)
 * Callees:
 *     SymCryptMlDsaPolyElementPower2Round @ 0x1405727BC (SymCryptMlDsaPolyElementPower2Round.c)
 */

__int64 __fastcall SymCryptMlDsaVectorPower2Round(_BYTE *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 result; // rax

  v3 = 0;
  if ( *a1 )
  {
    do
    {
      SymCryptMlDsaPolyElementPower2Round(
        (__int64)&a1[1024 * (unsigned __int64)v3 + 8],
        (unsigned int *)(((unsigned __int64)v3 << 10) + a2 + 8),
        ((unsigned __int64)v3 << 10) + a3 + 8);
      result = (unsigned __int8)*a1;
      ++v3;
    }
    while ( v3 < (unsigned int)result );
  }
  return result;
}
