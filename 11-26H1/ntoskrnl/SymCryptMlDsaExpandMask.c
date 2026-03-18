/*
 * XREFs of SymCryptMlDsaExpandMask @ 0x140572830
 * Callers:
 *     SymCryptMlDsaSignEx @ 0x14055D89C (SymCryptMlDsaSignEx.c)
 * Callees:
 *     SymCryptMlDsaPolyElementDecode @ 0x14057310C (SymCryptMlDsaPolyElementDecode.c)
 *     SymCryptMlDsaVectorNTT @ 0x14057463C (SymCryptMlDsaVectorNTT.c)
 *     SymCryptShake128Append @ 0x14057495C (SymCryptShake128Append.c)
 *     SymCryptShake256Extract @ 0x140574974 (SymCryptShake256Extract.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptMlDsaExpandMask(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int16 a5, _BYTE *a6)
{
  unsigned __int16 v6; // si
  __int64 v11; // rbx
  _WORD v13[8]; // [rsp+20h] [rbp-2E8h] BYREF
  _BYTE v14[640]; // [rsp+30h] [rbp-2D8h] BYREF

  v6 = 0;
  if ( *a6 )
  {
    v11 = 32 * (*(unsigned __int8 *)(a1 + 26) + 1LL);
    do
    {
      v13[0] = a5 + v6;
      SymCryptShake128Append(a2, a3, a4);
      SymCryptShake128Append(a2, v13, 2LL);
      SymCryptShake256Extract(a2, v14, v11);
      SymCryptMlDsaPolyElementDecode(
        v14,
        (unsigned int)*(unsigned __int8 *)(a1 + 26) + 1,
        (unsigned int)(1 << *(_BYTE *)(a1 + 26)),
        &a6[1024 * (unsigned __int64)v6++ + 8]);
    }
    while ( v6 < (unsigned __int8)*a6 );
  }
  return SymCryptMlDsaVectorNTT(a6);
}
