/*
 * XREFs of ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140101480
 * Callers:
 *     ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x1400B76D8 (-SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CE52C (-PageInDeviceInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CFED0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@PEA_K@Z @ 0x1400FF530 (-PurgeContent@VIDMM_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@PEA_K@Z.c)
 *     ?FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEBV1@GGW4VIDMM_PLACEMENT_RESTRICTION@@IPEAIPEA_KPEA_N@Z @ 0x14010131C (-FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEBV1@GGW4VIDMM_PLACEMENT_RESTRICTION@@IPEAIPEA.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1401028B0 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140102D7C (-VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_A.c)
 * Callees:
 *     McTemplateK0x_EtwWriteTransfer @ 0x140031A48 (McTemplateK0x_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?FaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140101648 (-FaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ForceUncommitVirtualAddress@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z @ 0x140126BC0 (-ForceUncommitVirtualAddress@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::FaultOneAllocation(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2)
{
  VIDMM_GLOBAL **v3; // rsi
  __int64 *v5; // rdi
  __int64 v6; // r14
  __int64 v7; // r8
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // r8
  _DWORD *v13; // rcx
  VIDMM_DEVICE *v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  int v17; // [rsp+20h] [rbp-38h]

  v3 = (VIDMM_GLOBAL **)*((_QWORD *)a2 + 1);
  v5 = **(__int64 ***)a2;
  v6 = *v5;
  v7 = (*(_DWORD *)(*v5 + 52) >> 2) & 0x3F;
  v8 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8 * v7);
  v9 = *((_QWORD *)*v3 + 5040);
  v10 = *(_QWORD *)(v9 + 8 * v7);
  if ( g_IsInternalReleaseOrDbg )
  {
    v11 = WdLogNewEntry5_WdTrace(v9);
    *(_QWORD *)(v11 + 24) = a2;
    *(_QWORD *)(v11 + 32) = v3;
    WdLogGlobalForLineNumber = 1848;
  }
  (*(void (__fastcall **)(__int64, __int64, __int64 (__fastcall *)(), struct VIDMM_ALLOC *, _DWORD, _DWORD, _DWORD))(*(_QWORD *)v10 + 104LL))(
    v10,
    v6,
    RemoveCommitmentCb,
    a2,
    0,
    0,
    *(_QWORD *)(v6 + 16) >> 12);
  --*((_DWORD *)v5 + 19);
  *((_DWORD *)a2 + 7) &= 0xFFFFFFEC;
  if ( dword_14008A5D0 )
    VIDMM_GLOBAL::ForceUncommitVirtualAddress(*v3, (struct VIDMM_DEVICE *)v3, a2);
  if ( !*((_DWORD *)v5 + 19) )
  {
    v13 = (_DWORD *)v5[46];
    if ( (*v13 & 0x40000000) == 0 && !v13[4] && (*(_DWORD *)v5[46] & 0x20000) == 0 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 256LL))(v8, v6);
      if ( (byte_14008A201 & 1) != 0 )
        McTemplateK0x_EtwWriteTransfer(v15, &EventMarkAllocation, v12, a2);
      v16 = *(_QWORD *)(v6 + 16);
      _InterlockedIncrement((volatile signed __int32 *)this + 1804);
      _InterlockedAdd64((volatile signed __int64 *)this + 903, v16);
    }
  }
  v14 = *(VIDMM_DEVICE **)(*((_QWORD *)a2 + 1) + 8LL);
  if ( (*((_DWORD *)v14 + 38) & 2) != 0 && *((_DWORD *)v5 + 18) == 1 )
  {
    LOBYTE(v12) = 1;
    LOBYTE(v17) = 0;
    (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD, int, _QWORD))(*(_QWORD *)v8 + 240LL))(
      v8,
      v6,
      v12,
      0LL,
      v17,
      0LL);
  }
  VIDMM_DEVICE::FaultCommitment(v14, a2);
}
