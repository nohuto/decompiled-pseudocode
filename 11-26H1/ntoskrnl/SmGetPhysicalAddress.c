/*
 * XREFs of SmGetPhysicalAddress @ 0x1405056B8
 * Callers:
 *     SmPrepareForFatalHeapCorruption @ 0x14024F434 (SmPrepareForFatalHeapCorruption.c)
 *     SmRecordDecompressionFailureDumpPayload @ 0x14063EFF8 (SmRecordDecompressionFailureDumpPayload.c)
 *     SmEtwLogStoreCorruption @ 0x14063F42C (SmEtwLogStoreCorruption.c)
 * Callees:
 *     MmStoreGetPhysicalAddress @ 0x14052FCB8 (MmStoreGetPhysicalAddress.c)
 */

__int64 __fastcall SmGetPhysicalAddress(__int64 a1)
{
  return MmStoreGetPhysicalAddress(a1);
}
