/*
 * XREFs of HvlDisablePasid @ 0x1405BE8A0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvcallFastExtended @ 0x14032DFE0 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlDisablePasid(__int64 a1, int a2)
{
  unsigned __int16 v2; // ax
  _QWORD v4[2]; // [rsp+40h] [rbp-38h] BYREF
  int v5; // [rsp+50h] [rbp-28h]
  int v6; // [rsp+54h] [rbp-24h]

  v4[1] = a1;
  v5 = a2;
  v6 = 0;
  v4[0] = -1LL;
  v2 = HvcallFastExtended(65701LL, (unsigned __int64)v4, 0x18u, 0LL, 0);
  return HvlpHvToNtStatus(v2);
}
