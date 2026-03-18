/*
 * XREFs of SymCryptModElementGetValue @ 0x14052146C
 * Callers:
 *     SymCryptEcDsaSignEx @ 0x1405218C0 (SymCryptEcDsaSignEx.c)
 *     SymCryptRsaCoreEnc @ 0x140522A20 (SymCryptRsaCoreEnc.c)
 *     SymCryptEcpointGetValue @ 0x140528280 (SymCryptEcpointGetValue.c)
 * Callees:
 *     SymCryptFdefModElementGetValue @ 0x14053349C (SymCryptFdefModElementGetValue.c)
 */

__int64 __fastcall SymCryptModElementGetValue(int a1, int a2, int a3, int a4, int a5, __int64 a6, __int64 a7)
{
  return SymCryptFdefModElementGetValue(a1, a2, a3, a4, a5, a6, a7);
}
