/*
 * XREFs of ?HampUsageInfoRegistrySaveForApp@@YAJPEBGPEAX0PEAU_HAM_APPLICATION_USAGE_INFO@@@Z @ 0x18003C03C
 * Callers:
 *     ?HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003B01C (-HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 * Callees:
 *     ?HampSystemOpenAppRegistryKey@@YAJPEBGPEAXKPEAPEAUHKEY__@@@Z @ 0x18003C5A8 (-HampSystemOpenAppRegistryKey@@YAJPEBGPEAXKPEAPEAUHKEY__@@@Z.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HampUsageInfoRegistrySaveForApp(
        const unsigned __int16 *a1,
        void *a2,
        const unsigned __int16 *a3,
        struct _HAM_APPLICATION_USAGE_INFO *a4)
{
  __int64 v4; // rsi
  const wchar_t *v7; // r15
  signed int v8; // ebx
  LSTATUS v9; // eax
  LSTATUS v10; // eax
  LSTATUS v11; // eax
  LSTATUS v12; // eax
  unsigned int i; // edi
  const BYTE *v14; // rcx
  LSTATUS v15; // eax
  int v16; // edi
  int v18; // esi
  HKEY hKey; // [rsp+50h] [rbp-B0h] BYREF
  HKEY v20; // [rsp+58h] [rbp-A8h] BYREF
  int v21; // [rsp+60h] [rbp-A0h] BYREF
  HKEY v22; // [rsp+68h] [rbp-98h] BYREF
  HKEY v23; // [rsp+70h] [rbp-90h] BYREF
  HKEY phkResult; // [rsp+78h] [rbp-88h] BYREF
  __int64 v25; // [rsp+80h] [rbp-80h] BYREF
  __int64 v26; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-60h] BYREF
  void *v29; // [rsp+B0h] [rbp-50h]
  int v30; // [rsp+B8h] [rbp-48h]
  int v31; // [rsp+BCh] [rbp-44h]
  const wchar_t *v32; // [rsp+C0h] [rbp-40h]
  int v33; // [rsp+C8h] [rbp-38h]
  int v34; // [rsp+CCh] [rbp-34h]
  __int64 *v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  __int64 *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  HKEY *v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]
  int *v41; // [rsp+100h] [rbp+0h]
  __int64 v42; // [rsp+108h] [rbp+8h]

  v4 = -1LL;
  v7 = a1;
  hKey = 0LL;
  phkResult = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  if ( *(_OWORD *)a4 == __PAIR128__(-1LL, -1LL) && *((_QWORD *)a4 + 2) == -1LL && *((_QWORD *)a4 + 3) == -1LL )
  {
    v16 = 4096;
    v8 = 0;
  }
  else
  {
    v8 = HampSystemOpenAppRegistryKey(a1, a2, (unsigned int)a3, &hKey);
    if ( v8 < 0 )
    {
      v16 = 0x2000;
    }
    else
    {
      v9 = RegCreateKeyExW(hKey, L"HAM\\AUI", 0, 0LL, 0, 4u, 0LL, &phkResult, 0LL);
      v8 = v9;
      if ( v9 > 0 )
        v8 = (unsigned __int16)v9 | 0xC0070000;
      if ( v8 < 0 )
      {
        v16 = 12288;
      }
      else
      {
        v10 = RegCreateKeyExW(phkResult, a3, 0, 0LL, 0, 4u, 0LL, &v23, 0LL);
        v8 = v10;
        if ( v10 > 0 )
          v8 = (unsigned __int16)v10 | 0xC0070000;
        if ( v8 < 0 )
        {
          v16 = 0x4000;
        }
        else
        {
          v11 = RegCreateKeyExW(v23, L"V1", 0, 0LL, 0, 4u, 0LL, &v22, 0LL);
          v8 = v11;
          if ( v11 > 0 )
            v8 = (unsigned __int16)v11 | 0xC0070000;
          if ( v8 < 0 )
          {
            v16 = 20480;
          }
          else
          {
            v20 = 0LL;
            v12 = RegCreateKeyExW(v22, L"LU", 0, 0LL, 0, 2u, 0LL, &v20, 0LL);
            v8 = v12;
            if ( v12 > 0 )
              v8 = (unsigned __int16)v12 | 0xC0070000;
            if ( v8 >= 0 )
            {
              for ( i = 0; i < 4; ++i )
              {
                v14 = (const BYTE *)a4 + *((unsigned int *)&LastUsageRegInfo + 6 * i + 3);
                if ( *(_QWORD *)v14 != -1LL )
                {
                  v15 = RegSetValueExW(
                          v20,
                          (LPCWSTR)*(&LastUsageRegInfo + 3 * i),
                          0,
                          *((_DWORD *)&LastUsageRegInfo + 6 * i + 2),
                          v14,
                          *((_DWORD *)&LastUsageRegInfo + 6 * i + 4));
                  v8 = v15;
                  if ( v15 > 0 )
                    v8 = (unsigned __int16)v15 | 0xC0070000;
                  if ( v8 < 0 )
                    goto LABEL_24;
                }
              }
              v8 = 0;
            }
LABEL_24:
            if ( v20 )
              RegCloseKey(v20);
            if ( v8 < 0 )
            {
              v16 = 24576;
            }
            else
            {
              v8 = 0;
              v16 = 0;
            }
          }
        }
      }
    }
    if ( v22 )
      RegCloseKey(v22);
    if ( v23 )
      RegCloseKey(v23);
    if ( phkResult )
      RegCloseKey(phkResult);
    if ( hKey )
      RegCloseKey(hKey);
  }
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 0x40) != 0 && (qword_1800E12C8 & 0x40) == qword_1800E12C8 )
  {
    v25 = *((_QWORD *)a4 + 1);
    v26 = *(_QWORD *)a4;
    v41 = &v21;
    v39 = &v20;
    v37 = &v25;
    v35 = &v26;
    v21 = v16;
    LODWORD(v20) = v8;
    v42 = 4LL;
    v40 = 4LL;
    v38 = 8LL;
    v36 = 8LL;
    if ( v7 )
    {
      do
        ++v4;
      while ( v7[v4] );
      v18 = 2 * v4 + 2;
    }
    else
    {
      v7 = &word_1800BBB1C;
      v18 = 2;
    }
    *(_DWORD *)&EventDescriptor.Level = 516;
    UserData.Ptr = (ULONGLONG)off_1800E12B8;
    v32 = v7;
    v33 = v18;
    v34 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800E12B8;
    v29 = &unk_1800CDCFA;
    UserData.Reserved = 2;
    v30 = 96;
    v31 = 1;
    LODWORD(hKey) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
  }
  return (unsigned int)v8;
}
