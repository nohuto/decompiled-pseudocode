/*
 * XREFs of SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_ @ 0x1401F4108
 * Callers:
 *     NtGdiConfigureOPMProtectedOutput @ 0x14019BD20 (NtGdiConfigureOPMProtectedOutput.c)
 *     NtGdiGetCOPPCompatibleOPMInformation @ 0x1401F42F0 (NtGdiGetCOPPCompatibleOPMInformation.c)
 * Callees:
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_(
        void *a1,
        void *Src)
{
  ProbeForRead(Src, 0x1000uLL, 1u);
  memmove(a1, Src, 0x1000uLL);
  return 0LL;
}
