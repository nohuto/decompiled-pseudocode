/*
 * XREFs of MiInitializeUsedPtesCount @ 0x1403403C0
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x14031E380 (MmUnmapViewInSystemCache.c)
 *     MiInitializeSystemPageTable @ 0x14033AB8C (MiInitializeSystemPageTable.c)
 *     MiDecreaseUsedPtes @ 0x14033F020 (MiDecreaseUsedPtes.c)
 *     MiReducePteUseCount @ 0x140361410 (MiReducePteUseCount.c)
 *     MiDeleteNonPagedPoolTail @ 0x140362D10 (MiDeleteNonPagedPoolTail.c)
 *     MiMakeOutswappedPageResident @ 0x14040BF9C (MiMakeOutswappedPageResident.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1406F259C (MiDemoteValidLargePageOneLevel.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiInitializeUsedPtesCount(__int64 a1, unsigned int a2)
{
  unsigned __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 36) & 0x4000000) != 0 )
  {
    result = 0xFFFFC00FFFFFFFFFuLL;
    *(_QWORD *)a1 = ((unsigned __int64)a2 << 36) ^ (*(_QWORD *)a1 ^ ((unsigned __int64)a2 << 36)) & 0xFFFFC00FFFFFFFFFuLL;
  }
  else
  {
    result = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 16) = ((unsigned __int64)a2 << 17) ^ (result ^ ((unsigned __int64)a2 << 17)) & 0xFFFFFFFFF801FFFFuLL;
  }
  return result;
}
