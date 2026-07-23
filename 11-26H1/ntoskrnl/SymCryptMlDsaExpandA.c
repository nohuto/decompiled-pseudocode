/*
 * XREFs of SymCryptMlDsaExpandA @ 0x140571968
 * Callers:
 *     SymCryptMlDsaKeyGenerateEx @ 0x14055FB34 (SymCryptMlDsaKeyGenerateEx.c)
 *     SymCryptMlDsaPkDecode @ 0x140571FA8 (SymCryptMlDsaPkDecode.c)
 *     SymCryptMlDsaSkDecode @ 0x140572D4C (SymCryptMlDsaSkDecode.c)
 * Callees:
 *     SymCryptMlDsaRejNttPoly @ 0x140572A10 (SymCryptMlDsaRejNttPoly.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall SymCryptMlDsaExpandA(void *Src, size_t Size, _BYTE *a3)
{
  unsigned int v4; // ebp
  unsigned __int8 v5; // bl
  unsigned __int8 v6; // al
  unsigned __int8 v7; // di
  _BYTE v9[40]; // [rsp+20h] [rbp-58h] BYREF

  v4 = 0;
  memmove(v9, Src, Size);
  v5 = 0;
  if ( *a3 )
  {
    while ( 1 )
    {
      v6 = a3[1];
      v7 = 0;
      if ( v6 )
        break;
LABEL_5:
      if ( ++v5 >= *a3 )
        return v4;
    }
    while ( 1 )
    {
      v9[32] = v7;
      v9[33] = v5;
      v4 = SymCryptMlDsaRejNttPoly(v9, 34LL, &a3[1024 * (v7 + v5 * (unsigned __int64)v6) + 8]);
      if ( v4 )
        break;
      v6 = a3[1];
      if ( ++v7 >= v6 )
        goto LABEL_5;
    }
  }
  return v4;
}
