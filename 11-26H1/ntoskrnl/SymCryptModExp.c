/*
 * XREFs of SymCryptModExp @ 0x14055EC94
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14055BD68 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsaCoreDecCrt @ 0x140560900 (SymCryptRsaCoreDecCrt.c)
 *     SymCryptRsaCoreEnc @ 0x140560DD8 (SymCryptRsaCoreEnc.c)
 * Callees:
 *     SymCryptModExpGeneric @ 0x1405701B4 (SymCryptModExpGeneric.c)
 */

__int64 __fastcall SymCryptModExp(int a1, int a2, int a3, int a4, char a5, __int64 a6, __int64 a7, __int64 a8)
{
  return SymCryptModExpGeneric(a1, a2, a3, a4, a5, a6, a7, a8);
}
