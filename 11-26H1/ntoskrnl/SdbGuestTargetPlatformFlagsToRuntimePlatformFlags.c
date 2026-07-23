/*
 * XREFs of SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x14088C444
 * Callers:
 *     SdbResolveDatabaseEx @ 0x14088C954 (SdbResolveDatabaseEx.c)
 *     SdbpGetDatabaseRuntimePlatform @ 0x140B3A888 (SdbpGetDatabaseRuntimePlatform.c)
 * Callees:
 *     SdbGuestHostArchsToRuntimePlatformFlag @ 0x14088C394 (SdbGuestHostArchsToRuntimePlatformFlag.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslEnvGetProcessWowInfo @ 0x140B70F50 (AslEnvGetProcessWowInfo.c)
 */

__int64 __fastcall SdbGuestTargetPlatformFlagsToRuntimePlatformFlags(int a1)
{
  unsigned __int8 v1; // si
  unsigned int v3; // edi
  unsigned __int64 i; // rbx
  __int16 v5; // r8
  unsigned __int64 j; // rcx
  __int16 v7; // [rsp+50h] [rbp+8h] BYREF

  v1 = a1;
  v7 = 0;
  if ( !a1 )
    return 0LL;
  v3 = 0;
  if ( (int)AslEnvGetProcessWowInfo(&v7, 0LL) >= 0 )
  {
    for ( i = 0LL; i < 0x3C; i += 12LL )
    {
      if ( (v1 & *((_BYTE *)qword_14003F130 + i) & 0x1F) != 0 )
      {
        v5 = *(_WORD *)&algn_14003F127[i + 5];
        for ( j = 0LL; j < 0x80; j += 16LL )
        {
          if ( *(_WORD *)((char *)&unk_140E0A110 + j) == v7 && *(_WORD *)((char *)&unk_140E0A112 + j) == v5 )
          {
            v3 |= SdbGuestHostArchsToRuntimePlatformFlag(v5, &v7);
            break;
          }
        }
      }
    }
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbGuestTargetPlatformFlagsToRuntimePlatformFlags",
      325,
      (unsigned int)"AslEnvGetProcessWowInfo failed to determine processor info [%x]");
  }
  return v3;
}
