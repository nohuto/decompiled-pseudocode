/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800094B4
 * Callers:
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x1800098C0 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 * Callees:
 *     ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x180003BB8 (--1SemaphoreValue@details_abi@wil@@QEAA@XZ.c)
 *     ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEB_WPEAX@Z @ 0x180004190 (-CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEB_WPEAX@Z.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180004374 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18000493C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x1800051A0 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800055E4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x180005D80 (-StringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEB_W_NPEA_KPEA_N@Z @ 0x180005E4C (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEB_W_NPEA_KPEA_N@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180006288 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800063AC (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x180008D70 (--0UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     memset_0 @ 0x18000FE42 (memset_0.c)
 *     __security_check_cookie @ 0x18000FE80 (__security_check_cookie.c)
 */

signed int __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Acquire(
        __int64 a1,
        _QWORD *a2)
{
  DWORD CurrentProcessId; // eax
  HANDLE Mutex; // rax
  wil::details *v6; // rcx
  HANDLE v7; // rbx
  DWORD v9; // eax
  void *v10; // rdx
  __int64 v11; // r8
  char *v12; // r9
  void *v13; // r14
  int ValueInternal; // eax
  unsigned int v15; // edi
  __int64 v16; // r8
  const char *v17; // r9
  __int64 v18; // r8
  const char *v19; // r9
  _DWORD *v20; // rcx
  char *v21; // rax
  char *v22; // rdi
  unsigned int v23; // esi
  int v24; // eax
  HANDLE ProcessHeap; // rax
  __int64 v26; // r8
  const char *v27; // r9
  __int64 v28; // r8
  const char *v29; // r9
  HANDLE v30; // rax
  __int64 v31; // r8
  const char *v32; // r9
  __int64 v33; // r8
  const char *v34; // r9
  HANDLE hHandle[2]; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR Name[264]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  StringCchPrintfW(Name, 260LL, L"Local\\SM0:%lu:%lu:%hs", CurrentProcessId, 304, a1);
  hHandle[0] = 0LL;
  Mutex = CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    hHandle,
    Mutex);
  v7 = hHandle[0];
  if ( !hHandle[0] )
    return wil::details::GetLastErrorFailHr(v6);
  v9 = WaitForSingleObjectEx(hHandle[0], 0xFFFFFFFF, 0);
  if ( v9 == 258 )
  {
    v13 = 0LL;
  }
  else
  {
    if ( (v9 & 0xFFFFFF7F) != 0 )
      wil::details::in1diag3::FailFast_Unexpected(retaddr, v10, v11, v12);
    v13 = v7;
  }
  hHandle[0] = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal(
                    Name,
                    (__int64)v10,
                    (unsigned __int64 *)hHandle,
                    (bool *)v12);
  v15 = ValueInternal;
  if ( ValueInternal < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x64, (__int64)"wil", (const char *)(unsigned int)ValueInternal);
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x6D, (__int64)"wil", (const char *)v15);
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x12B, (__int64)"wil", (const char *)v15);
    if ( v13 && !ReleaseMutex(v13) )
      wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x9EC, v16, v17);
    if ( !CloseHandle(v7) )
      wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x9E2, v18, v19);
    return v15;
  }
  v20 = (_DWORD *)(4 * (__int64)hHandle[0]);
  if ( 4 * (__int64)hHandle[0] )
  {
    *a2 = v20;
    ++*v20;
    goto LABEL_24;
  }
  *a2 = 0LL;
  v21 = (char *)wil::details::ProcessHeapAlloc(8u, 0x130uLL);
  v22 = v21;
  if ( v21 )
  {
    *(_OWORD *)hHandle = 0LL;
    v24 = wil::details_abi::SemaphoreValue::CreateFromPointer(
            (wil::details_abi::SemaphoreValue *)hHandle,
            Name,
            (unsigned __int64)v21);
    v23 = v24;
    if ( v24 >= 0 )
    {
      *((HANDLE *)v22 + 2) = hHandle[0];
      v30 = hHandle[1];
      *((_QWORD *)v22 + 1) = v7;
      v7 = 0LL;
      *((_QWORD *)v22 + 3) = v30;
      *(_DWORD *)v22 = 1;
      hHandle[0] = 0LL;
      hHandle[1] = 0LL;
      memset_0(v22 + 40, 0, 0x108uLL);
      *((_QWORD *)v22 + 4) = 0LL;
      wil::details_abi::UsageIndexes::UsageIndexes((wil::details_abi::UsageIndexes *)(v22 + 40));
      InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v22 + 232), 0, 0);
      *((_QWORD *)v22 + 34) = 0LL;
      *((_QWORD *)v22 + 35) = 0LL;
      *((_QWORD *)v22 + 36) = 0LL;
      *((_QWORD *)v22 + 37) = 0LL;
      *a2 = v22;
      wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details_abi::SemaphoreValue *)hHandle);
LABEL_24:
      if ( v13 && !ReleaseMutex(v13) )
        wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x9EC, v31, v32);
      if ( v7 && !CloseHandle(v7) )
        wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x9E2, v33, v34);
      return 0;
    }
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x14B, (__int64)"wil", (const char *)(unsigned int)v24);
    wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details_abi::SemaphoreValue *)hHandle);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v22);
  }
  else
  {
    v23 = -2147024882;
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x148, (__int64)"wil", (const char *)0x8007000ELL);
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)0x134, (__int64)"wil", (const char *)v23);
  if ( v13 && !ReleaseMutex(v13) )
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x9EC, v26, v27);
  if ( v7 && !CloseHandle(v7) )
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x9E2, v28, v29);
  return v23;
}
