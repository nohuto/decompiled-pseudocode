/*
 * XREFs of MiGetColorHeadHugeRangeBase @ 0x14048E87C
 * Callers:
 *     MiUnlinkHugeRangeEx @ 0x14048E398 (MiUnlinkHugeRangeEx.c)
 *     MiInsertHugeRangeInList @ 0x14048E66C (MiInsertHugeRangeInList.c)
 *     MiHugePurgeZeroList @ 0x1405190A8 (MiHugePurgeZeroList.c)
 *     MiComputeHugeRangeColorHeadAtDpc @ 0x140532364 (MiComputeHugeRangeColorHeadAtDpc.c)
 *     MiGetHugeBadRangeFromNode @ 0x1406EB6AC (MiGetHugeBadRangeFromNode.c)
 *     MiGetPerfectColorHeadHugeRange @ 0x1406EBC70 (MiGetPerfectColorHeadHugeRange.c)
 *     MiRemoveHugeRangeAnyColor @ 0x1406ED810 (MiRemoveHugeRangeAnyColor.c)
 *     MiLockMemoryLists @ 0x140703960 (MiLockMemoryLists.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetColorHeadHugeRangeBase(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( a3 == 5 )
    return a1 + 14048;
  result = *(_QWORD *)(*(_QWORD *)(a1 + 13896) + 17040LL)
         + 8LL
         * (unsigned int)(2 * dword_140E2D780[0] * (((int)a1 - *(_DWORD *)(*(_QWORD *)(a1 + 13896) + 16LL)) / 56320));
  if ( a3 == 1 )
    result += 8LL * (unsigned int)dword_140E2D780[0];
  return result;
}
