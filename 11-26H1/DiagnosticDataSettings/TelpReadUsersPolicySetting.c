/*
 * XREFs of TelpReadUsersPolicySetting @ 0x180005330
 * Callers:
 *     TelpReadGroupPolicySetting @ 0x180004B94 (TelpReadGroupPolicySetting.c)
 *     TelpReadMdmSetting @ 0x180004D3C (TelpReadMdmSetting.c)
 * Callees:
 *     __security_check_cookie @ 0x180001460 (__security_check_cookie.c)
 *     memset_0 @ 0x18000203A (memset_0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800033BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1800033E0 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     TelpReadRegistryDword @ 0x1800037EC (TelpReadRegistryDword.c)
 *     TelGetLocalAllowTelemetryRegPath @ 0x180003BF0 (TelGetLocalAllowTelemetryRegPath.c)
 */

__int64 __fastcall TelpReadUsersPolicySetting(_DWORD *a1, int *a2, const WCHAR *a3)
{
  DWORD v3; // esi
  char v5; // r13
  int v6; // r14d
  const wchar_t *LocalAllowTelemetryRegPath; // rax
  WCHAR *v8; // rdx
  __int64 v9; // r8
  signed __int64 v10; // r9
  WCHAR v11; // ax
  WCHAR *v12; // rax
  signed int v13; // ebx
  LSTATUS v14; // eax
  LSTATUS v15; // eax
  SIZE_T v16; // rbx
  HANDLE ProcessHeap; // rax
  WCHAR *v18; // r15
  LSTATUS v19; // eax
  LSTATUS v20; // eax
  HANDLE v21; // rax
  DWORD cbMaxSubKeyLen; // [rsp+60h] [rbp-A0h] BYREF
  int pvData; // [rsp+64h] [rbp-9Ch] BYREF
  DWORD cSubKeys; // [rsp+68h] [rbp-98h] BYREF
  HKEY hKey; // [rsp+70h] [rbp-90h] BYREF
  DWORD cchName; // [rsp+78h] [rbp-88h] BYREF
  LPCWSTR lpValue; // [rsp+80h] [rbp-80h]
  int *v29; // [rsp+88h] [rbp-78h]
  WCHAR SubKey[264]; // [rsp+90h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+1E8h]

  v3 = 0;
  lpValue = a3;
  v29 = a2;
  *a1 = 1;
  hKey = 0LL;
  v5 = 0;
  v6 = 3;
  memset_0(SubKey, 0, 0x208uLL);
  LocalAllowTelemetryRegPath = TelGetLocalAllowTelemetryRegPath();
  v8 = SubKey;
  v9 = 260LL;
  v10 = (char *)LocalAllowTelemetryRegPath - (char *)SubKey;
  do
  {
    if ( v9 == -2147483386 )
      break;
    v11 = *(WCHAR *)((char *)v8 + v10);
    if ( !v11 )
      break;
    *v8++ = v11;
    --v9;
  }
  while ( v9 );
  v12 = v8 - 1;
  if ( v9 )
    v12 = v8;
  *v12 = 0;
  v13 = v9 == 0 ? 0x8007007A : 0;
  if ( !v9 )
    goto LABEL_32;
  v13 = StringCchCatW(SubKey, (__int64)v8, (char *)L"\\Users");
  if ( v13 < 0 )
    goto LABEL_32;
  v14 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20019u, &hKey);
  v13 = v14;
  if ( v14 > 0 )
    v13 = (unsigned __int16)v14 | 0x80070000;
  if ( v13 < 0 )
    goto LABEL_32;
  cSubKeys = 0;
  cbMaxSubKeyLen = 0;
  v15 = RegQueryInfoKeyW(hKey, 0LL, 0LL, 0LL, &cSubKeys, &cbMaxSubKeyLen, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  v13 = v15;
  if ( v15 > 0 )
    v13 = (unsigned __int16)v15 | 0x80070000;
  if ( v13 >= 0 )
  {
    v16 = 2LL * (cbMaxSubKeyLen + 1);
    ProcessHeap = GetProcessHeap();
    v18 = (WCHAR *)HeapAlloc(ProcessHeap, 0, v16);
    if ( v18 )
    {
      if ( !cSubKeys )
        goto LABEL_29;
      do
      {
        cchName = cbMaxSubKeyLen + 1;
        pvData = 0;
        v19 = RegEnumKeyExW(hKey, v3, v18, &cchName, 0LL, 0LL, 0LL, 0LL);
        v13 = v19;
        if ( v19 > 0 )
          v13 = (unsigned __int16)v19 | 0x80070000;
        if ( v13 != -2147024894 )
        {
          if ( v13 < 0 )
            goto LABEL_31;
          v20 = TelpReadRegistryDword(&pvData, hKey, v18, lpValue);
          v13 = v20;
          if ( v20 != -2147024894 )
          {
            if ( v20 < 0 )
              goto LABEL_31;
            v5 = 1;
            if ( pvData < v6 )
              v6 = pvData;
          }
        }
        ++v3;
      }
      while ( v3 < cSubKeys );
      if ( v5 )
        *v29 = v6;
      else
LABEL_29:
        *a1 = 0;
      v13 = 0;
LABEL_31:
      v21 = GetProcessHeap();
      HeapFree(v21, 0, v18);
    }
    else
    {
      v13 = -2147024882;
    }
  }
  else
  {
LABEL_32:
    if ( v13 == -2147024894 )
    {
      v13 = 0;
      *a1 = 0;
    }
  }
  if ( hKey )
    RegCloseKey(hKey);
  if ( v13 < 0 )
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x4E8, v9, (const char *)(unsigned int)v13);
  return (unsigned int)v13;
}
