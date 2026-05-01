/*
 * XREFs of ?GetPackageActivationSettings@@YAJPEBGPEAW4PACKAGEACTIVATIONSETTINGS@@@Z @ 0x1806CA738
 * Callers:
 *     ?IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x1801EC480 (-IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPackageActivationSettings(LPCWSTR lpValue, enum PACKAGEACTIVATIONSETTINGS *a2)
{
  LSTATUS v4; // eax
  bool v5; // sf
  int pvData; // [rsp+58h] [rbp+10h] BYREF
  DWORD pcbData; // [rsp+60h] [rbp+18h] BYREF
  HKEY phkResult; // [rsp+68h] [rbp+20h] BYREF

  *(_DWORD *)a2 = 0;
  phkResult = 0LL;
  v4 = RegOpenCurrentUser(0x20019u, &phkResult);
  v5 = v4 < 0;
  if ( v4 > 0 )
    v5 = 1;
  if ( !v5 )
  {
    pvData = 0;
    pcbData = 4;
    if ( !RegGetValueW(
            phkResult,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced\\PackageActivate",
            lpValue,
            0x18u,
            0LL,
            &pvData,
            &pcbData) )
      *(_DWORD *)a2 = pvData;
    RegCloseKey(phkResult);
  }
  return 0LL;
}
