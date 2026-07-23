/*
 * XREFs of SymCryptMlDsaPolyElementEncode @ 0x1405723E8
 * Callers:
 *     SymCryptMlDsaVectorEncode @ 0x1405735E4 (SymCryptMlDsaVectorEncode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptMlDsaPolyElementEncode(int *a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // r15
  int v6; // edi
  int v7; // esi
  unsigned __int64 v8; // r10
  __int64 result; // rax
  __int64 v12; // rbp
  unsigned int v13; // r9d
  int v14; // r8d
  unsigned int v15; // edx
  int v16; // eax
  char v17; // cl

  v4 = 0LL;
  v5 = a3;
  v6 = 0;
  v7 = 0;
  v8 = (unsigned __int64)-(__int64)a3 >> 32;
  LODWORD(result) = a2;
  v12 = 256LL;
  do
  {
    v13 = result;
    v14 = ~(_DWORD)v8 & *a1 | v8 & (v5 + (((unsigned __int64)(v5 - *a1) >> 32) & 0x7FE001) - *a1);
    do
    {
      v15 = 32 - v7;
      if ( v13 < 32 - v7 )
        v15 = v13;
      v13 -= v15;
      v16 = v14 & ((1 << v15) - 1);
      v14 >>= v15;
      v17 = v7;
      v7 += v15;
      v6 |= v16 << v17;
      if ( v7 == 32 )
      {
        *(_DWORD *)(v4 + a4) = v6;
        v4 = (unsigned int)(v4 + 4);
        v6 = 0;
        v7 = 0;
      }
    }
    while ( v13 );
    result = a2;
    ++a1;
    --v12;
  }
  while ( v12 );
  return result;
}
