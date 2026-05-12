/*
 * XREFs of StorDeleteDictionary @ 0x14005CA34
 * Callers:
 *     RaidDeleteAdapter @ 0x1400478CC (RaidDeleteAdapter.c)
 *     NvmeAdapterDeleteNvmeController @ 0x1400E74A8 (NvmeAdapterDeleteNvmeController.c)
 *     NvmeAdapterCreateNvmeController @ 0x1401A0988 (NvmeAdapterCreateNvmeController.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorDeleteDictionary(__int64 a1)
{
  if ( *(_DWORD *)a1 )
    return 3221225729LL;
  ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0x74636944u);
  return 0LL;
}
