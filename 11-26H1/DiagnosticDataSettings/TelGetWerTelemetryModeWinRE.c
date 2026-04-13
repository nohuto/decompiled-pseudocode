/*
 * XREFs of TelGetWerTelemetryModeWinRE @ 0x1800045A0
 * Callers:
 *     <none>
 * Callees:
 *     TelpReadOfflineOsPolicySetting @ 0x180004E10 (TelpReadOfflineOsPolicySetting.c)
 *     TelpReadOfflineSoftwareRegistryDword @ 0x180004FB0 (TelpReadOfflineSoftwareRegistryDword.c)
 */

__int64 TelGetWerTelemetryModeWinRE()
{
  __int64 result; // rax
  int v1; // eax
  int v2; // eax
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int pvData; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  if ( (int)TelpReadOfflineOsPolicySetting(&v3) < 0 || !v3 )
    return 0LL;
  result = 1LL;
  if ( v3 == 1 )
    return result;
  pvData = 0;
  v1 = TelpReadOfflineSoftwareRegistryDword(
         L"OFFLINE_AUTH\\Policies\\Microsoft\\Windows\\DataCollection",
         L"LimitDumpCollection",
         &pvData);
  if ( v1 >= 0 )
  {
    v2 = pvData;
    return 3 - (unsigned int)(v2 != 0);
  }
  if ( v1 != -2147024894 )
  {
    v2 = v1 + 2147024893;
    return 3 - (unsigned int)(v2 != 0);
  }
  return 3LL;
}
