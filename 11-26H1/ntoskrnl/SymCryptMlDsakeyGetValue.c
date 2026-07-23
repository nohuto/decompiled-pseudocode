/*
 * XREFs of SymCryptMlDsakeyGetValue @ 0x1405607C0
 * Callers:
 *     SymCryptMlDsaSelftest @ 0x140565630 (SymCryptMlDsaSelftest.c)
 * Callees:
 *     SymCryptMlDsaPkEncode @ 0x1405721EC (SymCryptMlDsaPkEncode.c)
 *     SymCryptMlDsaSkEncode @ 0x140573034 (SymCryptMlDsaSkEncode.c)
 */

__int64 __fastcall SymCryptMlDsakeyGetValue(__int64 a1, _OWORD *a2, unsigned __int64 a3, int a4, int a5)
{
  unsigned int v5; // r10d
  int v6; // r9d
  int v7; // r9d

  v5 = 0;
  if ( a5 )
    return 32782;
  v6 = a4 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        return 32782;
      return (unsigned int)SymCryptMlDsaPkEncode(a1, a2, a3);
    }
    else
    {
      return (unsigned int)SymCryptMlDsaSkEncode();
    }
  }
  if ( a3 >= 0x20 )
  {
    if ( *(_BYTE *)(a1 + 20) )
    {
      *a2 = *(_OWORD *)(a1 + 22);
      a2[1] = *(_OWORD *)(a1 + 38);
    }
    else
    {
      return 32785;
    }
  }
  else
  {
    return 32781;
  }
  return v5;
}
