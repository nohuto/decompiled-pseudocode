/*
 * XREFs of SymCryptModExp @ 0x14055C7AC
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x1405598D8 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsaCoreDecCrt @ 0x14055E3DC (SymCryptRsaCoreDecCrt.c)
 *     SymCryptRsaCoreEnc @ 0x14055E8B4 (SymCryptRsaCoreEnc.c)
 * Callees:
 *     SymCryptModExpGeneric @ 0x140570FD4 (SymCryptModExpGeneric.c)
 */

__int64 __fastcall SymCryptModExp(int a1, int a2, int a3, int a4, char a5, __int64 a6, __int64 a7, __int64 a8)
{
  return SymCryptModExpGeneric(a1, a2, a3, a4, a5, a6, a7, a8);
}
