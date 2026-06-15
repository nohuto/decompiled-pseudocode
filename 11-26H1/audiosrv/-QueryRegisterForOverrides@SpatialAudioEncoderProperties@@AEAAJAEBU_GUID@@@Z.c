/*
 * XREFs of ?QueryRegisterForOverrides@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18003C6F8
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z @ 0x18003C3C4 (-RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 */

__int64 __fastcall SpatialAudioEncoderProperties::QueryRegisterForOverrides(
        SpatialAudioEncoderProperties *this,
        const struct _GUID *a2)
{
  __int64 v3; // rdx
  WCHAR *v4; // rcx
  WCHAR v5; // ax
  WCHAR *v6; // rax
  __int64 v7; // rdx
  WCHAR *v8; // rax
  __int64 v9; // r8
  signed int v10; // ecx
  WCHAR *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  char *v14; // rdx
  WCHAR v15; // r8
  WCHAR *v16; // rax
  HKEY v18; // rcx
  HKEY v19; // rcx
  DWORD cbData; // [rsp+30h] [rbp-D0h] BYREF
  BYTE Data[4]; // [rsp+34h] [rbp-CCh] BYREF
  HKEY hKey; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v23[26]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v24; // [rsp+A8h] [rbp-58h]
  WCHAR SubKey[96]; // [rsp+B0h] [rbp-50h] BYREF
  OLECHAR sz[40]; // [rsp+170h] [rbp+70h] BYREF

  v23[0] = 7274579;
  v23[1] = 7602278;
  v23[2] = 6357111;
  v23[3] = 6619250;
  v23[4] = 5046364;
  v23[5] = 6488169;
  v23[6] = 7274610;
  v23[7] = 7274611;
  v23[8] = 7602278;
  v23[9] = 5046364;
  v23[10] = 7078005;
  v23[11] = 6881396;
  v23[12] = 6619245;
  v23[13] = 6881380;
  v23[14] = 6029409;
  v23[15] = 7667777;
  v23[16] = 6881380;
  v23[17] = 6029423;
  v23[18] = 7340115;
  v23[19] = 7602273;
  v23[20] = 6357097;
  v23[21] = 6029420;
  v23[22] = 7209029;
  v23[23] = 7274595;
  v23[24] = 6619236;
  v23[25] = 6029426;
  v24 = 0;
  hKey = 0LL;
  if ( StringFromGUID2(a2, sz, 39) >= 0 )
  {
    v3 = 92LL;
    v4 = SubKey;
    do
    {
      if ( v3 == -2147483554 )
        break;
      v5 = *(WCHAR *)((char *)v4 + (char *)v23 - (char *)SubKey);
      if ( !v5 )
        break;
      *v4++ = v5;
      --v3;
    }
    while ( v3 );
    v6 = v4 - 1;
    if ( v3 )
      v6 = v4;
    *v6 = 0;
    if ( v3 )
    {
      v7 = 92LL;
      v8 = SubKey;
      do
      {
        if ( !*v8 )
          break;
        ++v8;
        --v7;
      }
      while ( v7 );
      v9 = (92 - v7) & -(__int64)(v7 != 0);
      v10 = v7 == 0 ? 0x80070057 : 0;
      if ( v7 )
      {
        v11 = &SubKey[v9];
        v12 = 92 - v9;
        if ( 92 != v9 )
        {
          v13 = 2147483646LL;
          v14 = (char *)((char *)sz - (char *)v11);
          do
          {
            if ( !v13 )
              break;
            v15 = *(WCHAR *)((char *)v11 + (_QWORD)v14);
            if ( !v15 )
              break;
            *v11 = v15;
            --v13;
            ++v11;
            --v12;
          }
          while ( v12 );
        }
        v16 = v11 - 1;
        if ( v12 )
          v16 = v11;
        v10 = v12 == 0 ? 0x8007007A : 0;
        *v16 = 0;
      }
      if ( v10 >= 0 && !RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20019u, &hKey) )
      {
        *(_DWORD *)Data = *((unsigned __int16 *)this + 362);
        cbData = 4;
        RegQueryValueExW(hKey, L"MaxDynamicObjectCount", 0LL, 0LL, Data, &cbData);
        v18 = hKey;
        *((_WORD *)this + 362) = *(_WORD *)Data;
        *(_DWORD *)Data = *((_DWORD *)this + 179);
        cbData = 4;
        RegQueryValueExW(v18, L"NativeStaticObjectMask", 0LL, 0LL, Data, &cbData);
        v19 = hKey;
        *((_DWORD *)this + 179) = *(_DWORD *)Data;
        cbData = 4;
        *(_DWORD *)Data = 116;
        RegQueryValueExW(v19, L"ProjectionData", 0LL, 0LL, 0LL, &cbData);
        if ( cbData == 116 )
          RegQueryValueExW(hKey, L"ProjectionData", 0LL, 0LL, (LPBYTE)this + 726, &cbData);
        RegCloseKey(hKey);
      }
    }
  }
  return 0LL;
}
