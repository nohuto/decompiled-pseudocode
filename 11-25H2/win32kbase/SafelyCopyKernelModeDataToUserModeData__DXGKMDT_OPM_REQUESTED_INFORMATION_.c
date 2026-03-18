/*
 * XREFs of SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_ @ 0x1400831A8
 * Callers:
 *     NtGdiGetOPMInformation @ 0x140083300 (NtGdiGetOPMInformation.c)
 *     NtGdiGetCOPPCompatibleOPMInformation @ 0x1401C9610 (NtGdiGetCOPPCompatibleOPMInformation.c)
 * Callees:
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_(void *a1, void *Src)
{
  ProbeForWrite(a1, 0x1000uLL, 1u);
  memmove(a1, Src, 0x1000uLL);
  return 0LL;
}
