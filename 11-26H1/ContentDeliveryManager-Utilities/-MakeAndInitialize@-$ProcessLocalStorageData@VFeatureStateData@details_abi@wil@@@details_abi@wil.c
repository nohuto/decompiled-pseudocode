/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180035058
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18002CCD0 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     memset_0 @ 0x180021E51 (memset_0.c)
 *     ??0_lambda_62158d46a05af21ae3d227fe228597be_@@QEAA@PEAVPinWebsiteToTaskbarService@Actions@CreativeFramework@@@Z @ 0x1800236BC (--0_lambda_62158d46a05af21ae3d227fe228597be_@@QEAA@PEAVPinWebsiteToTaskbarService@Actions@Creati.c)
 *     ??$?8XUprocess_heap_deleter@wil@@@wistd@@YA_NAEBV?$unique_ptr@XUprocess_heap_deleter@wil@@@0@$$T@Z @ 0x180023898 (--$-8XUprocess_heap_deleter@wil@@@wistd@@YA_NAEBV-$unique_ptr@XUprocess_heap_deleter@wil@@@0@$$T.c)
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x18002917C (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 *     ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x180029200 (--0UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x18002A348 (--1SemaphoreValue@details_abi@wil@@QEAA@XZ.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x18002DACC (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18002EC44 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x180030074 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x180035BC0 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::MakeAndInitialize(
        unsigned __int16 *a1,
        _QWORD *a2,
        wil::details **a3)
{
  struct CreativeFramework::Actions::PinWebsiteToTaskbarService *v6; // rax
  wil::details::in1diag3 *v7; // rcx
  size_t *v8; // r8
  void *v9; // rdx
  wil::details *v11; // rbx
  int v12; // eax
  unsigned int v13; // edi
  void *v14; // rdx
  void *v15; // rdx
  unsigned __int64 v16; // rax
  void *v17; // rdx
  __int128 v18; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  wil::details *v20; // [rsp+60h] [rbp+30h] BYREF

  *a3 = 0LL;
  v6 = (struct CreativeFramework::Actions::PinWebsiteToTaskbarService *)wil::details::ProcessHeapAlloc(
                                                                          8u,
                                                                          0x130uLL,
                                                                          (unsigned __int64)a3);
  _lambda_62158d46a05af21ae3d227fe228597be_::_lambda_62158d46a05af21ae3d227fe228597be_(
    (_lambda_62158d46a05af21ae3d227fe228597be_ *)&v20,
    v6);
  if ( wistd::operator==<void,wil::process_heap_deleter>(&v20) )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x148, (unsigned int)"wil", (const char *)0x8007000ELL, v18);
    if ( v20 )
      wil::details::FreeProcessHeap(v20, v9);
    return 2147942414LL;
  }
  else
  {
    v11 = v20;
    v18 = 0LL;
    if ( ((unsigned __int8)v20 & 3) != 0 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(v7);
    v12 = wil::details_abi::SemaphoreValue::CreateFromValueInternal(
            (wil::details_abi::SemaphoreValue *)&v18,
            a1,
            v8,
            (unsigned __int64)v20 >> 2);
    v13 = v12;
    if ( v12 >= 0 )
    {
      *(_DWORD *)v11 = 1;
      *((_QWORD *)v11 + 1) = *a2;
      v16 = v18;
      *a2 = 0LL;
      *((_OWORD *)v11 + 1) = __PAIR128__(*((unsigned __int64 *)&v18 + 1), v16);
      v18 = 0uLL;
      memset_0((char *)v11 + 40, 0, 0x108uLL);
      *((_QWORD *)v11 + 4) = 0LL;
      wil::details_abi::UsageIndexes::UsageIndexes((wil::details *)((char *)v11 + 40));
      wil::details_abi::SubscriptionList::SubscriptionList((struct _RTL_CRITICAL_SECTION *)((char *)v11 + 232));
      *a3 = v11;
      wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details **)&v18, v17);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14B,
        (unsigned int)"wil",
        (const char *)(unsigned int)v12,
        v18);
      wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details **)&v18, v14);
      if ( v11 )
        wil::details::FreeProcessHeap(v11, v15);
      return v13;
    }
  }
}
