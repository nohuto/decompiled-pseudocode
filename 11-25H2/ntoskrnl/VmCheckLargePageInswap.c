/*
 * XREFs of VmCheckLargePageInswap @ 0x14078F188
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1403D8E1C (MmOutSwapWorkingSet.c)
 *     MmInSwapWorkingSet @ 0x140454FFC (MmInSwapWorkingSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VmCheckLargePageInswap(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 1648);
  if ( result )
    return *(_WORD *)(result + 136) & 1;
  return result;
}
