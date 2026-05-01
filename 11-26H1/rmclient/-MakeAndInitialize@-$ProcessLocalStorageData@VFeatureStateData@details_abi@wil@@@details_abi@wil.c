/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180015F18
 * Callers:
 *     ?GetShared@?$ProcessLocalStorage@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAVFeatureStateData@23@XZ @ 0x180007E40 (-GetShared@-$ProcessLocalStorage@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAVFe.c)
 * Callees:
 *     ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x1800064F0 (--0UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAXPEAX@Z @ 0x1800086C0 (-reset@-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAXPEAX@Z.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x18000E520 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x18000F500 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180011AB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x180015184 (--1SemaphoreValue@details_abi@wil@@QEAA@XZ.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x180015414 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18001679C (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     memset_0 @ 0x18001A5BE (memset_0.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::MakeAndInitialize(
        char *a1,
        _QWORD *a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v6; // rax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // rdi
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // r8d
  void *v13; // rdx
  unsigned __int64 v15; // rax
  void *v16; // rdx
  __int128 v17; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  unsigned __int64 v19; // [rsp+60h] [rbp+30h] BYREF

  *a3 = 0LL;
  v6 = (unsigned __int64)wil::details::ProcessHeapAlloc(8u, 0x130uLL);
  v19 = v6;
  v9 = v6;
  if ( !v6 )
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x148, v8, (const char *)0x8007000ELL);
LABEL_7:
    wistd::unique_ptr<void,wil::process_heap_deleter>::reset((void **)&v19, 0LL);
    return v10;
  }
  v17 = 0LL;
  if ( (v6 & 3) != 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(v7);
  v11 = wil::details_abi::SemaphoreValue::CreateFromValueInternal(
          (wil::details_abi::SemaphoreValue *)&v17,
          a1,
          v8,
          v6 >> 2);
  v10 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x14B, v12, (const char *)(unsigned int)v11);
    wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details **)&v17, v13);
    goto LABEL_7;
  }
  *(_DWORD *)v9 = 1;
  *(_QWORD *)(v9 + 8) = *a2;
  v15 = v17;
  *a2 = 0LL;
  *(_OWORD *)(v9 + 16) = __PAIR128__(*((unsigned __int64 *)&v17 + 1), v15);
  v17 = 0uLL;
  memset_0((void *)(v9 + 40), 0, 0x108uLL);
  *(_QWORD *)(v9 + 32) = 0LL;
  wil::details_abi::UsageIndexes::UsageIndexes((wil::details_abi::UsageIndexes *)(v9 + 40));
  wil::details_abi::SubscriptionList::SubscriptionList((struct _RTL_CRITICAL_SECTION *)(v9 + 232));
  v19 = 0LL;
  *a3 = v9;
  wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details **)&v17, v16);
  wistd::unique_ptr<void,wil::process_heap_deleter>::reset((void **)&v19, 0LL);
  return 0LL;
}
