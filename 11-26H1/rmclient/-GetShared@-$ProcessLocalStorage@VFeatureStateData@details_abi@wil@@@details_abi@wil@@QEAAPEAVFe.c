/*
 * XREFs of ?GetShared@?$ProcessLocalStorage@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAVFeatureStateData@23@XZ @ 0x180007E40
 * Callers:
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x180012700 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180007D84 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-ReleaseMutex@details@wil@@YAX0@ZU-$inte.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180007E1C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180008078 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180008100 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800085E0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x180008610 (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180011AB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180011AF8 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180012334 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180015F18 (-MakeAndInitialize@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil.c)
 *     __security_check_cookie @ 0x18001A5F0 (__security_check_cookie.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorage<wil::details_abi::FeatureStateData>::GetShared(__int64 a1)
{
  _DWORD *v2; // rsi
  DWORD CurrentProcessId; // eax
  wil::details *Mutex; // rax
  wil::details *v5; // rcx
  wil::details *v6; // rbx
  __int64 v7; // rcx
  __int64 result; // rax
  DWORD v9; // eax
  void *v10; // rdx
  unsigned int v11; // r8d
  char *v12; // r9
  wil::details *v13; // rbp
  int ValueInternal; // eax
  void *v15; // rdx
  unsigned int v16; // r8d
  unsigned int v17; // esi
  unsigned int v18; // r8d
  unsigned int v19; // r8d
  void *v20; // rdx
  int v21; // eax
  unsigned int v22; // r8d
  void *v23; // rdx
  void *v24; // rdx
  int v25; // [rsp+20h] [rbp-268h]
  int v26; // [rsp+20h] [rbp-268h]
  wil::details *v27; // [rsp+30h] [rbp-258h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-250h] BYREF
  _DWORD *v29; // [rsp+40h] [rbp-248h]
  wil::details *v30; // [rsp+48h] [rbp-240h] BYREF
  WCHAR Name[264]; // [rsp+50h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+0h]

  if ( *(_QWORD *)(a1 + 8) )
    goto LABEL_6;
  v2 = 0LL;
  v29 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  StringCchPrintfW(Name, 0x104uLL, L"Local\\SM0:%lu:%lu:%hs", CurrentProcessId);
  Mutex = (wil::details *)CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  v27 = Mutex;
  v6 = Mutex;
  if ( !Mutex )
  {
    if ( (int)wil::details::GetLastErrorFailHr(v5) < 0 )
      goto LABEL_6;
LABEL_4:
    if ( !*(_QWORD *)(a1 + 8) )
      *(_QWORD *)(a1 + 8) = v2;
    goto LABEL_6;
  }
  v9 = WaitForSingleObjectEx(Mutex, 0xFFFFFFFF, 0);
  if ( v9 == 258 )
  {
    v13 = 0LL;
  }
  else
  {
    if ( (v9 & 0xFFFFFF7F) != 0 )
      wil::details::in1diag3::FailFast_Unexpected(retaddr, v10, v11, v12);
    v13 = v6;
  }
  v30 = v13;
  v28 = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal(Name, (bool)v10, &v28, (bool *)v12);
  v17 = ValueInternal;
  if ( ValueInternal >= 0 )
  {
    v2 = (_DWORD *)(4 * v28);
    if ( 4 * v28 )
    {
      ++*v2;
    }
    else
    {
      v21 = wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::MakeAndInitialize(Name);
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(retaddr, (void *)0x134, v22, (const char *)(unsigned int)v21, 304);
        __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_ReleaseMutex_details_wil__YAX0_ZU__integral_constant__K_01_wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
          &v30,
          v23);
        __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
          &v27,
          v24);
        goto LABEL_6;
      }
      v2 = v29;
      v6 = v27;
    }
    if ( v13 )
      wil::details::ReleaseMutex(v13, v15);
    if ( v6 )
      wil::details::CloseHandle(v6, v15);
    goto LABEL_4;
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)0x64, v16, (const char *)(unsigned int)ValueInternal, 304);
  wil::details::in1diag3::Return_Hr(retaddr, (void *)0x6D, v18, (const char *)v17, v25);
  wil::details::in1diag3::Return_Hr(retaddr, (void *)0x12B, v19, (const char *)v17, v26);
  if ( v13 )
    wil::details::ReleaseMutex(v13, v20);
  wil::details::CloseHandle(v6, v20);
LABEL_6:
  v7 = *(_QWORD *)(a1 + 8);
  result = v7 + 32;
  if ( !v7 )
    return 0LL;
  return result;
}
