/*
 * XREFs of SymCryptModElementGetValue @ 0x14055EA84
 * Callers:
 *     SymCryptEcDsaSignEx @ 0x14055EED8 (SymCryptEcDsaSignEx.c)
 *     SymCryptRsaCoreEnc @ 0x140560DD8 (SymCryptRsaCoreEnc.c)
 *     SymCryptEcpointGetValue @ 0x1405667FC (SymCryptEcpointGetValue.c)
 * Callees:
 *     SymCryptFdefModElementGetValue @ 0x14056E6AC (SymCryptFdefModElementGetValue.c)
 */

__int64 __fastcall SymCryptModElementGetValue(int a1, int a2, int a3, int a4, int a5, __int64 a6, __int64 a7)
{
  return SymCryptFdefModElementGetValue(a1, a2, a3, a4, a5, a6, a7);
}
