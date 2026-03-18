/*
 * XREFs of SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_GET_INFO_PARAMETERS_ @ 0x14000A570
 * Callers:
 *     NtGdiGetOPMInformation @ 0x140009250 (NtGdiGetOPMInformation.c)
 * Callees:
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_GET_INFO_PARAMETERS_(void *a1, void *Src)
{
  ProbeForRead(Src, 0x1010uLL, 1u);
  memmove(a1, Src, 0x1010uLL);
  return 0LL;
}
