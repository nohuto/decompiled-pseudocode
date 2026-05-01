/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1801357DC
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180135C5C (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x1802B4328 (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800CA0BC (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800CB0DC (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x180135AD0 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
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
  __int64 v12; // r14
  __int64 v13; // r8
  WCHAR *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  char *v17; // r8
  WCHAR v18; // r9
  WCHAR *v19; // rax
  wil::details *v20; // rax
  wil::details *v21; // rbx
  int ValueFromSemaphore; // eax
  unsigned int LastError; // edi
  void *v24; // rdx
  __int64 v25; // rdx
  WCHAR *v26; // rax
  __int64 v27; // r8
  WCHAR *v28; // rdx
  __int64 v29; // rsi
  char *v30; // rax
  WCHAR v31; // cx
  WCHAR *v32; // rax
  wil::details *v33; // rax
  const char *v34; // r9
  int v35; // eax
  void *v36; // rdx
  void *v37; // rdx
  void *v38; // rdx
  void *v40; // rdx
  const char *v41; // r9
  int v42; // [rsp+20h] [rbp-E0h] BYREF
  int v43; // [rsp+24h] [rbp-DCh] BYREF
  wil::details *v44; // [rsp+28h] [rbp-D8h] BYREF
  wil::details *v45; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR Name[264]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]

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
  v12 = 2147483646LL;
  v13 = (260 - v10) & -(__int64)(v10 != 0);
  if ( v10 )
  {
    v14 = &Name[v13];
    v15 = 260 - v13;
    if ( v13 != 260 )
    {
      v16 = 2147483646LL;
      v17 = (char *)((char *)L"_p0" - (char *)v14);
      do
      {
        if ( !v16 )
          break;
        v18 = *(_WORD *)&v17[(_QWORD)v14];
        if ( !v18 )
          break;
        *v14 = v18;
        --v16;
        ++v14;
        --v15;
      }
      while ( v15 );
    }
    v19 = v14 - 1;
    if ( v15 )
      v19 = v14;
    *v19 = 0;
  }
  v20 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v45 = v20;
  v21 = v20;
  if ( v20 )
  {
    v43 = 0;
    v42 = 0;
    ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v20, &v43);
    LastError = ValueFromSemaphore;
    if ( ValueFromSemaphore >= 0 )
    {
      v25 = 260LL;
      v26 = Name;
      do
      {
        if ( !*v26 )
          break;
        ++v26;
        --v25;
      }
      while ( v25 );
      v27 = (260 - v25) & -(__int64)(v25 != 0);
      if ( v25 )
      {
        v28 = &Name[v27];
        v29 = 260 - v27;
        if ( 260 != v27 )
        {
          v30 = (char *)((char *)L"h" - (char *)v28);
          do
          {
            if ( !v12 )
              break;
            v31 = *(WCHAR *)((char *)v28 + (_QWORD)v30);
            if ( !v31 )
              break;
            *v28 = v31;
            --v12;
            ++v28;
            --v29;
          }
          while ( v29 );
        }
        v32 = v28 - 1;
        if ( v29 )
          v32 = v28;
        *v32 = 0;
      }
      v33 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
      v44 = v33;
      if ( !v33 )
      {
        LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD9, (unsigned int)"wil", v34);
        wil::details::CloseHandle(v21, v40);
        return LastError;
      }
      v35 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v33, &v42);
      LastError = v35;
      if ( v35 >= 0 )
      {
        __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
          &v44,
          v36);
        *a3 = v43 | (unsigned __int64)((__int64)v42 << 31);
        wil::details::CloseHandle(v21, v38);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0xDB, (int)"wil", (const char *)(unsigned int)v35);
      __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
        &v44,
        v37);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD3,
        (int)"wil",
        (const char *)(unsigned int)ValueFromSemaphore);
    }
LABEL_41:
    __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
      &v45,
      v24);
    return LastError;
  }
  if ( GetLastError() == 2 )
  {
    LastError = 0;
    goto LABEL_41;
  }
  return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xCD, (unsigned int)"wil", v41);
}
