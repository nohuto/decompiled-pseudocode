/*
 * XREFs of SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_ @ 0x14015D748
 * Callers:
 *     NtGdiGetCOPPCompatibleOPMInformation @ 0x1401C9610 (NtGdiGetCOPPCompatibleOPMInformation.c)
 * Callees:
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_(
        void *a1,
        const void *a2)
{
  memmove(a1, a2, 0x1000uLL);
  return 0LL;
}
