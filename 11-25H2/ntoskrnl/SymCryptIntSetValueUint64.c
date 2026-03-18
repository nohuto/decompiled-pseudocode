/*
 * XREFs of SymCryptIntSetValueUint64 @ 0x1405212B4
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14051E8E8 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeyCalculatePrivateFields @ 0x14051EE0C (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptRsaCoreDecCrt @ 0x1405224E0 (SymCryptRsaCoreDecCrt.c)
 *     SymCryptRsaCoreEnc @ 0x140522A20 (SymCryptRsaCoreEnc.c)
 * Callees:
 *     SymCryptFdefIntSetValueUint64 @ 0x140534D0C (SymCryptFdefIntSetValueUint64.c)
 */

__int64 SymCryptIntSetValueUint64()
{
  return SymCryptFdefIntSetValueUint64();
}
