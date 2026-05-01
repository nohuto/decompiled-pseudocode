/*
 * XREFs of ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x1800A9A10
 * Callers:
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x1800A82B0 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 *     ?v_Initialize@CImmersiveWindowFactory@@EEAAJPEAUIImmersiveMonitor@@PEBUtagRECT@@@Z @ 0x1806CA530 (-v_Initialize@CImmersiveWindowFactory@@EEAAJPEAUIImmersiveMonitor@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180042238 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x1800737A4 (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     ?GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z @ 0x1800AAD30 (-GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CallerIdentity::GetManifestedOrientationPreference(
        char *lpSubKey,
        unsigned __int16 *a2,
        enum ORIENTATION_PREFERENCE *a3)
{
  int StateRegKey; // ebx
  CallerIdentity *v6; // rsi
  LSTATUS v7; // eax
  LSTATUS v8; // eax
  HKEY v9; // rcx
  HKEY v10; // rcx
  HKEY *phkResult; // [rsp+20h] [rbp-40h]
  HKEY v13; // [rsp+30h] [rbp-30h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-28h] BYREF
  LPVOID pv[4]; // [rsp+40h] [rbp-20h] BYREF
  DWORD Type; // [rsp+98h] [rbp+38h] BYREF
  int Data; // [rsp+A0h] [rbp+40h] BYREF
  DWORD cbData; // [rsp+A8h] [rbp+48h] BYREF

  *(_DWORD *)a2 = 0;
  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  StateRegKey = ParseAppUserModelId(lpSubKey, pv, 0LL);
  if ( StateRegKey >= 0 )
  {
    v6 = (CallerIdentity *)OpenStateExplicit(-6LL, pv[0]);
    if ( v6 || (StateRegKey = ResultFromKnownLastError(), StateRegKey >= 0) )
    {
      hKey = 0LL;
      StateRegKey = CallerIdentity::GetStateRegKey(
                      v6,
                      (void *)L"SplashScreen",
                      (const unsigned __int16 *)0x20019,
                      (unsigned int)&hKey,
                      phkResult);
      if ( StateRegKey >= 0 )
      {
        v13 = 0LL;
        v7 = RegOpenKeyExW(hKey, (LPCWSTR)lpSubKey, 0, 0x20019u, &v13);
        StateRegKey = v7;
        if ( v7 > 0 )
          StateRegKey = (unsigned __int16)v7 | 0x80070000;
        if ( StateRegKey >= 0 )
        {
          Data = 0;
          Type = 0;
          cbData = 4;
          v8 = RegQueryValueExW(v13, L"Orientation", 0LL, &Type, (LPBYTE)&Data, &cbData);
          StateRegKey = v8;
          if ( v8 > 0 )
            StateRegKey = (unsigned __int16)v8 | 0x80070000;
          if ( StateRegKey >= 0 )
          {
            if ( Type == 4 )
            {
              StateRegKey = 0;
              *(_DWORD *)a2 = Data;
            }
            else
            {
              StateRegKey = -2147467259;
            }
          }
        }
        v9 = v13;
        v13 = 0LL;
        if ( v9 )
          RegCloseKey(v9);
      }
      CloseState(v6);
      v10 = hKey;
      hKey = 0LL;
      if ( v10 )
        RegCloseKey(v10);
    }
  }
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return (unsigned int)StateRegKey;
}
