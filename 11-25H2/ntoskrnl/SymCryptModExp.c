/*
 * XREFs of SymCryptModExp @ 0x14052167C
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14051E8E8 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsaCoreDecCrt @ 0x1405224E0 (SymCryptRsaCoreDecCrt.c)
 *     SymCryptRsaCoreEnc @ 0x140522A20 (SymCryptRsaCoreEnc.c)
 * Callees:
 *     SymCryptModExpGeneric @ 0x140534F90 (SymCryptModExpGeneric.c)
 */

__int64 __fastcall SymCryptModExp(int a1, int a2, int a3, int a4, char a5, __int64 a6, __int64 a7, __int64 a8)
{
  return SymCryptModExpGeneric(a1, a2, a3, a4, a5, a6, a7, a8);
}
