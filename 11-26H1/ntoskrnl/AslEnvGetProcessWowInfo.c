/*
 * XREFs of AslEnvGetProcessWowInfo @ 0x140B6DB80
 * Callers:
 *     SdbpResolveMatchingFile @ 0x140885488 (SdbpResolveMatchingFile.c)
 *     SdbGuestHostArchsToRuntimePlatformFlag @ 0x140885F94 (SdbGuestHostArchsToRuntimePlatformFlag.c)
 *     SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x140886044 (SdbGuestTargetPlatformFlagsToRuntimePlatformFlags.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x140886E70 (SdbpGetProcessHostGuestArchitectures.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x140723AB0 (ZwQuerySystemInformation.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslEnvGetProcessWowInfo(_WORD *a1, _WORD *a2)
{
  int SystemInformation; // ebx
  __int64 v6; // [rsp+30h] [rbp-38h] BYREF
  int v7; // [rsp+38h] [rbp-30h]
  __int64 v8; // [rsp+40h] [rbp-28h] BYREF
  int v9; // [rsp+48h] [rbp-20h]

  v6 = 0LL;
  v8 = 0LL;
  v7 = 0;
  v9 = 0;
  if ( !a1 )
  {
LABEL_5:
    if ( a2 )
    {
      SystemInformation = ZwQuerySystemInformation(1LL, (__int64)&v8);
      if ( SystemInformation < 0 )
        goto LABEL_3;
      *a2 = v8;
    }
    return 0;
  }
  SystemInformation = ZwQuerySystemInformation(1LL, (__int64)&v6);
  if ( SystemInformation >= 0 )
  {
    *a1 = v6;
    goto LABEL_5;
  }
LABEL_3:
  AslLogCallPrintf(1LL, (__int64)"AslEnvGetProcessWowInfo");
  return (unsigned int)SystemInformation;
}
