/*
 * XREFs of CmpLightWeightCreateModificationData @ 0x140A40714
 * Callers:
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140A3FE60 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140A4043C (CmpLightWeightPrepareAddKeyUoW.c)
 * Callees:
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmpLightWeightDuplicateParentLists @ 0x140A407E4 (CmpLightWeightDuplicateParentLists.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x140A40B28 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightUpdateModificationActions @ 0x140A40C40 (CmpLightWeightUpdateModificationActions.c)
 */

__int64 __fastcall CmpLightWeightCreateModificationData(__int64 a1, __int64 *a2)
{
  ULONG_PTR v4; // rbp
  __int64 Pool; // rax
  __int64 v6; // rdi
  int updated; // ebx

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
  Pool = CmpAllocatePool(0x100uLL);
  v6 = Pool;
  if ( Pool )
  {
    *(_QWORD *)Pool = 0LL;
    *(_DWORD *)(Pool + 8) = 0;
    ++*(_DWORD *)Pool;
    *(_DWORD *)(Pool + 12) = -1;
    *(_DWORD *)(Pool + 16) = -1;
    updated = CmpLightWeightDuplicateParentLists(v4);
    if ( updated < 0
      || (updated = CmpLightWeightUpdateModificationActions(
                      v6,
                      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL),
                      *(_QWORD *)(a1 + 56)),
          updated < 0) )
    {
      CmpLightWeightCleanupModifyKeyDataUoW(v4);
    }
    else
    {
      updated = 0;
      *a2 = v6;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)updated;
}
