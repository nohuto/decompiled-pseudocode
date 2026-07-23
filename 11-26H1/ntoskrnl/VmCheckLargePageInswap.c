/*
 * XREFs of VmCheckLargePageInswap @ 0x140821D78
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1404BC104 (MmOutSwapWorkingSet.c)
 *     MmInSwapWorkingSet @ 0x1404CF090 (MmInSwapWorkingSet.c)
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
