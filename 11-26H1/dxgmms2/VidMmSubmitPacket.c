/*
 * XREFs of VidMmSubmitPacket @ 0x1400CF830
 * Callers:
 *     VidMmFlushEvictQueue @ 0x1400FEA50 (VidMmFlushEvictQueue.c)
 *     VidMmWorkerThreadProc @ 0x140128480 (VidMmWorkerThreadProc.c)
 * Callees:
 *     McTemplateK0ppxx_EtwWriteTransfer @ 0x14003886C (McTemplateK0ppxx_EtwWriteTransfer.c)
 *     McTemplateK0ppx_EtwWriteTransfer @ 0x14003D404 (McTemplateK0ppx_EtwWriteTransfer.c)
 *     ?CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1400CFA10 (-CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CFED0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D09E8 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 */

__int64 __fastcall VidMmSubmitPacket(
        VIDMM_GLOBAL **a1,
        __int64 a2,
        __int64 a3,
        bool a4,
        bool *a5,
        struct VIDMM_ALLOC **a6)
{
  _QWORD *v6; // rdi
  char v11; // r9
  VIDMM_GLOBAL *v12; // rcx
  unsigned int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct _VIDSCH_SYNC_OBJECT *v18; // [rsp+20h] [rbp-38h]
  struct _VIDSCH_SYNC_OBJECT *v19; // [rsp+28h] [rbp-30h]

  v6 = (_QWORD *)(a3 + 40);
  if ( (byte_14008A201 & 1) != 0 )
    McTemplateK0ppx_EtwWriteTransfer((__int64)a1, a2, a3, a2, a3, *v6);
  if ( *(_BYTE *)(a3 + 24) )
  {
    WdLogSingleEntry5(4LL, *(int *)(a3 + 48), a3, *(_QWORD *)(a3 + 64), *(_QWORD *)(a3 + 56), *(_QWORD *)(a3 + 32));
    v11 = *(_BYTE *)(a3 + 25);
    v12 = *a1;
    v19 = *(struct _VIDSCH_SYNC_OBJECT **)(a2 + 88);
    v18 = *(struct _VIDSCH_SYNC_OBJECT **)(a3 + 32);
    WdLogGlobalForLineNumber = 1585;
    v13 = VIDMM_GLOBAL::ProcessDeferredCommand(
            v12,
            (struct _VIDMM_DEFERRED_COMMAND *)(a3 + 48),
            a5,
            v11,
            (unsigned __int64)v18,
            v19,
            a4,
            a6);
    if ( *(_BYTE *)(a3 + 24) )
    {
      v14 = *(_QWORD *)(a3 + 56);
    }
    else
    {
      v14 = *(_QWORD *)(a3 + 72);
      if ( !v14 )
      {
        v14 = *(_QWORD *)(a3 + 64);
        if ( v14 )
          v14 = *(_QWORD *)(v14 + 8);
      }
    }
    VIDMM_PROCESS_ADAPTER_INFO::CheckBudgetRefreshConditionOnProcessMemoryChange(*(VIDMM_PROCESS_ADAPTER_INFO **)(v14 + 16));
    v6 = (_QWORD *)(a3 + 40);
  }
  else
  {
    WdLogSingleEntry4(4LL, *(int *)(a3 + 48), a3, *(unsigned __int8 *)(a3 + 25), *(_QWORD *)(a3 + 32));
    WdLogGlobalForLineNumber = 1607;
    *a5 = 0;
    *a6 = 0LL;
    v13 = VIDMM_GLOBAL::ProcessSystemCommand(
            *a1,
            (struct _VIDMM_SYSTEM_COMMAND *)(a3 + 48),
            *(_BYTE *)(a3 + 25),
            *(_QWORD *)(a3 + 32),
            *(struct _VIDSCH_SYNC_OBJECT **)(a2 + 88));
  }
  if ( (byte_14008A201 & 1) != 0 )
    McTemplateK0ppxx_EtwWriteTransfer(v15, &EventPagingQueueComplete, v16, a2, a3, *v6, 0LL);
  return v13;
}
