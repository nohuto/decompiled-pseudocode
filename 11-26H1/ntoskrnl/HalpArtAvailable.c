/*
 * XREFs of HalpArtAvailable @ 0x1404B29B4
 * Callers:
 *     HalpArtInitialize @ 0x1404B2920 (HalpArtInitialize.c)
 *     HalpArtDiscover @ 0x14059AFC4 (HalpArtDiscover.c)
 * Callees:
 *     HalpIsHvPresent @ 0x1404B2B68 (HalpIsHvPresent.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404B2BBC (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char HalpArtAvailable()
{
  int v1; // [rsp+30h] [rbp-30h]
  int v2; // [rsp+34h] [rbp-2Ch]
  int v3; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v4[3]; // [rsp+3Ch] [rbp-24h] BYREF
  __int128 v5; // [rsp+48h] [rbp-18h]
  int v6; // [rsp+88h] [rbp+28h]

  v4[1] = 0;
  v5 = *(_OWORD *)&HalpTimerPcCpuApi;
  v1 = 0;
  v3 = 0;
  v4[0] = 0;
  v2 = 0;
  v4[2] = 0;
  v6 = 0;
  if ( (unsigned __int8)guard_dispatch_icall_no_overrides(0LL, 0LL) )
  {
    guard_dispatch_icall_no_overrides(0LL, &v3);
    guard_dispatch_icall_no_overrides(0x80000000LL, v4);
  }
  return 0;
}
