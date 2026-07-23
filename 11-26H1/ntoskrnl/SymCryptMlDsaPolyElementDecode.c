/*
 * XREFs of SymCryptMlDsaPolyElementDecode @ 0x140572318
 * Callers:
 *     SymCryptMlDsaExpandMask @ 0x140571A18 (SymCryptMlDsaExpandMask.c)
 *     SymCryptMlDsaPkDecode @ 0x140571FA8 (SymCryptMlDsaPkDecode.c)
 *     SymCryptMlDsaVectorDecode @ 0x14057355C (SymCryptMlDsaVectorDecode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptMlDsaPolyElementDecode(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned int v5; // esi
  unsigned int v6; // r11d
  __int64 v8; // r10
  unsigned int v12; // r8d
  unsigned int v13; // r9d
  unsigned int v14; // edx
  int v15; // eax
  char v16; // cl

  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  v8 = 0LL;
  while ( 1 )
  {
    v12 = 0;
    v13 = 0;
    do
    {
      if ( !v6 )
      {
        v5 = *(_DWORD *)(v4 + a1);
        v6 = 32;
        v4 = (unsigned int)(v4 + 4);
      }
      v14 = v6;
      if ( a2 - v13 < v6 )
        v14 = a2 - v13;
      v6 -= v14;
      v15 = v5 & ((1 << v14) - 1);
      v5 >>= v14;
      v16 = v13;
      v13 += v14;
      v12 |= v15 << v16;
    }
    while ( a2 > v13 );
    if ( !a3 )
      goto LABEL_11;
    if ( v12 > 2 * a3 )
      return 32780LL;
    v12 = a3 - v12 + (((int)(a3 - v12) >> 31) & 0x7FE001);
LABEL_11:
    *(_DWORD *)(a4 + 4 * v8) = v12;
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= 0x100 )
      return 0LL;
  }
}
