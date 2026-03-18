/*
 * XREFs of SymCryptMlDsaExpandS @ 0x140572930
 * Callers:
 *     SymCryptMlDsaKeyGenerateEx @ 0x14055D64C (SymCryptMlDsaKeyGenerateEx.c)
 * Callees:
 *     SymCryptWipe @ 0x140556458 (SymCryptWipe.c)
 *     SymCryptMlDsaRejBoundedPoly @ 0x140573664 (SymCryptMlDsaRejBoundedPoly.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 */

__int64 __fastcall SymCryptMlDsaExpandS(__int64 a1, const void *a2, size_t a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebp
  unsigned int v7; // r14d
  unsigned __int16 v9; // bx
  unsigned __int16 i; // di
  _BYTE v12[64]; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int16 v13; // [rsp+60h] [rbp-68h]

  v5 = *(unsigned __int8 *)(a1 + 20);
  v7 = *(unsigned __int8 *)(a1 + 21);
  memmove(v12, a2, a3);
  v9 = 0;
  for ( i = 0; i < v7; ++i )
  {
    v13 = i;
    SymCryptMlDsaRejBoundedPoly(a1, v12, 66LL, a4 + ((unsigned __int64)i << 10) + 8);
  }
  if ( v5 )
  {
    do
    {
      v13 = v9 + v7;
      SymCryptMlDsaRejBoundedPoly(a1, v12, 66LL, a5 + ((unsigned __int64)v9++ << 10) + 8);
    }
    while ( v9 < v5 );
  }
  return SymCryptWipe((__int64)v12, 0x42uLL);
}
