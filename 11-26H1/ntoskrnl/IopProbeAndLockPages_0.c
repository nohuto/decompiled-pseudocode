/*
 * XREFs of IopProbeAndLockPages_0 @ 0x1404B4354
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x14026B1B0 (IopBuildDeviceIoControlRequest.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1404B4190 (IopBuildAsynchronousFsdRequest.c)
 * Callees:
 *     MmProbeAndLockPagesEx @ 0x14039FAC0 (MmProbeAndLockPagesEx.c)
 *     MmUpdateMdlTracker @ 0x1404E047C (MmUpdateMdlTracker.c)
 */

__int64 __fastcall IopProbeAndLockPages_0(__int64 a1, __int64 a2, char a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  result = MmProbeAndLockPagesEx(a1, 2LL * (a3 & 3));
  if ( (int)result >= 0 )
  {
    if ( (MmTrackLockedPages & 1) != 0 )
      MmUpdateMdlTracker(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
    return 0LL;
  }
  return result;
}
