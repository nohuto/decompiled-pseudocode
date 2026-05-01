/*
 * XREFs of AppModelQueryLifecyclePolicy @ 0x18000F010
 * Callers:
 *     <none>
 * Callees:
 *     HampCltQueryAppModelPolicyFlags @ 0x18001B660 (HampCltQueryAppModelPolicyFlags.c)
 */

__int64 __fastcall AppModelQueryLifecyclePolicy(__int64 a1, _DWORD *a2)
{
  LSTATUS v4; // eax
  signed int v5; // ebx
  int v7; // [rsp+60h] [rbp+18h] BYREF
  HKEY hKey; // [rsp+68h] [rbp+20h] BYREF

  v7 = 0;
  hKey = 0LL;
  v4 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Windows NT\\CurrentVersion\\AppModel", 0, 1u, &hKey);
  v5 = v4;
  if ( v4 == 2 )
    goto LABEL_2;
  if ( v4 )
  {
    if ( v4 > 0 )
      v5 = (unsigned __int16)v4 | 0xC0070000;
  }
  else
  {
    v5 = HampCltQueryAppModelPolicyFlags(hKey, L"RuntimeFlags", 3LL, &v7);
    if ( v5 >= 0 )
    {
      if ( (v7 & 3) == 0 )
      {
LABEL_2:
        *a2 = 0x10000;
LABEL_3:
        v5 = 0;
        goto LABEL_4;
      }
      if ( (v7 & 3) != 1 )
      {
        if ( (v7 & 3) == 2 )
          *a2 = 65537;
        goto LABEL_3;
      }
      v5 = HampCltQueryAppModelPolicyFlags(hKey, a1, 2LL, &v7);
      if ( v5 >= 0 )
      {
        if ( (v7 & 3) != 0 )
        {
          if ( (v7 & 3) == 2 )
            *a2 = 65537;
          goto LABEL_3;
        }
        goto LABEL_2;
      }
    }
  }
LABEL_4:
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v5;
}
