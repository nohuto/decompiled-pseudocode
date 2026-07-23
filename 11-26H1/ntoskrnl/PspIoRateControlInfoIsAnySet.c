/*
 * XREFs of PspIoRateControlInfoIsAnySet @ 0x1404E4910
 * Callers:
 *     PspSetJobIoRateControl @ 0x1407FEF84 (PspSetJobIoRateControl.c)
 *     PspSetJobIoRateControlForVolume @ 0x140B5D6BC (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     <none>
 */

char __fastcall PspIoRateControlInfoIsAnySet(_QWORD *a1)
{
  char result; // al

  result = 0;
  if ( *a1 || a1[1] || a1[9] || a1[12] || a1[13] || a1[14] || a1[2] || a1[7] || a1[10] || a1[6] || a1[8] || a1[11] )
    return 1;
  return result;
}
