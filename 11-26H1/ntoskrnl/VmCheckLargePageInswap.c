/*
 * XREFs of VmCheckLargePageInswap @ 0x14081BB68
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1404C28B4 (MmOutSwapWorkingSet.c)
 *     MmInSwapWorkingSet @ 0x1404D58CC (MmInSwapWorkingSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VmCheckLargePageInswap(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 1648);
  if ( result )
    return *(_WORD *)(result + 152) & 1;
  return result;
}
