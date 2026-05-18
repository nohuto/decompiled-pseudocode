/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800079A4
 * Callers:
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x180008918 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800021F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800032B4 (memset_0.c)
 *     ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x180004A0C (--1SemaphoreValue@details_abi@wil@@QEAA@XZ.c)
 *     ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x180004F6C (-CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180005144 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18000570C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x180005F60 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180006774 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1800067E8 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180006C48 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180006C64 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x1800072E0 (--0UsageIndexes@details_abi@wil@@QEAA@XZ.c)
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
  __int64 v10; // rdx
  char *v11; // r9
  void *v12; // r14
  int ValueInternal; // eax
  unsigned int v14; // edi
  const char *v15; // r9
  const char *v16; // r9
  _DWORD *v17; // rcx
  char *v18; // rax
  char *v19; // rdi
  unsigned int v20; // esi
  int v21; // eax
  HANDLE ProcessHeap; // rax
  const char *v23; // r9
  const char *v24; // r9
  HANDLE v25; // rax
  const char *v26; // r9
  const char *v27; // r9
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
    v12 = 0LL;
  }
  else
  {
    if ( (v9 & 0xFFFFFF7F) != 0 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        3562LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
        v11);
    v12 = v7;
  }
  hHandle[0] = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal(
                    (char *)Name,
                    v10,
                    (unsigned __int64 *)hHandle,
                    (bool *)v11);
  v14 = ValueInternal;
  if ( ValueInternal < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x64, (__int64)"wil", (const char *)(unsigned int)ValueInternal);
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x6D, (__int64)"wil", (const char *)v14);
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x12B, (__int64)"wil", (const char *)v14);
    if ( v12 && !ReleaseMutex(v12) )
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x9EC,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
        v15);
    if ( !CloseHandle(v7) )
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x9E2,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
        v16);
    return v14;
  }
  v17 = (_DWORD *)(4 * (__int64)hHandle[0]);
  if ( 4 * (__int64)hHandle[0] )
  {
    *a2 = v17;
    ++*v17;
    goto LABEL_24;
  }
  *a2 = 0LL;
  v18 = (char *)wil::details::ProcessHeapAlloc(8u, 0x130uLL);
  v19 = v18;
  if ( v18 )
  {
    *(_OWORD *)hHandle = 0LL;
    v21 = wil::details_abi::SemaphoreValue::CreateFromPointer(
            (wil::details_abi::SemaphoreValue *)hHandle,
            (char *)Name,
            (unsigned __int64)v18);
    v20 = v21;
    if ( v21 >= 0 )
    {
      *((HANDLE *)v19 + 2) = hHandle[0];
      v25 = hHandle[1];
      *((_QWORD *)v19 + 1) = v7;
      v7 = 0LL;
      *((_QWORD *)v19 + 3) = v25;
      *(_DWORD *)v19 = 1;
      hHandle[0] = 0LL;
      hHandle[1] = 0LL;
      memset_0(v19 + 40, 0, 0x108uLL);
      *((_QWORD *)v19 + 4) = 0LL;
      wil::details_abi::UsageIndexes::UsageIndexes((wil::details_abi::UsageIndexes *)(v19 + 40));
      InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v19 + 232), 0, 0);
      *((_QWORD *)v19 + 34) = 0LL;
      *((_QWORD *)v19 + 35) = 0LL;
      *((_QWORD *)v19 + 36) = 0LL;
      *((_QWORD *)v19 + 37) = 0LL;
      *a2 = v19;
      wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details_abi::SemaphoreValue *)hHandle);
LABEL_24:
      if ( v12 && !ReleaseMutex(v12) )
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x9EC,
          (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
          v26);
      if ( v7 && !CloseHandle(v7) )
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x9E2,
          (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
          v27);
      return 0;
    }
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x14B, (__int64)"wil", (const char *)(unsigned int)v21);
    wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details_abi::SemaphoreValue *)hHandle);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v19);
  }
  else
  {
    v20 = -2147024882;
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x148, (__int64)"wil", (const char *)0x8007000ELL);
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)0x134, (__int64)"wil", (const char *)v20);
  if ( v12 && !ReleaseMutex(v12) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x9EC,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      v23);
  if ( v7 && !CloseHandle(v7) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x9E2,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      v24);
  return v20;
}
