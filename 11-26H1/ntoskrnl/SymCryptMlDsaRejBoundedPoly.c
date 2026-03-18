/*
 * XREFs of SymCryptMlDsaRejBoundedPoly @ 0x140573664
 * Callers:
 *     SymCryptMlDsaExpandS @ 0x140572930 (SymCryptMlDsaExpandS.c)
 * Callees:
 *     SymCryptWipe @ 0x140556458 (SymCryptWipe.c)
 *     SymCryptShake128Append @ 0x14057495C (SymCryptShake128Append.c)
 *     SymCryptShake256Extract @ 0x140574974 (SymCryptShake256Extract.c)
 *     SymCryptShake256Init @ 0x140574A40 (SymCryptShake256Init.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall SymCryptMlDsaRejBoundedPoly(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rbx
  char v9; // al
  unsigned __int8 v10; // dl
  char v11; // r8
  unsigned __int8 v12; // cl
  char v13; // dl
  _BYTE v15[15]; // [rsp+21h] [rbp-127h] BYREF
  _BYTE v16[240]; // [rsp+30h] [rbp-118h] BYREF

  memset_0(v16, 0, sizeof(v16));
  SymCryptShake256Init(v16);
  SymCryptShake128Append(v16, a2, a3);
  v8 = 0LL;
  v15[0] = 0;
  do
  {
    SymCryptShake256Extract(v16, v15, 1LL);
    v9 = *(_BYTE *)(a1 + 22);
    v10 = v15[0] & 0xF;
    if ( v9 == 2 )
    {
      if ( (v15[0] & 0xF) != 0xF )
      {
        v11 = 5 * ((unsigned __int8)(13 * v10) >> 6) - v10 + 2;
        v12 = v15[0] >> 4;
LABEL_9:
        if ( v12 < 0xFu )
        {
          v13 = 5 * ((unsigned __int8)(13 * v12) >> 6) - v12 + 2;
          goto LABEL_15;
        }
        goto LABEL_14;
      }
    }
    else if ( v9 == 4 && v10 < 9u )
    {
      v11 = 4 - v10;
      v12 = v15[0] >> 4;
LABEL_12:
      if ( v12 < 9u )
      {
        v13 = 4 - v12;
        goto LABEL_15;
      }
      goto LABEL_14;
    }
    v12 = v15[0] >> 4;
    v11 = 0x80;
    if ( v9 == 2 )
      goto LABEL_9;
    if ( v9 == 4 )
      goto LABEL_12;
LABEL_14:
    v13 = 0x80;
LABEL_15:
    if ( v11 != (char)0x80 )
    {
      *(_DWORD *)(a4 + 4 * v8) = v11 + (((unsigned __int64)v11 >> 32) & 0x7FE001);
      v8 = (unsigned int)(v8 + 1);
    }
    if ( v13 != (char)0x80 )
    {
      if ( (unsigned int)v8 >= 0x100 )
        return SymCryptWipe((__int64)v16, 0xF0uLL);
      *(_DWORD *)(a4 + 4 * v8) = v13 + (((unsigned __int64)v13 >> 32) & 0x7FE001);
      v8 = (unsigned int)(v8 + 1);
    }
  }
  while ( (unsigned int)v8 < 0x100 );
  return SymCryptWipe((__int64)v16, 0xF0uLL);
}
