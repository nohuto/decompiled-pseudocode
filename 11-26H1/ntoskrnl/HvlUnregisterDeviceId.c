/*
 * XREFs of HvlUnregisterDeviceId @ 0x1405C0F40
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvcallFastExtended @ 0x14032DFE0 (HvcallFastExtended.c)
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
