/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180008100
 * Callers:
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x180007DA4 (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 *     ?GetShared@?$ProcessLocalStorage@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAVFeatureStateData@23@XZ @ 0x180007E40 (-GetShared@-$ProcessLocalStorage@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAVFe.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180007E1C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x180008400 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800085E0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180011AB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180011AD8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18001A5F0 (__security_check_cookie.c)
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
  __int64 v10; // rcx
  WCHAR *v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  WCHAR *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  char *v17; // r9
  WCHAR v18; // r8
  WCHAR *v19; // rax
  wil::details *v20; // rax
  wil::details *v21; // rdi
  unsigned int v22; // r8d
  const char *v23; // r9
  int ValueFromSemaphore; // eax
  unsigned int v26; // r8d
  unsigned int LastError; // ebx
  __int64 v28; // rcx
  WCHAR *v29; // rax
  WCHAR *v30; // rdx
  __int64 v31; // rbp
  char *v32; // rax
  WCHAR v33; // cx
  WCHAR *v34; // rax
  wil::details *v35; // rax
  unsigned int v36; // r8d
  const char *v37; // r9
  wil::details *v38; // rbx
  int v39; // eax
  void *v40; // rdx
  unsigned int v41; // r8d
  unsigned int v42; // esi
  void *v43; // rdx
  void *v44; // rdx
  void *v45; // rdx
  void *v46; // rdx
  void *v47; // rdx
  int v48; // [rsp+20h] [rbp-248h] BYREF
  int v49; // [rsp+24h] [rbp-244h] BYREF
  wil::details *v50; // [rsp+28h] [rbp-240h] BYREF
  WCHAR Name[264]; // [rsp+30h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+0h]

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
  v10 = 260LL;
  if ( v4 )
    v9 = v5;
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
  v13 = 260 - v10;
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
  v50 = v20;
  v21 = v20;
  if ( !v20 )
  {
    if ( GetLastError() == 2 )
      return 0LL;
    else
      return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xCD, v22, v23);
  }
  v49 = 0;
  v48 = 0;
  ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v20, &v49);
  LastError = ValueFromSemaphore;
  if ( ValueFromSemaphore < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0xD3, v26, (const char *)(unsigned int)ValueFromSemaphore, v48);
    __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
      &v50,
      v47);
    return LastError;
  }
  v28 = 260LL;
  v29 = Name;
  do
  {
    if ( !*v29 )
      break;
    ++v29;
    --v28;
  }
  while ( v28 );
  if ( v28 )
  {
    v30 = &Name[260 - v28];
    v31 = v28;
    v32 = (char *)((char *)L"h" - (char *)v30);
    do
    {
      if ( !v12 )
        break;
      v33 = *(WCHAR *)((char *)v30 + (_QWORD)v32);
      if ( !v33 )
        break;
      *v30 = v33;
      --v12;
      ++v30;
      --v31;
    }
    while ( v31 );
    v34 = v30 - 1;
    if ( v31 )
      v34 = v30;
    *v34 = 0;
  }
  v35 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v38 = v35;
  if ( !v35 )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD9, v36, v37);
    wil::details::CloseHandle(v21, v44);
    return LastError;
  }
  v39 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v35, &v48);
  v42 = v39;
  if ( v39 < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0xDB, v41, (const char *)(unsigned int)v39, v48);
    wil::details::CloseHandle(v38, v45);
    wil::details::CloseHandle(v21, v46);
    return v42;
  }
  else
  {
    wil::details::CloseHandle(v38, v40);
    *a3 = v49 | (unsigned __int64)((__int64)v48 << 31);
    wil::details::CloseHandle(v21, v43);
    return 0LL;
  }
}
