/*
 * XREFs of ?HampUtilQueryTerminateTimeouts@@YAXPEAK00@Z @ 0x180017D5C
 * Callers:
 *     ?HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x180017954 (-HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 * Callees:
 *     ?HampSystemQueryDWordValue@@YAJPEAUHKEY__@@PEBGPEAK@Z @ 0x18008BBB0 (-HampSystemQueryDWordValue@@YAJPEAUHKEY__@@PEBGPEAK@Z.c)
 */

void __fastcall HampUtilQueryTerminateTimeouts(unsigned int *a1, unsigned int *a2, unsigned int *a3)
{
  LSTATUS v6; // eax
  bool v7; // sf
  unsigned int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edx
  HKEY v11; // rcx
  unsigned int v12; // [rsp+60h] [rbp+28h] BYREF
  unsigned int v13; // [rsp+68h] [rbp+30h] BYREF
  unsigned int v14; // [rsp+70h] [rbp+38h] BYREF
  HKEY hKey; // [rsp+78h] [rbp+40h] BYREF

  hKey = 0LL;
  v12 = 150;
  v13 = 2000;
  v14 = 60000;
  v6 = RegOpenKeyExW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows NT\\CurrentVersion\\HostActivityManager",
         0,
         1u,
         &hKey);
  v7 = v6 < 0;
  if ( v6 > 0 )
    v7 = 1;
  if ( v7
    || (int)HampSystemQueryDWordValue(hKey, L"KillResponsiveDurationMs", &v12) < 0
    || (int)HampSystemQueryDWordValue(hKey, L"KillDbgDurationMs", &v13) < 0
    || (int)HampSystemQueryDWordValue(hKey, L"KillExtremeDurationMs", &v14) < 0
    || (v8 = v12, v9 = v13, v12 >= v13)
    || (v10 = v14, v13 >= v14)
    || !v12 )
  {
    v8 = 150;
    v9 = 2000;
    v10 = 60000;
  }
  *a2 = v9;
  v11 = hKey;
  *a1 = v8;
  *a3 = v10;
  if ( v11 )
    RegCloseKey(v11);
}
