/*
 * XREFs of ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1400E3CE8
 * Callers:
 *     ?VidMmOpCloseAllocationCommand@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@AEAE@Z @ 0x1400D198C (-VidMmOpCloseAllocationCommand@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@AEAE@Z.c)
 *     ?UnpinAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@@Z @ 0x1400E3628 (-UnpinAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@PEAVDXGPUSHLOCKBASE@@@Z @ 0x1400E3B90 (-VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@PEAVDXGPUSHLOCKBASE@@@Z.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@PEA_K@Z @ 0x1400FF530 (-PurgeContent@VIDMM_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@PEA_K@Z.c)
 * Callees:
 *     ?HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ @ 0x14003797C (-HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ.c)
 *     ?VidSchiValidateAllocationNotDisplayed@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC_NONPAGED@@@Z @ 0x140042F98 (-VidSchiValidateAllocationNotDisplayed@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC_NONPAGED@@.c)
 *     ?DdiStopCapture@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_STOPCAPTURE@@@Z @ 0x140047268 (-DdiStopCapture@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_STOPCAPTURE@@@Z.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400D47A8 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1400E3EA4 (-UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400E499C (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

bool __fastcall VIDMM_GLOBAL::UnpinOneAllocation(VIDMM_GLOBAL *a1, __int64 a2, int a3, char a4)
{
  __int64 v5; // rbp
  bool v8; // si
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  bool result; // al
  void *v14; // rax
  ADAPTER_RENDER *v15; // rcx
  _QWORD v16[12]; // [rsp+20h] [rbp-78h] BYREF
  _DXGKARG_STOPCAPTURE v17; // [rsp+A8h] [rbp+10h] BYREF

  v5 = a3;
  if ( (**(_DWORD **)(**(_QWORD **)a2 + 368LL) & 0x40000000) != 0 )
  {
    WdLogSingleEntry0(3LL);
    result = 0;
    WdLogGlobalForLineNumber = 7744;
  }
  else
  {
    v8 = 1;
    if ( (a3 & 1) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a2;
        WdLogGlobalForLineNumber = 7752;
      }
      v8 = VIDMM_DEVICE::UnreferencePinnedAllocation(*(VIDMM_DEVICE **)(a2 + 8), (struct VIDMM_ALLOC *)a2, a4 != 1);
    }
    if ( (v5 & 2) != 0 && v8 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v9 = WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
        *(_QWORD *)(v9 + 24) = a2;
        *(_QWORD *)(v9 + 32) = v5;
        WdLogGlobalForLineNumber = 7767;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 96) + 16LL), 0xFFFFFFFF) == 1 )
      {
        VidSchiValidateAllocationNotDisplayed(
          *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a1 + 2) + 744LL),
          *(struct VIDMM_GLOBAL_ALLOC_NONPAGED **)(a2 + 96));
        v10 = *(_QWORD *)(a2 + 16);
        if ( v10 )
        {
          v11 = *(_QWORD *)(v10 + 48);
          if ( (*(_DWORD *)(v11 + 4) & 0x20) != 0 )
          {
            v14 = *(void **)(v11 + 16);
            v15 = (ADAPTER_RENDER *)*((_QWORD *)a1 + 2);
            v17.hAllocation = v14;
            ADAPTER_RENDER::DdiStopCapture(v15, &v17);
          }
        }
      }
      if ( !VIDMM_ALLOC::HasAnyResidencyReferences((VIDMM_ALLOC *)a2) )
      {
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)a1 + 8LL) )
        {
          LOBYTE(v12) = 1;
          VIDMM_GLOBAL::EvictOneAllocation(a1, (__int64 ***)a2, v12);
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)(a2 + 700));
          memset(v16, 0, 0x58uLL);
          LODWORD(v16[0]) = 205;
          v16[2] = a2;
          VIDMM_GLOBAL::QueueSystemCommandAndWait(a1, (struct _VIDMM_SYSTEM_COMMAND *)v16, 1);
        }
      }
    }
    return v8;
  }
  return result;
}
