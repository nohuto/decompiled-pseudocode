/*
 * XREFs of SymCryptMlDsaVerify @ 0x140560288
 * Callers:
 *     SymCryptMlDsaSelftest @ 0x140565630 (SymCryptMlDsaSelftest.c)
 *     HashpVerifyMldsaSignature @ 0x1408B2230 (HashpVerifyMldsaSignature.c)
 * Callees:
 *     SymCryptMlDsaVerifyEx @ 0x140560308 (SymCryptMlDsaVerifyEx.c)
 */

__int64 __fastcall SymCryptMlDsaVerify(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  if ( a8 || a5 > 0xFF || a7 != *(_DWORD *)(*(_QWORD *)(a1 + 8) + 52LL) )
    return 32782LL;
  else
    return SymCryptMlDsaVerifyEx(a1, a2, a3, a4, a5, 0LL, 0LL, a6, a7, 0);
}
