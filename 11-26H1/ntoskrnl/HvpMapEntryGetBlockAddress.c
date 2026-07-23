/*
 * XREFs of HvpMapEntryGetBlockAddress @ 0x1408BF840
 * Callers:
 *     HvpFindNextDirtyBlock @ 0x1408BF140 (HvpFindNextDirtyBlock.c)
 *     HvpCopyModifiedData @ 0x140B10848 (HvpCopyModifiedData.c)
 * Callees:
 *     HvpMapEntryGetBinAddress @ 0x140C5E6F0 (HvpMapEntryGetBinAddress.c)
 */

__int64 __fastcall HvpMapEntryGetBlockAddress(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 BinAddress; // rax
  _QWORD *v5; // rdx

  BinAddress = HvpMapEntryGetBinAddress(a1, a2, a3, a4);
  return *v5 + BinAddress;
}
