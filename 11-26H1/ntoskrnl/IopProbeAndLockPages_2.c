/*
 * XREFs of IopProbeAndLockPages_2 @ 0x1404E0418
 * Callers:
 *     NtSetEaFile @ 0x1409AFCE0 (NtSetEaFile.c)
 *     NtQueryEaFile @ 0x1409B0520 (NtQueryEaFile.c)
 * Callees:
 *     MmProbeAndLockPagesEx @ 0x14039FAC0 (MmProbeAndLockPagesEx.c)
 *     MmUpdateMdlTracker @ 0x1404E047C (MmUpdateMdlTracker.c)
 */

__int64 __fastcall IopProbeAndLockPages_2(__int64 a1, char a2, char a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  result = MmProbeAndLockPagesEx(a1, a2 & 1 | (2LL * (a3 & 3)));
  if ( (int)result >= 0 )
  {
    if ( (MmTrackLockedPages & 1) != 0 )
      MmUpdateMdlTracker(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
    return 0LL;
  }
  return result;
}
