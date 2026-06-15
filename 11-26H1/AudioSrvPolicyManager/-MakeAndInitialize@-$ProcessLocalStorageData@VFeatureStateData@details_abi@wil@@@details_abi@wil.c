/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180033704
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180032338 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180017320 (--3@YAXPEAX@Z.c)
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x18002CD88 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 *     memset_0 @ 0x180030A1C (memset_0.c)
 *     ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x180031CB8 (--0UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x180031F84 (--1SemaphoreValue@details_abi@wil@@QEAA@XZ.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x1800325D8 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x180033A5C (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180035E30 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::MakeAndInitialize(
        unsigned __int16 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  unsigned __int64 v6; // rax
  wil::details::in1diag3 *v7; // rcx
  size_t *v8; // r8
  char *v9; // rbx
  int v11; // eax
  unsigned int v12; // edi
  void *v13; // rdx
  __int64 v14; // rax
  void *v15; // rdx
  int v16[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  v6 = (unsigned __int64)wil::details::ProcessHeapAlloc(8u, 0x130uLL, (unsigned __int64)a3);
  v9 = (char *)v6;
  if ( v6 )
  {
    *(_OWORD *)v16 = 0LL;
    if ( (v6 & 3) != 0 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(v7);
    v11 = wil::details_abi::SemaphoreValue::CreateFromValueInternal(
            (wil::details_abi::SemaphoreValue *)v16,
            a1,
            v8,
            v6 >> 2);
    v12 = v11;
    if ( v11 >= 0 )
    {
      *(_DWORD *)v9 = 1;
      *((_QWORD *)v9 + 1) = *a2;
      v14 = *(_QWORD *)v16;
      *a2 = 0LL;
      *((_QWORD *)v9 + 2) = v14;
      *((_QWORD *)v9 + 3) = *(_QWORD *)&v16[2];
      memset(v16, 0, sizeof(v16));
      memset_0(v9 + 40, 0, 0x108uLL);
      *((_QWORD *)v9 + 4) = 0LL;
      wil::details_abi::UsageIndexes::UsageIndexes((wil::details_abi::UsageIndexes *)(v9 + 40));
      wil::details_abi::SubscriptionList::SubscriptionList((struct _RTL_CRITICAL_SECTION *)(v9 + 232));
      *a3 = v9;
      wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details **)v16, v15);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x14B, (int)"wil", (const char *)(unsigned int)v11);
      wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details **)v16, v13);
      operator delete(v9);
      return v12;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x148, (int)"wil", (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
