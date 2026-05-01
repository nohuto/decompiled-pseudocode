/*
 * XREFs of SdbpGetBinaryRuntimePlatform @ 0x1800900C8
 * Callers:
 *     SdbInitDatabaseEx @ 0x18008FBFC (SdbInitDatabaseEx.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbGuestHostArchsToRuntimePlatformFlag @ 0x18008FA14 (SdbGuestHostArchsToRuntimePlatformFlag.c)
 *     AslEnvGetProcessWowInfo @ 0x1800A15D0 (AslEnvGetProcessWowInfo.c)
 *     AslImageFileToArchitecture @ 0x1800A1B10 (AslImageFileToArchitecture.c)
 */

__int64 __fastcall SdbpGetBinaryRuntimePlatform(__int16 a1)
{
  __int16 *v1; // rbx
  __int16 v2; // ax
  int ProcessWowInfo; // eax
  __int16 v5; // [rsp+40h] [rbp+8h] BYREF
  __int16 v6; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0LL;
  v6 = 0;
  if ( a1 == 0x7FFF )
  {
    v5 = -1;
  }
  else
  {
    v2 = AslImageFileToArchitecture();
    v5 = v2;
    if ( v2 != -1 )
      return SdbGuestHostArchsToRuntimePlatformFlag(v2, v1);
  }
  ProcessWowInfo = AslEnvGetProcessWowInfo(&v6, &v5);
  if ( ProcessWowInfo < 0 )
  {
    AslLogCallPrintf(
      1LL,
      "SdbpGetBinaryRuntimePlatform",
      214LL,
      "AslEnvGetProcessWowInfo failed to determine processor info [%x]",
      ProcessWowInfo);
    return 0LL;
  }
  v2 = v5;
  v1 = &v6;
  return SdbGuestHostArchsToRuntimePlatformFlag(v2, v1);
}
