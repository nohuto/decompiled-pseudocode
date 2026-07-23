/*
 * XREFs of ExQueryPoolBlockSize @ 0x1406CFFC0
 * Callers:
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 * Callees:
 *     MmDeterminePoolType @ 0x14021A220 (MmDeterminePoolType.c)
 *     ExpRemoveTagForBigPages @ 0x14029A3C0 (ExpRemoveTagForBigPages.c)
 *     ExpGetEntryBilledProcess @ 0x14041CBC0 (ExpGetEntryBilledProcess.c)
 *     ExIsSpecialPoolAddress @ 0x14047E9E4 (ExIsSpecialPoolAddress.c)
 */

SIZE_T __stdcall ExQueryPoolBlockSize(PVOID PoolBlock, PBOOLEAN QuotaCharged)
{
  BOOLEAN v2; // bl
  ULONG_PTR v6; // rax
  __int64 EntryBilledProcess; // rax
  __int64 v8; // r8
  __int64 v9; // [rsp+40h] [rbp-18h] BYREF
  __int64 v10; // [rsp+48h] [rbp-10h] BYREF
  int v11; // [rsp+70h] [rbp+18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  v2 = 0;
  v9 = 0LL;
  v12 = 0LL;
  v10 = 0LL;
  v11 = 0;
  if ( (unsigned int)ExIsSpecialPoolAddress((ULONG_PTR)PoolBlock) )
  {
    *QuotaCharged = 0;
    return *(_DWORD *)((unsigned __int64)PoolBlock & 0xFFFFFFFFFFFFF000uLL) & 0xFFF;
  }
  else if ( ((unsigned __int16)PoolBlock & 0xFFF) != 0 )
  {
    EntryBilledProcess = ExpGetEntryBilledProcess((__int64)PoolBlock - 16);
    if ( EntryBilledProcess )
      v2 = EntryBilledProcess != -1;
    *QuotaCharged = v2;
    return v8 - 16;
  }
  else
  {
    v6 = MmDeterminePoolType((unsigned __int64)PoolBlock);
    ExpRemoveTagForBigPages((ULONG_PTR)PoolBlock, v6, 0, &v11, &v10, &v9, (ULONG_PTR *)&v12);
    *QuotaCharged = (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL;
    return 4096LL;
  }
}
