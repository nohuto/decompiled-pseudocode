/*
 * XREFs of SymCryptMlDsaExpandA @ 0x140572788
 * Callers:
 *     SymCryptMlDsaKeyGenerateEx @ 0x14055D64C (SymCryptMlDsaKeyGenerateEx.c)
 *     SymCryptMlDsaPkDecode @ 0x140572D9C (SymCryptMlDsaPkDecode.c)
 *     SymCryptMlDsaSkDecode @ 0x140573AF4 (SymCryptMlDsaSkDecode.c)
 * Callees:
 *     SymCryptMlDsaRejNttPoly @ 0x1405737E8 (SymCryptMlDsaRejNttPoly.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 */

unsigned __int8 __fastcall SymCryptMlDsaExpandA(void *Src, size_t Size, unsigned __int8 *a3)
{
  unsigned __int8 result; // al
  unsigned __int8 v5; // bl
  unsigned __int8 i; // si
  _BYTE v7[40]; // [rsp+20h] [rbp-48h] BYREF

  result = (unsigned __int8)memmove(v7, Src, Size);
  v5 = 0;
  if ( *a3 )
  {
    result = a3[1];
    do
    {
      for ( i = 0; i < result; ++i )
      {
        v7[32] = i;
        v7[33] = v5;
        SymCryptMlDsaRejNttPoly(v7, 34LL, &a3[1024 * (i + v5 * (unsigned __int64)result) + 8]);
        result = a3[1];
      }
      ++v5;
    }
    while ( v5 < *a3 );
  }
  return result;
}
