/*
 * XREFs of SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_RANDOM_NUMBER_ @ 0x1401F40C0
 * Callers:
 *     NtGdiGetOPMRandomNumber @ 0x140008620 (NtGdiGetOPMRandomNumber.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_RANDOM_NUMBER_(_OWORD *a1, _OWORD *a2)
{
  ProbeForWrite(a1, 0x10uLL, 1u);
  *a1 = *a2;
  return 0LL;
}
