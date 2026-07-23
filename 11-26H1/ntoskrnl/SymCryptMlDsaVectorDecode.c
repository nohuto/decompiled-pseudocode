/*
 * XREFs of SymCryptMlDsaVectorDecode @ 0x14057355C
 * Callers:
 *     SymCryptMlDsaSigDecode @ 0x140572C2C (SymCryptMlDsaSigDecode.c)
 *     SymCryptMlDsaSkDecode @ 0x140572D4C (SymCryptMlDsaSkDecode.c)
 * Callees:
 *     SymCryptMlDsaPolyElementDecode @ 0x140572318 (SymCryptMlDsaPolyElementDecode.c)
 */

__int64 __fastcall SymCryptMlDsaVectorDecode(__int64 a1, unsigned int a2, int a3, _BYTE *a4)
{
  unsigned int v4; // r10d
  __int64 v5; // rbp
  unsigned int i; // ebx

  v4 = 0;
  v5 = 32 * a2;
  for ( i = 0; i < (unsigned __int8)*a4; ++i )
  {
    v4 = SymCryptMlDsaPolyElementDecode(a1, a2, a3, (__int64)&a4[1024 * (unsigned __int64)i + 8]);
    if ( v4 )
      break;
    a1 += v5;
  }
  return v4;
}
