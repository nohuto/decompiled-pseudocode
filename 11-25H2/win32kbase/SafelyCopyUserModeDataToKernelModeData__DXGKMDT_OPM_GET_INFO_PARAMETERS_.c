/*
 * XREFs of SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_GET_INFO_PARAMETERS_ @ 0x1400832B8
 * Callers:
 *     NtGdiGetOPMInformation @ 0x140083300 (NtGdiGetOPMInformation.c)
 * Callees:
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_GET_INFO_PARAMETERS_(void *a1, const void *a2)
{
  memmove(a1, a2, 0x1010uLL);
  return 0LL;
}
