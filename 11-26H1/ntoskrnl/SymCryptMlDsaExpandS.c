/*
 * XREFs of SymCryptMlDsaExpandS @ 0x140571B18
 * Callers:
 *     SymCryptMlDsaKeyGenerateEx @ 0x14055FB34 (SymCryptMlDsaKeyGenerateEx.c)
 * Callees:
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 *     SymCryptMlDsaRejBoundedPoly @ 0x140572870 (SymCryptMlDsaRejBoundedPoly.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall SymCryptMlDsaExpandS(__int64 a1, const void *a2, size_t a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // esi
  unsigned int v7; // ebp
  unsigned int v8; // edi
  unsigned __int16 v10; // bx
  unsigned __int16 i; // bx
  _BYTE v13[64]; // [rsp+20h] [rbp-98h] BYREF
  unsigned __int16 v14; // [rsp+60h] [rbp-58h]

  v5 = *(unsigned __int8 *)(a1 + 20);
  v7 = *(unsigned __int8 *)(a1 + 21);
  v8 = 0;
  memmove(v13, a2, a3);
  v10 = 0;
  if ( v7 )
  {
    while ( 1 )
    {
      v14 = v10;
      v8 = SymCryptMlDsaRejBoundedPoly(a1, v13, 66LL, a4 + ((unsigned __int64)v10 << 10) + 8);
      if ( v8 )
        break;
      if ( ++v10 >= v7 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    for ( i = 0; i < v5; ++i )
    {
      v14 = i + v7;
      v8 = SymCryptMlDsaRejBoundedPoly(a1, v13, 66LL, a5 + ((unsigned __int64)i << 10) + 8);
      if ( v8 )
        break;
    }
  }
  SymCryptWipe((__int64)v13, 0x42uLL);
  return v8;
}
