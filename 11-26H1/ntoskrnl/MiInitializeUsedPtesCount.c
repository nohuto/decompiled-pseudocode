/*
 * XREFs of MiInitializeUsedPtesCount @ 0x140342440
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x1403203B0 (MmUnmapViewInSystemCache.c)
 *     MiInitializeSystemPageTable @ 0x14033CC0C (MiInitializeSystemPageTable.c)
 *     MiDecreaseUsedPtes @ 0x1403410A0 (MiDecreaseUsedPtes.c)
 *     MiReducePteUseCount @ 0x1403631B0 (MiReducePteUseCount.c)
 *     MiDeleteNonPagedPoolTail @ 0x140364AB0 (MiDeleteNonPagedPoolTail.c)
 *     MiMakeOutswappedPageResident @ 0x1404296E4 (MiMakeOutswappedPageResident.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1406F720C (MiDemoteValidLargePageOneLevel.c)
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
