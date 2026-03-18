/*
 * XREFs of HvpMapEntryGetBlockAddress @ 0x1408B9270
 * Callers:
 *     HvpFindNextDirtyBlock @ 0x1408B8B70 (HvpFindNextDirtyBlock.c)
 *     HvpCopyModifiedData @ 0x140B0F018 (HvpCopyModifiedData.c)
 * Callees:
 *     HvpMapEntryGetBinAddress @ 0x140C586F0 (HvpMapEntryGetBinAddress.c)
 */

__int64 __fastcall HvpMapEntryGetBlockAddress(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 BinAddress; // rax
  _QWORD *v5; // rdx

  BinAddress = HvpMapEntryGetBinAddress(a1, a2, a3, a4);
  return *v5 + BinAddress;
}
