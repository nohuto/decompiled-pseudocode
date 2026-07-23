/*
 * XREFs of ExpReadSiloTimeZoneMarker @ 0x14083C4A4
 * Callers:
 *     ExpSetTimeZoneInformation @ 0x1408395BC (ExpSetTimeZoneInformation.c)
 *     ExpRefreshTimeZoneInformation @ 0x140B13E1C (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     ExpReadTimeZoneInformation @ 0x14083C4D8 (ExpReadTimeZoneInformation.c)
 */

bool ExpReadSiloTimeZoneMarker()
{
  int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  ExpReadTimeZoneInformation(L"SiloTimeZoneMarker", 0LL, &v1);
  return v1 != 0;
}
