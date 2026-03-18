/*
 * XREFs of HvlClearPrqStalled @ 0x1405BBCE0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x14032BFB0 (HvcallFastExtended.c)
 *     HvlpHvToNtStatus @ 0x1403E7DC0 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlClearPrqStalled(int a1)
{
  unsigned __int16 v1; // ax
  _DWORD v3[6]; // [rsp+30h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = 0;
  v1 = HvcallFastExtended(65705LL, (unsigned __int64)v3, 8u, 0LL, 0);
  return HvlpHvToNtStatus(v1);
}
