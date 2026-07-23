/*
 * XREFs of HvlDmaDeleteDeviceDomain @ 0x1405BEB90
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvcallFastExtended @ 0x14032DFE0 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlDmaDeleteDeviceDomain(int *a1)
{
  unsigned __int16 v1; // ax
  _QWORD v3[2]; // [rsp+40h] [rbp-38h] BYREF
  BOOL v4; // [rsp+50h] [rbp-28h]
  int v5; // [rsp+54h] [rbp-24h]

  v3[1] = 0LL;
  v3[0] = -1LL;
  v4 = *((_BYTE *)a1 + 4) != 0;
  v5 = *a1;
  v1 = HvcallFastExtended(65733LL, (unsigned __int64)v3, 0x18u, 0LL, 0);
  return HvlpHvToNtStatus(v1);
}
