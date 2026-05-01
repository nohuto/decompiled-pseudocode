/*
 * XREFs of HamQueryPackageUsageInfo @ 0x18000B410
 * Callers:
 *     <none>
 * Callees:
 *     ?HampSystemOpenAppRegistryKey@@YAJPEBGPEAXKPEAPEAUHKEY__@@@Z @ 0x18000B860 (-HampSystemOpenAppRegistryKey@@YAJPEBGPEAXKPEAPEAUHKEY__@@@Z.c)
 *     HampUsageInfoRegistryQuery @ 0x18000BAA0 (HampUsageInfoRegistryQuery.c)
 *     ?HampUtilIsOverlappingInterval@@YAK_K000@Z @ 0x18000BCF0 (-HampUtilIsOverlappingInterval@@YAK_K000@Z.c)
 *     __security_check_cookie @ 0x18001C080 (__security_check_cookie.c)
 */

__int64 __fastcall HamQueryPackageUsageInfo(const unsigned __int16 *a1, void *a2, _OWORD *a3)
{
  signed int v5; // ebx
  LSTATUS v6; // eax
  DWORD v7; // eax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r14
  LSTATUS v12; // eax
  __int64 v13; // rax
  bool v14; // zf
  const unsigned __int16 *v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r8
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r10
  DWORD cchName[2]; // [rsp+48h] [rbp-C0h] BYREF
  HKEY phkResult; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-B0h]
  HKEY hKey; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v27; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v28; // [rsp+70h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-90h] BYREF
  __m128i v30; // [rsp+88h] [rbp-80h]
  __m128i v31; // [rsp+98h] [rbp-70h]
  unsigned __int64 v32[2]; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v33[2]; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v34[2]; // [rsp+C8h] [rbp-40h] BYREF
  unsigned __int64 v35[2]; // [rsp+D8h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+E8h] [rbp-20h] BYREF
  void *v37; // [rsp+F8h] [rbp-10h]
  int v38; // [rsp+100h] [rbp-8h]
  int v39; // [rsp+104h] [rbp-4h]
  const unsigned __int16 *v40; // [rsp+108h] [rbp+0h]
  int v41; // [rsp+110h] [rbp+8h]
  int v42; // [rsp+114h] [rbp+Ch]
  WCHAR *v43; // [rsp+118h] [rbp+10h]
  int v44; // [rsp+120h] [rbp+18h]
  int v45; // [rsp+124h] [rbp+1Ch]
  unsigned __int64 *v46; // [rsp+128h] [rbp+20h]
  __int64 v47; // [rsp+130h] [rbp+28h]
  unsigned __int64 *v48; // [rsp+138h] [rbp+30h]
  __int64 v49; // [rsp+140h] [rbp+38h]
  WCHAR Name[72]; // [rsp+148h] [rbp+40h] BYREF

  *(_OWORD *)v34 = 0LL;
  cchName[0] = 0;
  *(_OWORD *)v35 = 0LL;
  hKey = 0LL;
  phkResult = 0LL;
  v5 = HampSystemOpenAppRegistryKey(a1, a2, (unsigned int)a3, &hKey);
  if ( v5 >= 0 )
  {
    v6 = RegOpenKeyExW(hKey, L"HAM\\AUI", 0, 8u, &phkResult);
    v5 = v6;
    if ( v6 > 0 )
      v5 = (unsigned __int16)v6 | 0xC0070000;
    if ( v5 >= 0 )
    {
      v7 = 0;
      v8 = -1LL;
      v9 = -1LL;
      v32[0] = -1LL;
      v10 = 0LL;
      v33[0] = -1LL;
      v11 = 0LL;
      v32[1] = 0LL;
      v33[1] = 0LL;
      while ( 1 )
      {
        cchName[1] = v7;
        cchName[0] = 65;
        v12 = RegEnumKeyExW(phkResult, v7, Name, cchName, 0LL, 0LL, 0LL, 0LL);
        v5 = v12;
        if ( v12 == 259 )
        {
          v5 = 0;
          *a3 = *(_OWORD *)v32;
          a3[1] = *(_OWORD *)v33;
          goto LABEL_31;
        }
        if ( v12 )
          break;
        v5 = HampUsageInfoRegistryQuery(phkResult, Name, v34);
        if ( v5 < 0 )
          goto LABEL_31;
        if ( (unsigned int)dword_18002F038 > 5 && (byte_18002F048 & 1) != 0 && (qword_18002F050 & 1) == qword_18002F050 )
        {
          v27 = v34[1];
          v28 = v34[0];
          v48 = &v27;
          v46 = &v28;
          v13 = -1LL;
          v49 = 8LL;
          v47 = 8LL;
          do
            v14 = Name[++v13] == 0;
          while ( !v14 );
          v45 = 0;
          v44 = 2 * v13 + 2;
          v43 = Name;
          if ( a1 )
          {
            v15 = a1;
            v16 = -1LL;
            do
              v14 = a1[++v16] == 0;
            while ( !v14 );
            v17 = 2 * v16 + 2;
          }
          else
          {
            v15 = (const unsigned __int16 *)&unk_180024284;
            v17 = 2;
          }
          v41 = v17;
          *(_DWORD *)&EventDescriptor.Level = 5;
          UserData.Ptr = (ULONGLONG)off_18002F040;
          v40 = v15;
          v42 = 0;
          *(_DWORD *)&EventDescriptor.Id = 184549376;
          EventDescriptor.Keyword = 1LL;
          UserData.Size = *(unsigned __int16 *)off_18002F040;
          v37 = &unk_18002863E;
          UserData.Reserved = 2;
          v38 = 75;
          v39 = 1;
          LODWORD(v25) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
          EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
          v10 = v33[1];
          v9 = v33[0];
          v11 = v32[1];
          v8 = v32[0];
        }
        if ( HampUtilIsOverlappingInterval(v8, v11, v34[0], v34[1]) )
        {
          if ( v8 < v18 )
            v18 = v8;
        }
        else if ( (__int64)v8 > v18 )
        {
          v18 = v8;
        }
        v30.m128i_i64[0] = v18;
        if ( HampUtilIsOverlappingInterval(v9, v10, v35[0], v35[1]) )
        {
          if ( v9 < v19 )
            v19 = v9;
        }
        else if ( (__int64)v9 > v19 )
        {
          v19 = v9;
        }
        v31.m128i_i64[0] = v19;
        if ( v11 > v21 )
          v21 = v11;
        v30.m128i_i64[1] = v21;
        if ( v10 > v20 )
          v20 = v10;
        v7 = cchName[1] + 1;
        v31.m128i_i64[1] = v20;
        *(__m128i *)v32 = v30;
        v9 = v31.m128i_i64[0];
        v8 = v30.m128i_i64[0];
        v10 = _mm_srli_si128(v31, 8).m128i_u64[0];
        v11 = _mm_srli_si128(v30, 8).m128i_u64[0];
        *(__m128i *)v33 = v31;
      }
      if ( v12 > 0 )
        v5 = (unsigned __int16)v12 | 0xC0070000;
    }
  }
LABEL_31:
  if ( phkResult )
    RegCloseKey(phkResult);
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v5;
}
