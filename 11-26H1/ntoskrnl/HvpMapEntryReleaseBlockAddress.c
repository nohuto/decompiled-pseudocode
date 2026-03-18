/*
 * XREFs of HvpMapEntryReleaseBlockAddress @ 0x140B0F0D8
 * Callers:
 *     HvpCopyModifiedData @ 0x140B0F018 (HvpCopyModifiedData.c)
 * Callees:
 *     HvpMapEntryReleaseBinAddress @ 0x140C58710 (HvpMapEntryReleaseBinAddress.c)
 */

__int64 __fastcall HvpMapEntryReleaseBlockAddress(__int64 a1, __int64 a2, __int64 a3)
{
  return HvpMapEntryReleaseBinAddress(a1, a2, a3);
}
