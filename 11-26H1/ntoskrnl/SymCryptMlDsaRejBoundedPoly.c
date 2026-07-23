/*
 * XREFs of SymCryptMlDsaRejBoundedPoly @ 0x140572870
 * Callers:
 *     SymCryptMlDsaExpandS @ 0x140571B18 (SymCryptMlDsaExpandS.c)
 * Callees:
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 *     SymCryptShake128Append @ 0x140573BC0 (SymCryptShake128Append.c)
 *     SymCryptShake256Extract @ 0x140573BD8 (SymCryptShake256Extract.c)
 *     SymCryptShake256Init @ 0x140573CA4 (SymCryptShake256Init.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall SymCryptMlDsaRejBoundedPoly(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // esi
  unsigned int v9; // ebx
  unsigned int v10; // edi
  char v11; // al
  unsigned __int8 v12; // dl
  char v13; // r8
  unsigned __int8 v14; // cl
  char v15; // dl
  __int64 v16; // rax
  __int64 v17; // rax
  _BYTE v19[15]; // [rsp+21h] [rbp-137h] BYREF
  _BYTE v20[240]; // [rsp+30h] [rbp-128h] BYREF

  v8 = 0;
  memset_0(v20, 0, sizeof(v20));
  SymCryptShake256Init(v20);
  SymCryptShake128Append(v20, a2, a3);
  v19[0] = 0;
  v9 = 0;
  v10 = 0;
  while ( v10 < 0x1E1 )
  {
    SymCryptShake256Extract(v20, v19, 1LL);
    v11 = *(_BYTE *)(a1 + 22);
    v12 = v19[0] & 0xF;
    if ( v11 == 2 )
    {
      if ( (v19[0] & 0xF) != 0xF )
      {
        v13 = 5 * ((unsigned __int8)(13 * v12) >> 6) - v12 + 2;
        v14 = v19[0] >> 4;
LABEL_10:
        if ( v14 >= 0xFu )
          goto LABEL_15;
        v15 = 5 * ((unsigned __int8)(13 * v14) >> 6) - v14 + 2;
        goto LABEL_16;
      }
    }
    else if ( v11 == 4 && v12 < 9u )
    {
      v13 = 4 - v12;
      v14 = v19[0] >> 4;
      goto LABEL_13;
    }
    v14 = v19[0] >> 4;
    v13 = 0x80;
    if ( v11 == 2 )
      goto LABEL_10;
    if ( v11 != 4 )
      goto LABEL_15;
LABEL_13:
    if ( v14 >= 9u )
    {
LABEL_15:
      v15 = 0x80;
      goto LABEL_16;
    }
    v15 = 4 - v14;
LABEL_16:
    ++v10;
    if ( v13 != (char)0x80 )
    {
      v16 = v9++;
      *(_DWORD *)(a4 + 4 * v16) = v13 + (((unsigned __int64)v13 >> 32) & 0x7FE001);
    }
    if ( v15 != (char)0x80 )
    {
      if ( v9 >= 0x100 )
        goto LABEL_24;
      v17 = v9++;
      *(_DWORD *)(a4 + 4 * v17) = v15 + (((unsigned __int64)v15 >> 32) & 0x7FE001);
    }
    if ( v9 >= 0x100 )
      goto LABEL_24;
  }
  v8 = 32776;
LABEL_24:
  SymCryptWipe((__int64)v20, 0xF0uLL);
  return v8;
}
