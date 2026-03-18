/*
 * XREFs of SymCryptIntSetValueUint64 @ 0x14055C3E4
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x1405598D8 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeyCalculatePrivateFields @ 0x140559E18 (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptRsaCoreDecCrt @ 0x14055E3DC (SymCryptRsaCoreDecCrt.c)
 *     SymCryptRsaCoreEnc @ 0x14055E8B4 (SymCryptRsaCoreEnc.c)
 * Callees:
 *     SymCryptFdefIntSetValueUint64 @ 0x140570D54 (SymCryptFdefIntSetValueUint64.c)
 */

__int64 SymCryptIntSetValueUint64()
{
  return SymCryptFdefIntSetValueUint64();
}
