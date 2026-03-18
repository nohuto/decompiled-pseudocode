/*
 * XREFs of HvlRequestProcessorHalt @ 0x1405BF600
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x14032BB00 (HvcallInitiateHypercall.c)
 *     HvlpHvToNtStatus @ 0x1403E7DC0 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlRequestProcessorHalt(unsigned __int64 *a1)
{
  unsigned __int16 v1; // ax

  v1 = HvcallInitiateHypercall(65758LL, *a1);
  return HvlpHvToNtStatus(v1);
}
