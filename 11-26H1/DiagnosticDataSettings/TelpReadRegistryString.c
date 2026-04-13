/*
 * XREFs of TelpReadRegistryString @ 0x180003870
 * Callers:
 *     ?TelpGetTelemetryClientRegPath@@YAPEAGXZ @ 0x1800035C0 (-TelpGetTelemetryClientRegPath@@YAPEAGXZ.c)
 *     TelGetRegionalSettingsValue @ 0x180004140 (TelGetRegionalSettingsValue.c)
 *     TelpReadOfflineSoftwareRegistryDword @ 0x180004FB0 (TelpReadOfflineSoftwareRegistryDword.c)
 *     TelpReadOfflineSoftwareRegistryString @ 0x180005174 (TelpReadOfflineSoftwareRegistryString.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800033BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TelpReadRegistryString(__int64 a1, const WCHAR *a2, const WCHAR *a3, void *pvData, unsigned int *a5)
{
  unsigned int *v5; // rbx
  LSTATUS ValueW; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 pcbData; // [rsp+50h] [rbp+8h] BYREF

  pcbData = a1;
  v5 = a5;
  if ( a5 )
  {
    LODWORD(pcbData) = 2 * *a5;
    ValueW = RegGetValueW(HKEY_LOCAL_MACHINE, a2, a3, 2u, 0LL, pvData, (LPDWORD)&pcbData);
    *v5 = (unsigned int)pcbData >> 1;
    if ( ValueW > 0 )
      return (unsigned __int16)ValueW | 0x80070000;
    return (unsigned int)ValueW;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x8D, (__int64)a3, (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
