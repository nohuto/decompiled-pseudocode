/*
 * XREFs of HamQueryPackageUsageInfo @ 0x18000B470
 * Callers:
 *     <none>
 * Callees:
 *     ?HampSystemOpenAppRegistryKey@@YAJPEBGPEAXKPEAPEAUHKEY__@@@Z @ 0x18000B920 (-HampSystemOpenAppRegistryKey@@YAJPEBGPEAXKPEAPEAUHKEY__@@@Z.c)
 *     HampUsageInfoRegistryQuery @ 0x18000BB60 (HampUsageInfoRegistryQuery.c)
 *     __security_check_cookie @ 0x18001A5F0 (__security_check_cookie.c)
 */

__int64 __fastcall HamQueryPackageUsageInfo(const unsigned __int16 *a1, void *a2, __m128i *a3)
{
  int v4; // eax
  HKEY v5; // rsi
  signed int v6; // ebx
  LSTATUS v7; // eax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r14
  DWORD v11; // eax
  unsigned __int64 v12; // r15
  LSTATUS v13; // eax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  __int64 v16; // rax
  bool v17; // zf
  const unsigned __int16 *v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  __m128i *v21; // rax
  __m128i v22; // xmm0
  __int64 v24; // rax
  __int64 v25; // rcx
  DWORD cchName; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+44h] [rbp-BCh]
  HKEY hKey; // [rsp+48h] [rbp-B8h] BYREF
  HKEY phkResult; // [rsp+50h] [rbp-B0h] BYREF
  __m128i i; // [rsp+58h] [rbp-A8h] BYREF
  __m128i v31; // [rsp+68h] [rbp-98h]
  __m128i v32; // [rsp+78h] [rbp-88h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-78h] BYREF
  __int128 v34; // [rsp+98h] [rbp-68h]
  __int128 v35; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v36; // [rsp+B8h] [rbp-48h]
  __int64 v37; // [rsp+C8h] [rbp-38h] BYREF
  __m128i *v38; // [rsp+D0h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+E0h] [rbp-20h] BYREF
  void *v40; // [rsp+F0h] [rbp-10h]
  int v41; // [rsp+F8h] [rbp-8h]
  int v42; // [rsp+FCh] [rbp-4h]
  const unsigned __int16 *v43; // [rsp+100h] [rbp+0h]
  int v44; // [rsp+108h] [rbp+8h]
  int v45; // [rsp+10Ch] [rbp+Ch]
  WCHAR *v46; // [rsp+110h] [rbp+10h]
  int v47; // [rsp+118h] [rbp+18h]
  int v48; // [rsp+11Ch] [rbp+1Ch]
  __m128i *p_i; // [rsp+120h] [rbp+20h]
  __int64 v50; // [rsp+128h] [rbp+28h]
  __int64 *v51; // [rsp+130h] [rbp+30h]
  __int64 v52; // [rsp+138h] [rbp+38h]
  WCHAR Name[72]; // [rsp+140h] [rbp+40h] BYREF

  v38 = a3;
  cchName = 0;
  hKey = 0LL;
  phkResult = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v4 = HampSystemOpenAppRegistryKey(a1, a2, 0, &hKey);
  v5 = hKey;
  v6 = v4;
  if ( v4 >= 0 )
  {
    v7 = RegOpenKeyExW(hKey, L"HAM\\AUI", 0, 8u, &phkResult);
    v6 = v7;
    if ( v7 > 0 )
      v6 = (unsigned __int16)v7 | 0xC0070000;
    if ( v6 >= 0 )
    {
      v8 = 0LL;
      v9 = 0LL;
      v10 = -1LL;
      EventDescriptor.Keyword = 0LL;
      *(_QWORD *)&EventDescriptor.Id = -1LL;
      v11 = 0;
      v34 = 0xFFFFFFFFFFFFFFFFuLL;
      v12 = -1LL;
      v32 = (__m128i)0xFFFFFFFFFFFFFFFFuLL;
      v27 = 0;
      for ( i = (__m128i)0xFFFFFFFFFFFFFFFFuLL; ; i = v31 )
      {
        cchName = 65;
        v13 = RegEnumKeyExW(phkResult, v11, Name, &cchName, 0LL, 0LL, 0LL, 0LL);
        v6 = v13;
        if ( v13 == 259 )
        {
          v21 = v38;
          v6 = 0;
          v22 = i;
          *v38 = v32;
          v21[1] = v22;
          break;
        }
        if ( v13 )
        {
          if ( v13 > 0 )
            v6 = (unsigned __int16)v13 | 0xC0070000;
          break;
        }
        v6 = HampUsageInfoRegistryQuery(phkResult, Name, &v35);
        if ( v6 < 0 )
          break;
        v14 = *((_QWORD *)&v35 + 1);
        v32.m128i_i64[0] = *((_QWORD *)&v35 + 1);
        v15 = v35;
        if ( (unsigned int)dword_18002D038 > 5 && (byte_18002D048 & 1) != 0 && (qword_18002D050 & 1) == qword_18002D050 )
        {
          v37 = *((_QWORD *)&v35 + 1);
          v51 = &v37;
          i.m128i_i64[0] = v35;
          p_i = &i;
          v16 = -1LL;
          v52 = 8LL;
          v50 = 8LL;
          do
            v17 = Name[++v16] == 0;
          while ( !v17 );
          v48 = 0;
          v46 = Name;
          v47 = 2 * v16 + 2;
          if ( a1 )
          {
            v18 = a1;
            v19 = -1LL;
            do
              v17 = a1[++v19] == 0;
            while ( !v17 );
            v20 = 2 * v19 + 2;
          }
          else
          {
            v18 = (const unsigned __int16 *)&unk_180023224;
            v20 = 2;
          }
          v44 = v20;
          *(_DWORD *)&EventDescriptor.Level = 5;
          UserData.Ptr = (ULONGLONG)off_18002D040;
          v43 = v18;
          v45 = 0;
          *(_DWORD *)&EventDescriptor.Id = 184549376;
          EventDescriptor.Keyword = 1LL;
          UserData.Size = *(unsigned __int16 *)off_18002D040;
          v40 = &unk_18002694E;
          UserData.Reserved = 2;
          v41 = 75;
          v42 = 1;
          LODWORD(hKey) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
          EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
          v14 = v32.m128i_i64[0];
        }
        if ( v10 <= v9 )
        {
          if ( v15 > v14 )
          {
            if ( v15 > v9 )
              goto LABEL_22;
          }
          else if ( v10 > v14 || v15 > v9 )
          {
LABEL_22:
            if ( (__int64)v10 > (__int64)v15 )
              v15 = v10;
            goto LABEL_35;
          }
        }
        else if ( v15 <= v14 && v10 > v14 )
        {
          goto LABEL_22;
        }
        if ( v10 < v15 )
          v15 = v10;
LABEL_35:
        v25 = *((_QWORD *)&v36 + 1);
        v24 = v36;
        i.m128i_i64[0] = v15;
        if ( v12 <= v8 )
        {
          if ( (unsigned __int64)v36 > *((_QWORD *)&v36 + 1) )
          {
            if ( (unsigned __int64)v36 > v8 )
              goto LABEL_38;
          }
          else if ( v12 > *((_QWORD *)&v36 + 1) || (unsigned __int64)v36 > v8 )
          {
LABEL_38:
            if ( (__int64)v12 > (__int64)v36 )
              v24 = v12;
            goto LABEL_44;
          }
        }
        else if ( (unsigned __int64)v36 <= *((_QWORD *)&v36 + 1) && v12 > *((_QWORD *)&v36 + 1) )
        {
          goto LABEL_38;
        }
        if ( v12 < (unsigned __int64)v36 )
          v24 = v12;
LABEL_44:
        v31.m128i_i64[0] = v24;
        if ( v9 > v14 )
          v14 = v9;
        i.m128i_i64[1] = v14;
        if ( v8 > *((_QWORD *)&v36 + 1) )
          v25 = v8;
        v11 = v27 + 1;
        v31.m128i_i64[1] = v25;
        ++v27;
        v32 = i;
        v12 = v31.m128i_i64[0];
        v10 = i.m128i_i64[0];
        v8 = _mm_srli_si128(v31, 8).m128i_u64[0];
        v9 = _mm_srli_si128(i, 8).m128i_u64[0];
      }
    }
  }
  if ( phkResult )
    RegCloseKey(phkResult);
  if ( v5 )
    RegCloseKey(v5);
  return (unsigned int)v6;
}
