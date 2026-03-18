/*
 * XREFs of vQueryRegistryForNumberOfBuckets @ 0x1403EE1E4
 * Callers:
 *     bInitFontTables @ 0x1403EE0E0 (bInitFontTables.c)
 * Callees:
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall vQueryRegistryForNumberOfBuckets(unsigned int *a1, _DWORD *a2)
{
  bool v4; // sf
  unsigned int v5; // eax
  unsigned int v6; // ecx
  __int64 result; // rax
  unsigned int v8; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v9; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v10; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v11; // [rsp+3Ch] [rbp-C4h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+78h] [rbp-88h]
  int v14; // [rsp+80h] [rbp-80h]
  const wchar_t *v15; // [rsp+88h] [rbp-78h]
  unsigned int *v16; // [rsp+90h] [rbp-70h]
  int v17; // [rsp+98h] [rbp-68h]
  __int64 v18; // [rsp+A0h] [rbp-60h]
  int v19; // [rsp+A8h] [rbp-58h]
  __int64 v20; // [rsp+B0h] [rbp-50h]
  int v21; // [rsp+B8h] [rbp-48h]
  const wchar_t *v22; // [rsp+C0h] [rbp-40h]
  unsigned int *v23; // [rsp+C8h] [rbp-38h]
  int v24; // [rsp+D0h] [rbp-30h]
  __int64 v25; // [rsp+D8h] [rbp-28h]
  int v26; // [rsp+E0h] [rbp-20h]
  __int64 v27; // [rsp+E8h] [rbp-18h]
  int v28; // [rsp+F0h] [rbp-10h]
  const wchar_t *v29; // [rsp+F8h] [rbp-8h]
  unsigned int *v30; // [rsp+100h] [rbp+0h]
  int v31; // [rsp+108h] [rbp+8h]
  __int64 v32; // [rsp+110h] [rbp+10h]
  int v33; // [rsp+118h] [rbp+18h]
  __int64 v34; // [rsp+120h] [rbp+20h]
  int v35; // [rsp+128h] [rbp+28h]
  __int64 v36; // [rsp+130h] [rbp+30h]

  QueryTable.Name = L"NumberOfPublicFontFilesAtLastLogOff";
  v10 = 0;
  v8 = 0;
  QueryTable.Flags = 288;
  v14 = 288;
  QueryTable.DefaultType = 0x4000000;
  QueryTable.EntryContext = &v10;
  v17 = 0x4000000;
  v15 = L"NumberOfPublicFontFilesSetByUser";
  v16 = &v8;
  v22 = L"NumberOfDeviceFontFilesAtLastLogOff";
  v23 = &v11;
  v29 = L"NumberOfDeviceFontFilesSetByUser";
  v21 = 288;
  v24 = 0x4000000;
  v28 = 288;
  v31 = 0x4000000;
  v30 = &v9;
  v11 = 0;
  v9 = 0;
  QueryTable.QueryRoutine = 0LL;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v13 = 0LL;
  v18 = 0LL;
  v19 = 0;
  v20 = 0LL;
  v25 = 0LL;
  v26 = 0;
  v27 = 0LL;
  v32 = 0LL;
  v33 = 0;
  v34 = 0LL;
  v35 = 0;
  v36 = 0LL;
  v4 = RtlQueryRegistryValues(3u, L"FontCache", &QueryTable, 0LL, 0LL) < 0;
  v5 = v8;
  if ( v4 )
  {
    v6 = v9;
  }
  else
  {
    if ( !v8 )
      v5 = v10;
    v6 = v9;
    if ( !v9 )
      v6 = v11;
  }
  if ( v5 >= 0x64 )
  {
    if ( v5 > 0x2710 )
      v5 = 10000;
  }
  else
  {
    v5 = 100;
  }
  *a1 = v5;
  result = 5LL;
  if ( v6 >= 5 )
  {
    result = v6;
    if ( v6 > 0x64 )
      result = 100LL;
  }
  *a2 = result;
  return result;
}
