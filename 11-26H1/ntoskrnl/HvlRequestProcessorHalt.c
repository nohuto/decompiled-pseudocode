/*
 * XREFs of HvlRequestProcessorHalt @ 0x1405C1E70
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 */

__int64 __fastcall HvlRequestProcessorHalt(unsigned __int64 *a1)
{
  unsigned __int16 v1; // ax

  v1 = HvcallInitiateHypercall(65758LL, *a1);
  return HvlpHvToNtStatus(v1);
}
