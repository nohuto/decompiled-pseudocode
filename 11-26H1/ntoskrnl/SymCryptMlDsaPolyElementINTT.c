/*
 * XREFs of SymCryptMlDsaPolyElementINTT @ 0x1405724BC
 * Callers:
 *     SymCryptMlDsaVectorINTT @ 0x1405736F0 (SymCryptMlDsaVectorINTT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptMlDsaPolyElementINTT(_DWORD *a1)
{
  __int64 v1; // r11
  __int64 v3; // rsi
  int v4; // edi
  __int64 v5; // r10
  unsigned int v6; // ebp
  unsigned int v7; // r12d
  unsigned int v8; // ecx
  unsigned int *v9; // r15
  unsigned int v10; // r8d
  __int64 v11; // r9
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  __int64 result; // rax

  v1 = 256LL;
  LODWORD(v3) = 256;
  v4 = 1;
  do
  {
    v5 = 0LL;
    v6 = 2 * v4;
    do
    {
      v3 = (unsigned int)(v3 - 1);
      v7 = v5;
      v8 = *((_DWORD *)MLDSA_NEGATIVE_ZETA_BITREV_TIMES_R + v3);
      if ( (unsigned int)v5 < (int)v5 + v4 )
      {
        v9 = &a1[v5];
        do
        {
          v10 = *v9;
          v11 = v7 + v4;
          v12 = *v9 + a1[v11];
          ++v7;
          *v9++ = v12 - (((unsigned __int64)(8380416 - v12) >> 32) & 0x7FE001);
          v13 = v8 * (v10 + (((v10 - (unsigned __int64)(unsigned int)a1[v11]) >> 32) & 0x7FE001) - a1[v11]);
          v14 = HIDWORD(v13) - ((8380417 * (unsigned __int64)(unsigned int)(58728449 * v13)) >> 32);
          a1[v11] = v14 + (HIDWORD(v14) & 0x7FE001);
        }
        while ( v7 < (int)v5 + v4 );
      }
      v5 = v6 + (unsigned int)v5;
    }
    while ( (unsigned int)v5 < 0x100 );
    v4 *= 2;
  }
  while ( v6 < 0x100 );
  do
  {
    v15 = ((16382 * (unsigned __int64)(unsigned int)*a1) >> 32)
        - ((8380417 * (unsigned __int64)(unsigned int)(16777214 * *a1)) >> 32);
    result = (unsigned int)v15 + (HIDWORD(v15) & 0x7FE001);
    *a1++ = result;
    --v1;
  }
  while ( v1 );
  return result;
}
