/*
 * XREFs of SymCryptModElementGetValue @ 0x14055C59C
 * Callers:
 *     SymCryptEcDsaSignEx @ 0x14055C9F0 (SymCryptEcDsaSignEx.c)
 *     SymCryptRsaCoreEnc @ 0x14055E8B4 (SymCryptRsaCoreEnc.c)
 *     SymCryptEcpointGetValue @ 0x14056440C (SymCryptEcpointGetValue.c)
 * Callees:
 *     SymCryptFdefModElementGetValue @ 0x14056F4CC (SymCryptFdefModElementGetValue.c)
 */

__int64 __fastcall SymCryptModElementGetValue(int a1, int a2, int a3, int a4, int a5, __int64 a6, __int64 a7)
{
  return SymCryptFdefModElementGetValue(a1, a2, a3, a4, a5, a6, a7);
}
