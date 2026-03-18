/*
 * XREFs of ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1401028B0
 * Callers:
 *     ?Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x140099F08 (-Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14009A53C (-SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CFED0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D09E8 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     VidMmSuspendDevices @ 0x14010107C (VidMmSuspendDevices.c)
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x14010216C (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 *     ?SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z @ 0x140102574 (-SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z.c)
 * Callees:
 *     ?StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z @ 0x1400CF620 (-StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D1528 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140101480 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::FaultAllAllocations(VIDMM_DEVICE *this)
{
  char v2; // bp
  unsigned __int16 i; // di
  unsigned __int16 v4; // si
  _QWORD *v5; // r15
  _QWORD **v6; // r12
  _QWORD *v7; // r14
  struct VIDMM_ALLOC *v8; // rdx

  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
    WdLogGlobalForLineNumber = 1266;
  }
  if ( *(_DWORD *)(*(_QWORD *)this + 8LL) || (*(_DWORD *)(*((_QWORD *)this + 1) + 152LL) & 2) == 0 )
  {
    v2 = 0;
  }
  else
  {
    v2 = 1;
    VIDMM_GLOBAL::StartPreparation(*(_QWORD *)this, 0xFFFFFFFF, 0LL, 0LL, 0x3EDu);
  }
  for ( i = 0; (unsigned int)i < *((_DWORD *)this + 15); ++i )
  {
    v4 = 0;
    v5 = *(_QWORD **)(*((_QWORD *)this + 5) + 8LL * i);
    if ( *(_DWORD *)(*v5 + 136LL) )
    {
      do
      {
        v6 = (_QWORD **)(56LL * v4 + v5[2] + 32LL);
        v7 = *v6;
        while ( v7 != v6 )
        {
          v8 = (struct VIDMM_ALLOC *)(v7 - 7);
          v7 = (_QWORD *)*v7;
          if ( (*(_DWORD *)(**(_QWORD **)v8 + 24LL) & 4) == 0 )
            VIDMM_GLOBAL::FaultOneAllocation(*(VIDMM_GLOBAL **)this, v8);
        }
        ++v4;
      }
      while ( (unsigned int)v4 < *(_DWORD *)(*v5 + 136LL) );
    }
  }
  if ( v2 )
    VIDMM_GLOBAL::EndPreparation(*(VIDMM_GLOBAL **)this, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
}
