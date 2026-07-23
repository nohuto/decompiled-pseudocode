/*
 * XREFs of MiGetColorHeadHugeRangeBase @ 0x1404883BC
 * Callers:
 *     MiUnlinkHugeRangeEx @ 0x140487ED8 (MiUnlinkHugeRangeEx.c)
 *     MiInsertHugeRangeInList @ 0x1404881AC (MiInsertHugeRangeInList.c)
 *     MiHugePurgeZeroList @ 0x140512B18 (MiHugePurgeZeroList.c)
 *     MiComputeHugeRangeColorHeadAtDpc @ 0x140534804 (MiComputeHugeRangeColorHeadAtDpc.c)
 *     MiGetHugeBadRangeFromNode @ 0x1406F034C (MiGetHugeBadRangeFromNode.c)
 *     MiGetPerfectColorHeadHugeRange @ 0x1406F0910 (MiGetPerfectColorHeadHugeRange.c)
 *     MiRemoveHugeRangeAnyColor @ 0x1406F24B0 (MiRemoveHugeRangeAnyColor.c)
 *     MiLockMemoryLists @ 0x140708630 (MiLockMemoryLists.c)
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
         * (unsigned int)(2 * dword_140E2D900[0] * (((int)a1 - *(_DWORD *)(*(_QWORD *)(a1 + 13896) + 16LL)) / 56320));
  if ( a3 == 1 )
    result += 8LL * (unsigned int)dword_140E2D900[0];
  return result;
}
