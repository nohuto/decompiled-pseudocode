/*
 * XREFs of SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x18008FAC4
 * Callers:
 *     SdbpGetDatabaseRuntimePlatform @ 0x18008E058 (SdbpGetDatabaseRuntimePlatform.c)
 *     SdbResolveDatabaseEx @ 0x18009127C (SdbResolveDatabaseEx.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbGuestHostArchsToRuntimePlatformFlag @ 0x18008FA14 (SdbGuestHostArchsToRuntimePlatformFlag.c)
 *     AslEnvGetProcessWowInfo @ 0x1800A15D0 (AslEnvGetProcessWowInfo.c)
 */

__int64 __fastcall SdbGuestTargetPlatformFlagsToRuntimePlatformFlags(int a1)
{
  unsigned __int8 v1; // si
  unsigned int v3; // edi
  int ProcessWowInfo; // eax
  __int16 v5; // bp
  unsigned __int64 i; // rbx
  __int16 v7; // cx
  unsigned __int64 j; // rax
  __int16 v9; // [rsp+50h] [rbp+8h] BYREF

  v1 = a1;
  v9 = 0;
  if ( !a1 )
    return 0LL;
  v3 = 0;
  ProcessWowInfo = AslEnvGetProcessWowInfo(&v9, 0LL);
  if ( ProcessWowInfo >= 0 )
  {
    v5 = v9;
    for ( i = 0LL; i < 15; i += 3LL )
    {
      if ( (v1 & dword_1800C2E70[i + 34] & 0x1F) != 0 )
      {
        v7 = dword_1800C2E70[i + 33];
        for ( j = 0LL; j < 0x80; j += 16LL )
        {
          if ( *(_WORD *)((char *)&unk_1800E14A0 + j) == v5 && *(_WORD *)((char *)&unk_1800E14A2 + j) == v7 )
          {
            v3 |= SdbGuestHostArchsToRuntimePlatformFlag(v7, &v9);
            break;
          }
        }
      }
    }
  }
  else
  {
    AslLogCallPrintf(
      1LL,
      "SdbGuestTargetPlatformFlagsToRuntimePlatformFlags",
      325LL,
      "AslEnvGetProcessWowInfo failed to determine processor info [%x]",
      ProcessWowInfo);
  }
  return v3;
}
