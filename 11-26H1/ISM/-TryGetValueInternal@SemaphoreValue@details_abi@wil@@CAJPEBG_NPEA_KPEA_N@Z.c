/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1800582A8
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800578BC (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x18008E2C4 (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x1800585D4 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180089A20 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180090DA0 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180090DC0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
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
  wil::details *v14; // rax
  wil::details *v15; // rbx
  int ValueFromSemaphore; // eax
  unsigned int LastError; // edi
  __int64 v18; // rdx
  WCHAR *v19; // rax
  __int64 v20; // r8
  HANDLE v21; // rax
  const char *v22; // r9
  void *v23; // rdx
  const char *v25; // r9
  WCHAR *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  char *v29; // r8
  WCHAR v30; // r9
  WCHAR *v31; // rax
  WCHAR *v32; // rdx
  __int64 v33; // rsi
  char *v34; // rax
  WCHAR v35; // cx
  WCHAR *v36; // rax
  int v37; // eax
  int v38; // [rsp+20h] [rbp-E0h] BYREF
  int v39; // [rsp+24h] [rbp-DCh] BYREF
  HANDLE v40; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v41[2]; // [rsp+30h] [rbp-D0h] BYREF
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
    v26 = &Name[v13];
    v27 = 260 - v13;
    if ( v13 != 260 )
    {
      v28 = 2147483646LL;
      v29 = (char *)((char *)L"_p0" - (char *)v26);
      do
      {
        if ( !v28 )
          break;
        v30 = *(_WORD *)&v29[(_QWORD)v26];
        if ( !v30 )
          break;
        *v26 = v30;
        --v28;
        ++v26;
        --v27;
      }
      while ( v27 );
    }
    v31 = v26 - 1;
    if ( v27 )
      v31 = v26;
    *v31 = 0;
  }
  v14 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v41[0] = v14;
  v15 = v14;
  if ( v14 )
  {
    v39 = 0;
    v38 = 0;
    ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v14, &v39);
    LastError = ValueFromSemaphore;
    if ( ValueFromSemaphore < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD3,
        (unsigned int)"wil",
        (const char *)(unsigned int)ValueFromSemaphore,
        v38);
LABEL_46:
      __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(v41);
      return LastError;
    }
    v18 = 260LL;
    v19 = Name;
    do
    {
      if ( !*v19 )
        break;
      ++v19;
      --v18;
    }
    while ( v18 );
    v20 = (260 - v18) & -(__int64)(v18 != 0);
    if ( v18 )
    {
      v32 = &Name[v20];
      v33 = 260 - v20;
      if ( 260 != v20 )
      {
        v34 = (char *)((char *)L"h" - (char *)v32);
        do
        {
          if ( !v12 )
            break;
          v35 = *(WCHAR *)((char *)v32 + (_QWORD)v34);
          if ( !v35 )
            break;
          *v32 = v35;
          --v12;
          ++v32;
          --v33;
        }
        while ( v33 );
      }
      v36 = v32 - 1;
      if ( v33 )
        v36 = v32;
      *v36 = 0;
    }
    v21 = OpenSemaphoreW(0x1F0003u, 0, Name);
    v40 = v21;
    if ( !v21 )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD9, (unsigned int)"wil", v22);
      wil::details::CloseHandle(v15, v23);
      return LastError;
    }
    v37 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v21, &v38);
    LastError = v37;
    if ( v37 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDB,
        (unsigned int)"wil",
        (const char *)(unsigned int)v37,
        v38);
      __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(&v40);
      goto LABEL_46;
    }
    __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(&v40);
    *a3 = v39 | (unsigned __int64)((__int64)v38 << 31);
    __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(v41);
    return 0LL;
  }
  else
  {
    if ( GetLastError() == 2 )
    {
      LastError = 0;
      goto LABEL_46;
    }
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xCD, (unsigned int)"wil", v25);
  }
}
