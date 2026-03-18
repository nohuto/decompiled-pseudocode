/*
 * XREFs of ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x140112488
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D09E8 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400292B0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?ReportProcessStates@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400D97B4 (-ReportProcessStates@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ReportProcessAdapterBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x140112590 (-ReportProcessAdapterBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z.c)
 *     ?ReportPagingProcessState@VIDMM_GLOBAL@@QEAAXXZ @ 0x14011281C (-ReportPagingProcessState@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ReportHeapManagerStates@VIDMM_RECYCLE_HEAP_MGR@@SAXXZ @ 0x140112934 (-ReportHeapManagerStates@VIDMM_RECYCLE_HEAP_MGR@@SAXXZ.c)
 *     VidMmReportDmaPoolState @ 0x140124C50 (VidMmReportDmaPoolState.c)
 */

void __fastcall VIDMM_GLOBAL::ReportVidMmStateWorker(VIDMM_GLOBAL *this)
{
  unsigned int v2; // ecx
  unsigned __int16 i; // di
  unsigned int v4; // edi
  VIDMM_GLOBAL *j; // rdi
  __int64 v6; // rcx
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_DWORD *)this + 1738);
  for ( i = 0; i < v2; ++i )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 96LL))(v6);
    v2 = *((_DWORD *)this + 1738);
  }
  v4 = 0;
  if ( v2 )
  {
    do
    {
      if ( *((_QWORD *)this + v4 + 144) )
        VidMmReportDmaPoolState(*((_QWORD *)this + v4 + 80));
      ++v4;
    }
    while ( v4 < *((_DWORD *)this + 1738) );
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 444LL) & 1) != 0 )
    VIDMM_RECYCLE_HEAP_MGR::ReportHeapManagerStates();
  VIDMM_GLOBAL::ReportProcessStates((struct _KTHREAD **)this);
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v7, (struct _KTHREAD **)this + 5152);
  for ( j = (VIDMM_GLOBAL *)*((_QWORD *)this + 5158); j != (VIDMM_GLOBAL *)((char *)this + 41264); j = *(VIDMM_GLOBAL **)j )
    VIDMM_GLOBAL::ReportProcessAdapterBudget(this, (VIDMM_GLOBAL *)((char *)j - 40));
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7);
  VIDMM_GLOBAL::ReportPagingProcessState(this);
}
