/*
 * XREFs of NdisIfUpdateInterface @ 0x1400CE890
 * Callers:
 *     <none>
 * Callees:
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 *     ?ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z @ 0x14001D4D0 (-ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEA_K$$A6AXAEBUkspin_lock_saved_irql@details@wil@@@Z$1?Release@123@SAX0@ZU?$integral_constant@_K$01@wistd@@U123@PEA_K$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400CE200 (--1-$unique_storage@U-$resource_policy@PEA_K$$A6AXAEBUkspin_lock_saved_irql@details@wil@@@Z$1-Re.c)
 *     ?acquire_kspin_lock@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_K$$A6AXAEBUkspin_lock_saved_irql@details@wil@@@Z$1?Release@123@SAX0@ZU?$integral_constant@_K$01@wistd@@U123@PEA_K$0A@$$T@details@wil@@@details@wil@@@1@PEA_K@Z @ 0x1400CE264 (-acquire_kspin_lock@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA_K$$A6AXAEB.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEA_K$$A6AXAEBUkspin_lock_saved_irql@details@wil@@@Z$1?Release@123@SAX0@ZU?$integral_constant@_K$01@wistd@@U123@PEA_K$0A@$$T@details@wil@@@details@wil@@QEAAXUkspin_lock_saved_irql@23@@Z @ 0x1400CE76C (-reset@-$unique_storage@U-$resource_policy@PEA_K$$A6AXAEBUkspin_lock_saved_irql@details@wil@@@Z$.c)
 *     ??$MakePoolPtr@UNDIS_IF_UPDATE_CONTEXT@@@@YA?AV?$unique_ptr@UNDIS_IF_UPDATE_CONTEXT@@U?$KFreePool@UNDIS_IF_UPDATE_CONTEXT@@@@@wistd@@K@Z @ 0x140146A58 (--$MakePoolPtr@UNDIS_IF_UPDATE_CONTEXT@@@@YA-AV-$unique_ptr@UNDIS_IF_UPDATE_CONTEXT@@U-$KFreePoo.c)
 */

__int64 __fastcall NdisIfUpdateInterface(ULONG_PTR BugCheckParameter4, int a2)
{
  unsigned int v2; // edi
  KIRQL CurrentIrql; // al
  struct _WORK_QUEUE_ITEM *v6; // rbx
  struct _NDIS_IF_BLOCK *Interface; // rax
  struct _NDIS_IF_BLOCK *v9; // rbp
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF
  PVOID P; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( !BugCheckParameter4
    || (void *)BugCheckParameter4 == qword_14011F670
    || (void *)BugCheckParameter4 == qword_14011F668 )
  {
    ndisBugCheckEx(0x34uLL, 4uLL, 1uLL, BugCheckParameter4);
  }
  if ( KeGetCurrentIrql() )
  {
    CurrentIrql = KeGetCurrentIrql();
    ndisBugCheckEx(0x2EuLL, 3uLL, CurrentIrql, 0LL);
  }
  MakePoolPtr<NDIS_IF_UPDATE_CONTEXT>(&P);
  v6 = (struct _WORK_QUEUE_ITEM *)P;
  if ( !P )
    return 3221225626LL;
  wil::acquire_kspin_lock(&v11);
  Interface = ndisIfFindInterface(a2);
  v9 = Interface;
  if ( !Interface )
  {
    v2 = -1071448021;
LABEL_13:
    wil::details::unique_storage<wil::details::resource_policy<unsigned __int64 *,void (wil::details::kspin_lock_saved_irql const &),&public: static void wil::details::kspin_lock_saved_irql::Release(wil::details::kspin_lock_saved_irql const &),wistd::integral_constant<unsigned __int64,2>,wil::details::kspin_lock_saved_irql,unsigned __int64 *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned __int64 *,void (wil::details::kspin_lock_saved_irql const &),&public: static void wil::details::kspin_lock_saved_irql::Release(wil::details::kspin_lock_saved_irql const &),wistd::integral_constant<unsigned __int64,2>,wil::details::kspin_lock_saved_irql,unsigned __int64 *,0,std::nullptr_t>>(&v11);
    ExFreePoolWithTag(v6, 0);
    return v2;
  }
  if ( Interface->ProviderHandle != (struct _NDIS_IF_PROVIDER_BLOCK *)BugCheckParameter4 )
  {
    v2 = -1073741811;
    goto LABEL_13;
  }
  if ( Interface->IsUpdatePending )
    goto LABEL_13;
  RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)Interface->RefCountTracker;
  Interface->IsUpdatePending = 1;
  NdisReferenceWithTag(RefCountTracker, 0x11u);
  ++v9->Ref;
  *(_QWORD *)&v12 = 0LL;
  BYTE8(v12) = 0;
  wil::details::unique_storage<wil::details::resource_policy<unsigned __int64 *,void (wil::details::kspin_lock_saved_irql const &),&public: static void wil::details::kspin_lock_saved_irql::Release(wil::details::kspin_lock_saved_irql const &),wistd::integral_constant<unsigned __int64,2>,wil::details::kspin_lock_saved_irql,unsigned __int64 *,0,std::nullptr_t>>::reset(
    &v11,
    &v12);
  v6[1].List.Flink = (_LIST_ENTRY *)v9;
  v6->WorkerRoutine = (void (__fastcall *)(void *))ndisIfUpdateExternalInterface;
  v6->Parameter = v6;
  v6->List.Flink = 0LL;
  ExQueueWorkItem(v6, CustomPriorityWorkQueue|MaximumWorkQueue);
  wil::details::unique_storage<wil::details::resource_policy<unsigned __int64 *,void (wil::details::kspin_lock_saved_irql const &),&public: static void wil::details::kspin_lock_saved_irql::Release(wil::details::kspin_lock_saved_irql const &),wistd::integral_constant<unsigned __int64,2>,wil::details::kspin_lock_saved_irql,unsigned __int64 *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned __int64 *,void (wil::details::kspin_lock_saved_irql const &),&public: static void wil::details::kspin_lock_saved_irql::Release(wil::details::kspin_lock_saved_irql const &),wistd::integral_constant<unsigned __int64,2>,wil::details::kspin_lock_saved_irql,unsigned __int64 *,0,std::nullptr_t>>(&v11);
  return 0LL;
}
