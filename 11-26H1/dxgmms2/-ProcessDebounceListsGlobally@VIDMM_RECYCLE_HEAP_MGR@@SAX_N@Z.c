/*
 * XREFs of ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1400F19EC
 * Callers:
 *     ?PurgeAllSegments@VIDMM_GLOBAL@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@@Z @ 0x1400E46C4 (-PurgeAllSegments@VIDMM_GLOBAL@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@@Z.c)
 *     ?FreeGlobal@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX_N@Z @ 0x1400F4DC0 (-FreeGlobal@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX_N@Z.c)
 *     ?LockHeapAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_GLOBAL@@_N@Z @ 0x1400F5F40 (-LockHeapAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_.c)
 *     ?UnlockHeapAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@_K1_N@Z @ 0x14010A420 (-UnlockHeapAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@_K1_N@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1400F1DE0 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(bool a1)
{
  struct _LIST_ENTRY *i; // rdi
  struct _LIST_ENTRY *v3; // r14
  char v4; // cl
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r9d
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v16; // rcx
  __int64 v17; // [rsp+58h] [rbp-39h] BYREF
  char v18; // [rsp+60h] [rbp-31h]
  _BYTE v19[24]; // [rsp+70h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-9h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v19,
    (struct _KTHREAD **)VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock);
  for ( i = VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead.Flink;
        i != &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
        i = i->Flink )
  {
    v3 = i - 100;
    v4 = 0;
    v18 = 0;
    v17 = (__int64)&i[-17];
    if ( i == (struct _LIST_ENTRY *)272 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 628;
      DxgkLogInternalTriageEvent(v5, 262146LL);
      v4 = v18;
    }
    if ( v4 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, &v17, 0LL, 0LL);
      WdLogGlobalForLineNumber = 672;
    }
    v6 = v17;
    KeEnterCriticalRegion();
    if ( *(struct _KTHREAD **)(v6 + 24) == KeGetCurrentThread() )
    {
      if ( *(int *)(v6 + 32) <= 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 504;
        DxgkLogInternalTriageEvent(v16, 262146LL);
      }
      ++*(_DWORD *)(v6 + 32);
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v6 + 8, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v9 = *(_DWORD *)(v6 + 36);
          if ( v9 != -1 && (byte_14008A201 & 1) != 0 )
            McTemplateK0q_EtwWriteTransfer(v7, &EventBlockThread, v8, v9);
        }
        _InterlockedAdd64((volatile signed __int64 *)(v6 + 16), 1uLL);
        ExAcquirePushLockExclusiveEx(v6 + 8, 0LL);
      }
      if ( *(_QWORD *)(v6 + 24) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 530;
        DxgkLogInternalTriageEvent(v10, 262146LL);
      }
      if ( *(_DWORD *)(v6 + 32) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 531;
        DxgkLogInternalTriageEvent(v11, 262146LL);
      }
      *(_QWORD *)(v6 + 24) = KeGetCurrentThread();
      *(_DWORD *)(v6 + 32) = 1;
    }
    v18 = 1;
    if ( v3[96].Blink != (struct _LIST_ENTRY *)&v3[96].Blink || v3[97].Blink != (struct _LIST_ENTRY *)&v3[97].Blink )
    {
      Blink = v3->Blink;
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess((PRKPROCESS)Blink[1].Flink, &ApcState);
      VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList((VIDMM_RECYCLE_HEAP_MGR *)&i[-100], 0, a1);
      KeUnstackDetachProcess(&ApcState);
      if ( !v18 )
        continue;
    }
    v13 = v17;
    v18 = 0;
    if ( *(struct _KTHREAD **)(v17 + 24) != KeGetCurrentThread() )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v17, 0LL, 0LL);
      WdLogGlobalForLineNumber = 553;
    }
    if ( *(int *)(v13 + 32) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 556;
      DxgkLogInternalTriageEvent(v14, 262146LL);
    }
    if ( (*(_DWORD *)(v13 + 32))-- == 1 )
    {
      *(_QWORD *)(v13 + 24) = 0LL;
      ExReleasePushLockExclusiveEx(v13 + 8, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19);
}
