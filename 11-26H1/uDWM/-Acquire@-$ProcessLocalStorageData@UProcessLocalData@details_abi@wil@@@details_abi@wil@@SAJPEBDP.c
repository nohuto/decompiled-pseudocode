/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180090CB4
 * Callers:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x1800918BC (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18006E210 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18006E318 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@2@PEAKKH@Z @ 0x180075C18 (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wi.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800778A0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180084218 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800908F8 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-ReleaseMutex@details@wil@@YAX0@ZU-$inte.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x1800919D8 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x180092DC0 (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 */

signed int __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(
        __int64 a1,
        void **a2)
{
  DWORD CurrentProcessId; // eax
  wil::details *Mutex; // rax
  __int64 v6; // rdx
  wil::details *v7; // rcx
  __int64 v8; // r8
  const char *v9; // r9
  wil::details *v10; // rbx
  int Pointer; // eax
  void *v13; // rdx
  int v14; // edi
  void *v15; // rdx
  void *v16; // rdx
  _DWORD *v17; // rcx
  int v18; // eax
  int v19; // ebx
  void *v20; // rdx
  void *v21; // rdx
  void *v22; // rdx
  wil::details *v23; // [rsp+30h] [rbp-D0h] BYREF
  wil::details *v24; // [rsp+38h] [rbp-C8h] BYREF
  void *v25; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR Name[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  StringCchPrintfW(Name, 0x104uLL, (size_t *)L"Local\\SM0:%lu:%lu:%hs", CurrentProcessId, 120, a1);
  v23 = 0LL;
  Mutex = (wil::details *)CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    &v23,
    Mutex);
  v10 = v23;
  if ( !v23 )
    return wil::details::GetLastErrorFailHr(v7, v6, v8, v9);
  _acquire___mutex_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEBA_AV__unique_any_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_ReleaseMutex_details_wil__YAX0_ZU__integral_constant__K_01_wistd__PEAXPEAX_0A___T_details_wil___details_wil___2_PEAKKH_Z(
    (HANDLE *)&v23,
    &v24);
  v25 = 0LL;
  Pointer = wil::details_abi::SemaphoreValue::TryGetPointer(Name, &v25);
  v14 = Pointer;
  if ( Pointer < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x12B, (int)"wil", (const char *)(unsigned int)Pointer);
    __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_ReleaseMutex_details_wil__YAX0_ZU__integral_constant__K_01_wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
      &v24,
      v15);
    wil::details::CloseHandle(v10, v16);
    return v14;
  }
  v17 = v25;
  if ( v25 )
  {
    *a2 = v25;
    ++*v17;
LABEL_12:
    __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_ReleaseMutex_details_wil__YAX0_ZU__integral_constant__K_01_wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
      &v24,
      v13);
    if ( v10 )
      wil::details::CloseHandle(v10, v22);
    return 0;
  }
  v18 = wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(Name);
  v19 = v18;
  if ( v18 >= 0 )
  {
    v10 = v23;
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)0x134, (int)"wil", (const char *)(unsigned int)v18);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_ReleaseMutex_details_wil__YAX0_ZU__integral_constant__K_01_wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    &v24,
    v20);
  if ( v23 )
    wil::details::CloseHandle(v23, v21);
  return v19;
}
