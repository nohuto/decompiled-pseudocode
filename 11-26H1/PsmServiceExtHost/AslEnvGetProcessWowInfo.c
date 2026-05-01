/*
 * XREFs of AslEnvGetProcessWowInfo @ 0x1800A15D0
 * Callers:
 *     SdbGuestHostArchsToRuntimePlatformFlag @ 0x18008FA14 (SdbGuestHostArchsToRuntimePlatformFlag.c)
 *     SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x18008FAC4 (SdbGuestTargetPlatformFlagsToRuntimePlatformFlags.c)
 *     SdbpGetBinaryRuntimePlatform @ 0x1800900C8 (SdbpGetBinaryRuntimePlatform.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x180091EE0 (SdbpGetProcessHostGuestArchitectures.c)
 *     SdbpResolveMatchingFile @ 0x1800971F8 (SdbpResolveMatchingFile.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall AslEnvGetProcessWowInfo(_WORD *a1, _WORD *a2)
{
  NTSTATUS NativeSystemInformation; // eax
  unsigned int v5; // ebx
  const char *v6; // r9
  __int64 v7; // r8
  NTSTATUS v9; // [rsp+20h] [rbp-48h]
  __int64 v10; // [rsp+30h] [rbp-38h] BYREF
  int v11; // [rsp+38h] [rbp-30h]
  __int64 SystemInformation; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+48h] [rbp-20h]

  v10 = 0LL;
  SystemInformation = 0LL;
  v11 = 0;
  v13 = 0;
  if ( !a1 )
  {
LABEL_6:
    if ( a2 )
    {
      NativeSystemInformation = ZwQuerySystemInformation(SystemProcessorInformation, &SystemInformation, 0xCu, 0LL);
      v5 = NativeSystemInformation;
      if ( NativeSystemInformation < 0 )
      {
        v6 = "ZwQuerySystemInformation failed [%x]";
        v7 = 1979LL;
        goto LABEL_4;
      }
      *a2 = SystemInformation;
    }
    return 0;
  }
  NativeSystemInformation = RtlGetNativeSystemInformation(1LL, &v10, 12LL, 0LL);
  v5 = NativeSystemInformation;
  if ( NativeSystemInformation >= 0 )
  {
    *a1 = v10;
    goto LABEL_6;
  }
  v6 = "RtlGetNativeSystemInformation failed [%x]";
  v7 = 1945LL;
LABEL_4:
  v9 = NativeSystemInformation;
  AslLogCallPrintf(1LL, "AslEnvGetProcessWowInfo", v7, v6, v9);
  return v5;
}
