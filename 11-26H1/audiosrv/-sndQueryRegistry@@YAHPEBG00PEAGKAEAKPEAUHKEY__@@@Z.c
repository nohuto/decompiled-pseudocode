/*
 * XREFs of ?sndQueryRegistry@@YAHPEBG00PEAGKAEAKPEAUHKEY__@@@Z @ 0x1800316C8
 * Callers:
 *     ?_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z @ 0x18003144C (-_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z.c)
 * Callees:
 *     ?sndRegQueryValue@@YAHPEAUHKEY__@@PEBG1KPEAG@Z @ 0x18007E3B0 (-sndRegQueryValue@@YAHPEAUHKEY__@@PEBG1KPEAG@Z.c)
 *     ?GetSoundRegistryPath@@YAHPEAG_KPEBG22@Z @ 0x1800ABF1C (-GetSoundRegistryPath@@YAHPEAG_KPEBG22@Z.c)
 *     ?sndRegQueryUserValue@@YAHPEBG0KPEAG@Z @ 0x1800AE724 (-sndRegQueryUserValue@@YAHPEBG0KPEAG@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 */

__int64 __fastcall sndQueryRegistry(
        const unsigned __int16 *a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        unsigned __int16 *a4,
        unsigned int a5,
        unsigned int *a6,
        HKEY hkey)
{
  unsigned int v8; // edi
  const unsigned __int16 *v9; // rdx
  int UserValue; // ecx
  HKEY v11; // rcx
  WCHAR *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r11
  __int64 v15; // r9
  unsigned int v16; // ecx
  WCHAR *v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rax
  char *v20; // r9
  WCHAR v21; // r10
  WCHAR *v22; // rax
  __int64 v23; // r8
  WCHAR *v24; // rax
  __int64 v25; // r9
  unsigned int v26; // ecx
  WCHAR *v27; // rcx
  __int64 v28; // rdx
  char *v29; // rax
  WCHAR v30; // r8
  WCHAR *v31; // rax
  const unsigned __int16 *v32; // r8
  int Value; // ebx
  DWORD pcbData; // [rsp+40h] [rbp-C0h] BYREF
  int v36; // [rsp+48h] [rbp-B8h] BYREF
  HKEY phkResult; // [rsp+50h] [rbp-B0h] BYREF
  DWORD v38; // [rsp+58h] [rbp-A8h] BYREF
  WCHAR SubKey[304]; // [rsp+60h] [rbp-A0h] BYREF

  v36 = 0;
  v8 = 0;
  if ( GetSoundRegistryPath(SubKey, (unsigned __int64)a2, a3, a2, a3) )
  {
    if ( hkey )
    {
      pcbData = 260;
      *a4 = 0;
      UserValue = RegGetValueW(hkey, SubKey, 0LL, 2u, 0LL, a4, &pcbData) == 0;
    }
    else
    {
      UserValue = sndRegQueryUserValue(SubKey, v9, 0x104u, a4);
    }
    if ( UserValue )
    {
      v38 = 4;
      v11 = HKEY_CURRENT_USER;
      if ( hkey )
        v11 = hkey;
      if ( !RegGetValueW(v11, SubKey, gszDefaultFlags, 0x10u, 0LL, &v36, &v38) )
        v36 &= 0x380002u;
      v12 = SubKey;
      v13 = 302LL;
      do
      {
        if ( !*v12 )
          break;
        ++v12;
        --v13;
      }
      while ( v13 );
      v14 = 2147483646LL;
      v15 = (302 - v13) & -(__int64)(v13 != 0);
      v16 = v13 == 0 ? 0x80070057 : 0;
      if ( v13 )
      {
        v17 = &SubKey[v15];
        v18 = 302 - v15;
        if ( v15 != 302 )
        {
          v19 = 2147483646LL;
          v20 = (char *)((char *)gszSlash - (char *)v17);
          do
          {
            if ( !v19 )
              break;
            v21 = *(WCHAR *)((char *)v17 + (_QWORD)v20);
            if ( !v21 )
              break;
            *v17 = v21;
            --v19;
            ++v17;
            --v18;
          }
          while ( v18 );
        }
        v22 = v17 - 1;
        if ( v18 )
          v22 = v17;
        v16 = v18 == 0 ? 0x8007007A : 0;
        *v22 = 0;
      }
      if ( !v16 )
      {
        v23 = 302LL;
        v24 = SubKey;
        do
        {
          if ( !*v24 )
            break;
          ++v24;
          --v23;
        }
        while ( v23 );
        v25 = (302 - v23) & -(__int64)(v23 != 0);
        v26 = v23 == 0 ? 0x80070057 : 0;
        if ( v23 )
        {
          v27 = &SubKey[v25];
          v28 = 302 - v25;
          if ( 302 != v25 )
          {
            v29 = (char *)((char *)&aszActiveKey - (char *)v27);
            do
            {
              if ( !v14 )
                break;
              v30 = *(WCHAR *)((char *)v27 + (_QWORD)v29);
              if ( !v30 )
                break;
              *v27 = v30;
              --v14;
              ++v27;
              --v28;
            }
            while ( v28 );
          }
          v31 = v27 - 1;
          if ( v28 )
            v31 = v27;
          v26 = v28 == 0 ? 0x8007007A : 0;
          *v31 = 0;
        }
        if ( !v26 )
        {
          pcbData = 0;
          if ( hkey )
          {
            LODWORD(phkResult) = 4;
            Value = RegGetValueW(hkey, SubKey, 0LL, 2u, 0LL, &pcbData, (LPDWORD)&phkResult) == 0;
          }
          else
          {
            phkResult = 0LL;
            if ( RegOpenCurrentUser(1u, &phkResult) )
            {
              Value = 0;
            }
            else
            {
              Value = sndRegQueryValue(phkResult, SubKey, v32, 4u, (unsigned __int16 *)&pcbData);
              RegCloseKey(phkResult);
            }
          }
          if ( Value )
          {
            if ( !lstrcmpW((LPCWSTR)&pcbData, aszBoolOne) )
              v8 = 1;
          }
          else
          {
            v8 = 1;
          }
        }
      }
    }
  }
  if ( v36 )
    *a6 |= v36;
  return v8;
}
