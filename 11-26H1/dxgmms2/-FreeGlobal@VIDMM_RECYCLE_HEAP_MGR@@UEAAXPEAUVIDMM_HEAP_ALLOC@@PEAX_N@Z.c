/*
 * XREFs of ?FreeGlobal@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX_N@Z @ 0x1400F4DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14002C2E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140035B48 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ?IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ @ 0x14003854C (-IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400F0480 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1400F19EC (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1400F3E34 (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400F4640 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400F57D0 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400F57F0 (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::FreeGlobal(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct _LOOKASIDE_LIST_EX *a2,
        void *a3)
{
  __int64 v5; // rcx
  struct _LIST_ENTRY *Flink; // rbx
  VIDMM_PROCESS *v7; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v9; // rcx
  char *v10; // [rsp+50h] [rbp-68h] BYREF
  char v11; // [rsp+58h] [rbp-60h]
  char v12; // [rsp+60h] [rbp-58h]
  struct _KAPC_STATE v13; // [rsp+68h] [rbp-50h] BYREF
  VIDMM_PROCESS *v14; // [rsp+98h] [rbp-20h]

  v12 = 0;
  v14 = (VIDMM_PROCESS *)*((_QWORD *)this + 1);
  VIDMM_PROCESS::SafeAttach(v14, &v13);
  v12 = 1;
  v10 = (char *)this + 1328;
  v11 = 0;
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
    DxgkLogInternalTriageEvent(v5, 262146LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v10);
  *(_QWORD *)(*((_QWORD *)this + 1) + 176LL) += *(_QWORD *)&a2->L.FreeMisses - *(_QWORD *)&a2->L.Tag;
  Flink = a2->L.ListEntry.Flink;
  while ( 1 )
  {
    VIDMM_RECYCLE_RANGE::Decommit((VIDMM_RECYCLE_RANGE *)Flink);
    if ( Flink == a2->L.ListEntry.Blink )
      break;
    Blink = Flink[7].Blink;
    v9 = Flink[4].Blink;
    Flink = 0LL;
    if ( Blink != (struct _LIST_ENTRY *)&v9[4].Blink )
      Flink = (struct _LIST_ENTRY *)((char *)Blink - 120);
  }
  VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees(
    *(VIDMM_RECYCLE_HEAP **)(*(_QWORD *)&a2->L.LastTotalAllocates + 32LL),
    (struct VIDMM_RECYCLE_MULTIRANGE *)a2);
  VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(
    *(PLOOKASIDE_LIST_EX **)(*(_QWORD *)(*(_QWORD *)&a2->L.LastTotalAllocates + 32LL) + 8LL),
    a2);
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v10);
  if ( VIDMM_RECYCLE_HEAP_MGR::IsOverLimits() )
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(1);
  if ( v12 )
    VIDMM_PROCESS::SafeDetach(v7, &v13);
}
