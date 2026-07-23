/*
 * XREFs of SymCryptMlDsaRejNttPoly @ 0x140572A10
 * Callers:
 *     SymCryptMlDsaExpandA @ 0x140571968 (SymCryptMlDsaExpandA.c)
 * Callees:
 *     SymCryptShake128Append @ 0x140573BC0 (SymCryptShake128Append.c)
 *     SymCryptShake256Extract @ 0x140573BD8 (SymCryptShake256Extract.c)
 *     SymCryptShake128Init @ 0x140573BF0 (SymCryptShake128Init.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall SymCryptMlDsaRejNttPoly(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v6; // esi
  unsigned int v7; // ebp
  unsigned int v8; // ebx
  unsigned int v10; // [rsp+20h] [rbp-138h] BYREF
  _BYTE v11[240]; // [rsp+30h] [rbp-128h] BYREF

  v6 = 0;
  v7 = 0;
  memset_0(v11, 0, sizeof(v11));
  SymCryptShake128Init(v11);
  SymCryptShake128Append(v11, a1, a2);
  v10 = 0;
  v8 = 0;
  while ( v7 < 0x12A )
  {
    SymCryptShake256Extract(v11, &v10, 3LL);
    BYTE2(v10) &= ~0x80u;
    ++v7;
    if ( v10 < 0x7FE001 )
    {
      *a3 = v10;
      ++v8;
      ++a3;
      if ( v8 >= 0x100 )
        return v6;
    }
  }
  return 32776;
}
