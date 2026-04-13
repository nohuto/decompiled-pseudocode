/*
 * XREFs of TelpReadOfflineSoftwareRegistryDword @ 0x180004FB0
 * Callers:
 *     TelGetWerTelemetryModeWinRE @ 0x1800045A0 (TelGetWerTelemetryModeWinRE.c)
 *     TelpReadOfflineOsPolicySetting @ 0x180004E10 (TelpReadOfflineOsPolicySetting.c)
 * Callees:
 *     __security_check_cookie @ 0x180001460 (__security_check_cookie.c)
 *     memset_0 @ 0x18000203A (memset_0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800033BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1800033E0 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     TelpReadRegistryString @ 0x180003870 (TelpReadRegistryString.c)
 */

__int64 __fastcall TelpReadOfflineSoftwareRegistryDword(LPCWSTR lpSubKey, LPCWSTR lpValue, _DWORD *pvData)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int RegistryString; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  LSTATUS KeyW; // eax
  LSTATUS ValueW; // eax
  int v15; // [rsp+40h] [rbp-258h] BYREF
  DWORD pcbData[3]; // [rsp+44h] [rbp-254h] BYREF
  WCHAR File[264]; // [rsp+50h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+0h]

  if ( !lpSubKey )
  {
    v6 = -2147024809;
    v7 = 2038LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(retaddr, (void *)v7, (__int64)pvData, (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  if ( !lpValue )
  {
    v6 = -2147024809;
    v7 = 2039LL;
    goto LABEL_18;
  }
  if ( !pvData )
  {
    v6 = -2147024809;
    v7 = 2040LL;
    goto LABEL_18;
  }
  memset_0(File, 0, 0x208uLL);
  v15 = 260;
  pcbData[0] = 4;
  *pvData = 0;
  RegistryString = TelpReadRegistryString(
                     v8,
                     L"Software\\Microsoft\\RecoveryEnvironment",
                     L"TargetOS",
                     File,
                     (unsigned int *)&v15);
  v6 = RegistryString;
  if ( RegistryString < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x7E2, v11, (const char *)(unsigned int)RegistryString);
    v7 = 2050LL;
    goto LABEL_18;
  }
  v6 = StringCchCatW(File, v10, (char *)L"\\System32\\config\\SOFTWARE");
  if ( v6 < 0 )
  {
    v7 = 2053LL;
    goto LABEL_18;
  }
  KeyW = RegLoadKeyW(HKEY_LOCAL_MACHINE, L"OFFLINE_AUTH", File);
  v6 = KeyW;
  if ( KeyW > 0 )
    v6 = (unsigned __int16)KeyW | 0x80070000;
  if ( v6 >= 0 )
  {
    ValueW = RegGetValueW(HKEY_LOCAL_MACHINE, lpSubKey, lpValue, 0x10010u, 0LL, pvData, pcbData);
    v6 = ValueW;
    if ( ValueW > 0 )
      v6 = (unsigned __int16)ValueW | 0x80070000;
  }
  RegUnLoadKeyW(HKEY_LOCAL_MACHINE, L"OFFLINE_AUTH");
  if ( v6 < 0 )
  {
    v7 = 2076LL;
    goto LABEL_18;
  }
  return (unsigned int)v6;
}
