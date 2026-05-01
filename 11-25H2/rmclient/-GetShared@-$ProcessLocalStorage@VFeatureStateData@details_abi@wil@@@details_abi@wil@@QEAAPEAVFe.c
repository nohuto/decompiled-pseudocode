/*
 * XREFs of ?GetShared@?$ProcessLocalStorage@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAVFeatureStateData@23@XZ @ 0x1800058F0
 * Callers:
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x180007530 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180005B38 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180005BC0 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x18000609C (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800060EC (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001315C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800131A0 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180013504 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180016FF0 (-MakeAndInitialize@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil.c)
 *     __security_check_cookie @ 0x18001C080 (__security_check_cookie.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorage<wil::details_abi::FeatureStateData>::GetShared(__int64 a1)
{
  DWORD CurrentProcessId; // eax
  wil::details *Mutex; // rax
  wil::details *v4; // rcx
  wil::details *v5; // rsi
  DWORD v6; // eax
  void *v7; // rdx
  unsigned int v8; // r8d
  char *v9; // r9
  wil::details *v10; // rdi
  int ValueInternal; // eax
  void *v12; // rdx
  unsigned int v13; // r8d
  unsigned int v14; // ebp
  __int64 v15; // rcx
  __int64 result; // rax
  unsigned int v17; // r8d
  unsigned int v18; // r8d
  void *v19; // rdx
  int v20; // eax
  unsigned int v21; // r8d
  void *v22; // rdx
  int v23; // [rsp+20h] [rbp-268h]
  int v24; // [rsp+20h] [rbp-268h]
  wil::details *v25; // [rsp+30h] [rbp-258h]
  unsigned __int64 v26; // [rsp+38h] [rbp-250h]
  unsigned __int64 v27; // [rsp+40h] [rbp-248h] BYREF
  WCHAR Name[264]; // [rsp+50h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+0h]

  if ( *(_QWORD *)(a1 + 8) )
    goto LABEL_16;
  v26 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  StringCchPrintfW(Name, 0x104uLL, L"Local\\SM0:%lu:%lu:%hs", CurrentProcessId);
  Mutex = (wil::details *)CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  v25 = Mutex;
  v5 = Mutex;
  if ( !Mutex )
  {
    if ( (int)wil::details::GetLastErrorFailHr(v4) < 0 )
      goto LABEL_16;
    goto LABEL_14;
  }
  v6 = WaitForSingleObjectEx(Mutex, 0xFFFFFFFF, 0);
  if ( v6 == 258 )
  {
    v10 = 0LL;
  }
  else
  {
    if ( (v6 & 0xFFFFFF7F) != 0 )
      wil::details::in1diag3::FailFast_Unexpected(retaddr, v7, v8, v9);
    v10 = v5;
  }
  v27 = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal(Name, (bool)v7, &v27, (bool *)v9);
  v14 = ValueInternal;
  if ( ValueInternal < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x64, v13, (const char *)(unsigned int)ValueInternal, 304);
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x6D, v17, (const char *)v14, v23);
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x12B, v18, (const char *)v14, v24);
    if ( v10 )
      wil::details::ReleaseMutex(v10, v19);
    wil::details::CloseHandle(v5, v19);
  }
  else
  {
    if ( 4 * v27 )
    {
      v26 = 4 * v27;
      ++*(_DWORD *)(4 * v27);
LABEL_9:
      if ( v10 )
        wil::details::ReleaseMutex(v10, v12);
      if ( v25 )
        wil::details::CloseHandle(v25, v12);
LABEL_14:
      if ( !*(_QWORD *)(a1 + 8) )
        *(_QWORD *)(a1 + 8) = v26;
      goto LABEL_16;
    }
    v20 = wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::MakeAndInitialize(Name);
    if ( v20 >= 0 )
      goto LABEL_9;
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x134, v21, (const char *)(unsigned int)v20, 304);
    if ( v10 )
      wil::details::ReleaseMutex(v10, v22);
    if ( v25 )
      wil::details::CloseHandle(v25, v22);
  }
LABEL_16:
  v15 = *(_QWORD *)(a1 + 8);
  result = v15 + 32;
  if ( !v15 )
    return 0LL;
  return result;
}
