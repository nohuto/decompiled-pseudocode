/*
 * XREFs of HvlUnblockDefaultDma @ 0x1405C0DF0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvcallFastExtended @ 0x14032DFE0 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 HvlUnblockDefaultDma()
{
  unsigned __int16 v0; // ax
  _DWORD v2[20]; // [rsp+40h] [rbp-68h] BYREF

  memset_0(v2, 0, 0x48uLL);
  v2[0] = 26;
  v0 = HvcallFastExtended(65647LL, (unsigned __int64)v2, 0x48u, 0LL, 0);
  return HvlpHvToNtStatus(v0);
}
