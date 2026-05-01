/*
 * XREFs of ?HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z @ 0x1800625B0
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18002365C (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?HampSystemQueryDWordValue@@YAJPEAUHKEY__@@PEBGPEAK@Z @ 0x18008BBB0 (-HampSystemQueryDWordValue@@YAJPEAUHKEY__@@PEBGPEAK@Z.c)
 */

void __fastcall HampUtilQueryQuiesceTimeouts(unsigned int *a1, unsigned int *a2)
{
  LSTATUS v4; // eax
  bool v5; // sf
  unsigned int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+48h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+50h] [rbp+18h] BYREF

  hKey = 0LL;
  v8 = 5000;
  v9 = 600000;
  v4 = RegOpenKeyExW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows NT\\CurrentVersion\\HostActivityManager",
         0,
         1u,
         &hKey);
  v5 = v4 < 0;
  if ( v4 > 0 )
    v5 = 1;
  if ( v5
    || (int)HampSystemQueryDWordValue(hKey, L"QuiesceDurationMs", &v8) < 0
    || (int)HampSystemQueryDWordValue(hKey, L"EeDurationMs", &v9) < 0
    || (v6 = v8, v7 = v9, v8 > v9)
    || !v9 )
  {
    v6 = 5000;
    v7 = 600000;
  }
  *a1 = v6;
  if ( a2 )
    *a2 = v7;
  if ( hKey )
    RegCloseKey(hKey);
}
