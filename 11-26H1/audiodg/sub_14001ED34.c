/*
 * XREFs of sub_14001ED34 @ 0x14001ED34
 * Callers:
 *     sub_14001EBA4 @ 0x14001EBA4 (sub_14001EBA4.c)
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14001ED34(HKEY hKey, __int128 *a2, __int64 a3)
{
  __int128 v3; // xmm0
  LSTATUS v6; // eax
  unsigned int v7; // ebx
  bool v8; // cc
  _WORD *v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int16 v12; // ax
  _WORD *v13; // rax
  _WORD *v14; // rcx
  __int16 v15; // ax
  _WORD *v16; // rax
  bool v18; // cc
  LPDWORD lpcbData; // [rsp+28h] [rbp-D8h]
  DWORD cbData; // [rsp+30h] [rbp-D0h] BYREF
  BYTE lpData[4]; // [rsp+34h] [rbp-CCh] BYREF
  DWORD Type; // [rsp+38h] [rbp-C8h] BYREF
  BYTE Data[1024]; // [rsp+40h] [rbp-C0h] BYREF

  v3 = *a2;
  cbData = 1024;
  lpcbData = &cbData;
  *(_OWORD *)a3 = v3;
  *(_DWORD *)lpData = 0;
  Type = 0;
  v6 = RegQueryValueExW(hKey, L"FriendlyName", 0LL, &Type, Data, lpcbData);
  v7 = v6;
  v8 = v6 <= 0;
  if ( v6 )
    goto LABEL_30;
  v9 = (_WORD *)(a3 + 20);
  v10 = 256LL;
  v11 = 256LL;
  do
  {
    if ( v11 == -2147483390 )
      break;
    v12 = *(_WORD *)&Data[(_QWORD)v9 - 20 - a3];
    if ( !v12 )
      break;
    *v9++ = v12;
    --v11;
  }
  while ( v11 );
  v13 = v9 - 1;
  if ( v11 )
    v13 = v9;
  *v13 = 0;
  v7 = v11 == 0 ? 0x8007007A : 0;
  if ( v11 )
  {
    cbData = 1024;
    v6 = RegQueryValueExW(hKey, L"Copyright", 0LL, &Type, Data, &cbData);
    v7 = v6;
    v8 = v6 <= 0;
    if ( !v6 )
    {
      v14 = (_WORD *)(a3 + 532);
      do
      {
        if ( v10 == -2147483390 )
          break;
        v15 = *(_WORD *)&Data[(_QWORD)v14 - 532 - a3];
        if ( !v15 )
          break;
        *v14++ = v15;
        --v10;
      }
      while ( v10 );
      v16 = v14 - 1;
      if ( v10 )
        v16 = v14;
      *v16 = 0;
      v7 = v10 == 0 ? 0x8007007A : 0;
      if ( !v10 )
        return v7;
      cbData = 4;
      v6 = RegQueryValueExW(hKey, L"MajorVersion", 0LL, &Type, lpData, &cbData);
      v18 = v6 <= 0;
      if ( !v6 )
      {
        *(_DWORD *)(a3 + 1044) = *(_DWORD *)lpData;
        cbData = 4;
        v6 = RegQueryValueExW(hKey, L"MinorVersion", 0LL, &Type, lpData, &cbData);
        v18 = v6 <= 0;
        if ( !v6 )
        {
          *(_DWORD *)(a3 + 1048) = *(_DWORD *)lpData;
          cbData = 4;
          v6 = RegQueryValueExW(hKey, L"Flags", 0LL, &Type, lpData, &cbData);
          v18 = v6 <= 0;
          if ( !v6 )
          {
            *(_DWORD *)(a3 + 16) = *(_DWORD *)lpData;
            cbData = 4;
            v6 = RegQueryValueExW(hKey, L"MinInputConnections", 0LL, &Type, lpData, &cbData);
            v18 = v6 <= 0;
            if ( !v6 )
            {
              *(_DWORD *)(a3 + 1052) = *(_DWORD *)lpData;
              cbData = 4;
              v6 = RegQueryValueExW(hKey, L"MaxInputConnections", 0LL, &Type, lpData, &cbData);
              v18 = v6 <= 0;
              if ( !v6 )
              {
                *(_DWORD *)(a3 + 1056) = *(_DWORD *)lpData;
                cbData = 4;
                v6 = RegQueryValueExW(hKey, L"MinOutputConnections", 0LL, &Type, lpData, &cbData);
                v18 = v6 <= 0;
                if ( !v6 )
                {
                  *(_DWORD *)(a3 + 1060) = *(_DWORD *)lpData;
                  cbData = 4;
                  v6 = RegQueryValueExW(hKey, L"MaxOutputConnections", 0LL, &Type, lpData, &cbData);
                  v18 = v6 <= 0;
                  if ( !v6 )
                  {
                    *(_DWORD *)(a3 + 1064) = *(_DWORD *)lpData;
                    cbData = 4;
                    v6 = RegQueryValueExW(hKey, L"MaxInstances", 0LL, &Type, lpData, &cbData);
                    v18 = v6 <= 0;
                    if ( !v6 )
                    {
                      *(_DWORD *)(a3 + 1068) = *(_DWORD *)lpData;
                      return v7;
                    }
                  }
                }
              }
            }
          }
        }
      }
      if ( v18 )
        return (unsigned int)v6;
      return (unsigned __int16)v6 | 0x80070000;
    }
LABEL_30:
    if ( v8 )
      return v7;
    return (unsigned __int16)v6 | 0x80070000;
  }
  return v7;
}
