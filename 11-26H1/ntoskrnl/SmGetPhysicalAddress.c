/*
 * XREFs of SmGetPhysicalAddress @ 0x1404FEF68
 * Callers:
 *     SmPrepareForFatalHeapCorruption @ 0x140250D94 (SmPrepareForFatalHeapCorruption.c)
 *     SmRecordDecompressionFailureDumpPayload @ 0x140642BD8 (SmRecordDecompressionFailureDumpPayload.c)
 *     SmEtwLogStoreCorruption @ 0x14064300C (SmEtwLogStoreCorruption.c)
 * Callees:
 *     MmStoreGetPhysicalAddress @ 0x1405321B8 (MmStoreGetPhysicalAddress.c)
 */

__int64 __fastcall SmGetPhysicalAddress(__int64 a1)
{
  return MmStoreGetPhysicalAddress(a1);
}
