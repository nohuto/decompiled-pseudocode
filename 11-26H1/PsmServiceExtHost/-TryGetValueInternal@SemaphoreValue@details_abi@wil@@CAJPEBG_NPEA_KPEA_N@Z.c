/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1800736F4
 * Callers:
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x18007367C (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18001B970 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x1800678B8 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18006C694 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180071554 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072E18 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180073188 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        char *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  unsigned int LastError; // ebx
  __int64 v6; // rdx
  wil::details *v7; // rax
  void *v8; // rdx
  int v9; // r8d
  const char *v10; // r9
  int ValueFromSemaphore; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // edi
  wil::details *v15; // rax
  int v16; // r8d
  const char *v17; // r9
  void *v18; // rdx
  int v19; // eax
  void *v20; // rdx
  __int64 v21; // r8
  void *v22; // rdx
  int v24[2]; // [rsp+28h] [rbp-E0h] BYREF
  wil::details *v25; // [rsp+30h] [rbp-D8h] BYREF
  wil::details *v26; // [rsp+38h] [rbp-D0h] BYREF
  WCHAR Name[264]; // [rsp+48h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+270h] [rbp+168h]

  LastError = 0;
  *a3 = 0LL;
  StringCchCopyW((char *)Name, 260LL, a1);
  StringCchCatW(Name, v6, L"_p0");
  v7 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v26 = v7;
  if ( v7 )
  {
    v24[1] = 0;
    v24[0] = 0;
    ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v7, &v24[1]);
    v14 = ValueFromSemaphore;
    if ( ValueFromSemaphore >= 0 )
    {
      StringCchCatW(Name, v12, L"h");
      v15 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
      v25 = v15;
      if ( !v15 )
      {
        LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD9, v16, v17);
        __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
          &v25,
          v18);
        goto LABEL_12;
      }
      v19 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v15, v24);
      v14 = v19;
      if ( v19 >= 0 )
      {
        __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
          &v25,
          v20);
        v8 = (void *)(v24[1] | (unsigned __int64)((__int64)v24[0] << 31));
        *a3 = (unsigned __int64)v8;
        goto LABEL_12;
      }
      wil::details::in1diag3::Return_Hr(retaddr, 219LL, v21, (const char *)(unsigned int)v19);
      __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
        &v25,
        v22);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(retaddr, 211LL, v13, (const char *)(unsigned int)ValueFromSemaphore);
    }
    LastError = v14;
  }
  else if ( GetLastError() != 2 )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xCD, v9, v10);
  }
LABEL_12:
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    &v26,
    v8);
  return LastError;
}
