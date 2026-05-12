/*
 * XREFs of NvmeAdapterStopAdapter @ 0x1400DF15C
 * Callers:
 *     NvmeAdapterStop @ 0x1400DEC40 (NvmeAdapterStop.c)
 * Callees:
 *     NvmeCallMiniportAdapterControl @ 0x140078740 (NvmeCallMiniportAdapterControl.c)
 *     NvmeIsAdapterControlSupported @ 0x1400787E0 (NvmeIsAdapterControlSupported.c)
 *     NvmeAdapterAcquireInterruptLock @ 0x1400D295C (NvmeAdapterAcquireInterruptLock.c)
 *     NvmeAdapterReleaseInterruptLock @ 0x1400DBE58 (NvmeAdapterReleaseInterruptLock.c)
 */

__int64 __fastcall NvmeAdapterStopAdapter(__int64 a1)
{
  KIRQL v3; // bl
  int v4; // esi

  if ( (*(_BYTE *)(a1 + 144) & 2) == 0 )
    return 0LL;
  v3 = NvmeAdapterAcquireInterruptLock(a1);
  v4 = NvmeCallMiniportAdapterControl(a1 + 168);
  NvmeAdapterReleaseInterruptLock(a1, v3);
  if ( NvmeIsAdapterControlSupported(a1 + 168, 3) )
    NvmeCallMiniportAdapterControl(a1 + 168);
  if ( v4 >= 0 )
    *(_QWORD *)(a1 + 144) &= ~2uLL;
  return (unsigned int)v4;
}
