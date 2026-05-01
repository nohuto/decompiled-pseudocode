/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x18009A328
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180099DBC (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x1802BD164 (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x18009A5BC (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x18009BE10 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800A4ED0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800A51D4 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        char *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  __int64 v4; // r9
  WCHAR *v5; // rdx
  signed __int64 v6; // rcx
  WCHAR v8; // ax
  WCHAR *v9; // rax
  __int64 v10; // rdx
  WCHAR *v11; // rax
  __int64 v12; // r8
  WCHAR *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  char *v16; // r8
  WCHAR v17; // r9
  WCHAR *v18; // rax
  wil::details *v19; // rax
  wil::details *v20; // rbx
  int ValueFromSemaphore; // eax
  unsigned int LastError; // edi
  HANDLE v23; // rax
  const char *v24; // r9
  int v25; // eax
  void *v26; // rdx
  void *v28; // rdx
  const char *v29; // r9
  int v30[2]; // [rsp+28h] [rbp-E0h] BYREF
  HANDLE v31; // [rsp+30h] [rbp-D8h] BYREF
  wil::details *v32; // [rsp+38h] [rbp-D0h] BYREF
  WCHAR Name[264]; // [rsp+48h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+280h] [rbp+178h]

  *a3 = 0LL;
  v4 = 260LL;
  v5 = Name;
  v6 = a1 - (char *)Name;
  do
  {
    if ( v4 == -2147483386 )
      break;
    v8 = *(WCHAR *)((char *)v5 + v6);
    if ( !v8 )
      break;
    *v5++ = v8;
    --v4;
  }
  while ( v4 );
  v9 = v5 - 1;
  if ( v4 )
    v9 = v5;
  v10 = 260LL;
  *v9 = 0;
  v11 = Name;
  do
  {
    if ( !*v11 )
      break;
    ++v11;
    --v10;
  }
  while ( v10 );
  v12 = (260 - v10) & -(__int64)(v10 != 0);
  if ( v10 )
  {
    v13 = &Name[v12];
    v14 = 260 - v12;
    if ( v12 != 260 )
    {
      v15 = 2147483646LL;
      v16 = (char *)((char *)L"_p0" - (char *)v13);
      do
      {
        if ( !v15 )
          break;
        v17 = *(WCHAR *)((char *)v13 + (_QWORD)v16);
        if ( !v17 )
          break;
        *v13 = v17;
        --v15;
        ++v13;
        --v14;
      }
      while ( v14 );
    }
    v18 = v13 - 1;
    if ( v14 )
      v18 = v13;
    *v18 = 0;
  }
  v19 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v32 = v19;
  v20 = v19;
  if ( v19 )
  {
    v30[1] = 0;
    v30[0] = 0;
    ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v19, &v30[1]);
    LastError = ValueFromSemaphore;
    if ( ValueFromSemaphore >= 0 )
    {
      StringCchCatW(Name, 0x104uLL, L"h");
      v23 = OpenSemaphoreW(0x1F0003u, 0, Name);
      v31 = v23;
      if ( !v23 )
      {
        LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD9, (unsigned int)"wil", v24);
        wil::details::CloseHandle(v20, v28);
        return LastError;
      }
      v25 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v23, v30);
      LastError = v25;
      if ( v25 >= 0 )
      {
        __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(&v31);
        *a3 = ((__int64)v30[0] << 31) | v30[1];
        wil::details::CloseHandle(v20, v26);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0xDB, (int)"wil", (const char *)(unsigned int)v25);
      __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(&v31);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD3,
        (int)"wil",
        (const char *)(unsigned int)ValueFromSemaphore);
    }
LABEL_29:
    __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(&v32);
    return LastError;
  }
  if ( GetLastError() == 2 )
  {
    LastError = 0;
    goto LABEL_29;
  }
  return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xCD, (unsigned int)"wil", v29);
}
