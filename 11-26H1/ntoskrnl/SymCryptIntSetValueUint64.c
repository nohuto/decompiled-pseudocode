/*
 * XREFs of SymCryptIntSetValueUint64 @ 0x14055E8CC
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14055BD68 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeyCalculatePrivateFields @ 0x14055C2A8 (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptRsaCoreDecCrt @ 0x140560900 (SymCryptRsaCoreDecCrt.c)
 *     SymCryptRsaCoreEnc @ 0x140560DD8 (SymCryptRsaCoreEnc.c)
 * Callees:
 *     SymCryptFdefIntSetValueUint64 @ 0x14056FF34 (SymCryptFdefIntSetValueUint64.c)
 */

__int64 SymCryptIntSetValueUint64()
{
  return SymCryptFdefIntSetValueUint64();
}
