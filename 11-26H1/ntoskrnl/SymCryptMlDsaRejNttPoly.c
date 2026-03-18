/*
 * XREFs of SymCryptMlDsaRejNttPoly @ 0x1405737E8
 * Callers:
 *     SymCryptMlDsaExpandA @ 0x140572788 (SymCryptMlDsaExpandA.c)
 * Callees:
 *     SymCryptShake128Append @ 0x14057495C (SymCryptShake128Append.c)
 *     SymCryptShake256Extract @ 0x140574974 (SymCryptShake256Extract.c)
 *     SymCryptShake128Init @ 0x14057498C (SymCryptShake128Init.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall SymCryptMlDsaRejNttPoly(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v6; // rbx
  __int64 result; // rax
  unsigned int v8; // [rsp+20h] [rbp-128h] BYREF
  _BYTE v9[240]; // [rsp+30h] [rbp-118h] BYREF

  memset_0(v9, 0, sizeof(v9));
  SymCryptShake128Init(v9);
  SymCryptShake128Append(v9, a1, a2);
  v8 = 0;
  v6 = 256LL;
  do
  {
    do
    {
      SymCryptShake256Extract(v9, &v8, 3LL);
      BYTE2(v8) &= ~0x80u;
      result = v8;
    }
    while ( v8 >= 0x7FE001 );
    *a3++ = v8;
    --v6;
  }
  while ( v6 );
  return result;
}
