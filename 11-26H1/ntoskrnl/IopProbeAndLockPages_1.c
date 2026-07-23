/*
 * XREFs of IopProbeAndLockPages_1 @ 0x1404BF110
 * Callers:
 *     IopAllocateAndPopulateWriteIrp @ 0x1404B3F40 (IopAllocateAndPopulateWriteIrp.c)
 * Callees:
 *     MmProbeAndLockPagesEx @ 0x1403A1820 (MmProbeAndLockPagesEx.c)
 *     MmUpdateMdlTracker @ 0x1404D9B5C (MmUpdateMdlTracker.c)
 */

__int64 __fastcall IopProbeAndLockPages_1(__int64 a1, char a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  result = MmProbeAndLockPagesEx(a1, a2 & 1);
  if ( (int)result >= 0 )
  {
    if ( (MmTrackLockedPages & 1) != 0 )
      MmUpdateMdlTracker(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
    return 0LL;
  }
  return result;
}
