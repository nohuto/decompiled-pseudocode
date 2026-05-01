/*
 * XREFs of SdbGuestHostArchsToRuntimePlatformFlag @ 0x18008FA14
 * Callers:
 *     SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x18008FAC4 (SdbGuestTargetPlatformFlagsToRuntimePlatformFlags.c)
 *     SdbpGetBinaryRuntimePlatform @ 0x1800900C8 (SdbpGetBinaryRuntimePlatform.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslEnvGetProcessWowInfo @ 0x1800A15D0 (AslEnvGetProcessWowInfo.c)
 */

__int64 __fastcall SdbGuestHostArchsToRuntimePlatformFlag(__int16 a1, __int16 *a2)
{
  __int64 v3; // rbx
  __int16 v4; // dx
  int ProcessWowInfo; // eax
  unsigned __int64 i; // rax
  __int16 v8; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 == -1 )
    return 0LL;
  v3 = 0LL;
  v8 = -1;
  if ( !a2 || (v4 = *a2, v8 = v4, v4 == -1) )
  {
    ProcessWowInfo = AslEnvGetProcessWowInfo(&v8, 0LL);
    if ( ProcessWowInfo < 0 )
    {
      AslLogCallPrintf(
        1LL,
        "SdbGuestHostArchsToRuntimePlatformFlag",
        248LL,
        "AslEnvGetProcessWowInfo failed to determine processor info [%x]",
        ProcessWowInfo);
      return 0LL;
    }
    v4 = v8;
  }
  for ( i = 0LL; i < 32; i += 4LL )
  {
    if ( a1 == LOWORD(dword_1800C2E70[i + 1]) && v4 == HIWORD(dword_1800C2E70[i + 1]) )
      return dword_1800C2E70[4 * v3 + 2];
    ++v3;
  }
  return 0LL;
}
