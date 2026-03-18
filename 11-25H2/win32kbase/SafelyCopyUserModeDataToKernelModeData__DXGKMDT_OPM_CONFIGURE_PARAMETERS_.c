/*
 * XREFs of SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_CONFIGURE_PARAMETERS_ @ 0x1401477F4
 * Callers:
 *     NtGdiConfigureOPMProtectedOutput @ 0x140147610 (NtGdiConfigureOPMProtectedOutput.c)
 * Callees:
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_CONFIGURE_PARAMETERS_(void *a1, const void *a2)
{
  memmove(a1, a2, 0x1000uLL);
  return 0LL;
}
