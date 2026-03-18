/*
 * XREFs of SymCryptRsakeySetValue @ 0x14051F388
 * Callers:
 *     SymCryptRsaSelftest @ 0x140527154 (SymCryptRsaSelftest.c)
 *     HashpVerifyPkcs1Signature @ 0x140820050 (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptRsakeySetValueInternal @ 0x14051F3F0 (SymCryptRsakeySetValueInternal.c)
 */

__int64 __fastcall SymCryptRsakeySetValue(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10)
{
  return SymCryptRsakeySetValueInternal(a1, a2, a3, a4, 0LL, 0LL, a5, a6, a7, a8, a9, a10);
}
