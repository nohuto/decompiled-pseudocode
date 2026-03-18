/*
 * XREFs of HvlUnregisterDeviceId @ 0x1405BE6D0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x14032BFB0 (HvcallFastExtended.c)
 *     HvlpHvToNtStatus @ 0x1403E7DC0 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlUnregisterDeviceId(__int64 a1)
{
  unsigned __int16 v1; // ax
  _QWORD v3[3]; // [rsp+30h] [rbp-18h] BYREF

  v3[1] = a1;
  v3[0] = -1LL;
  v1 = HvcallFastExtended(65667LL, (unsigned __int64)v3, 0x10u, 0LL, 0);
  return HvlpHvToNtStatus(v1);
}
