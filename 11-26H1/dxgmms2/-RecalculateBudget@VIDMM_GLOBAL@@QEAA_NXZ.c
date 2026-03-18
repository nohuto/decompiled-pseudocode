/*
 * XREFs of ?RecalculateBudget@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1400C60A4
 * Callers:
 *     VidMmWorkerThreadProc @ 0x140128480 (VidMmWorkerThreadProc.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400292B0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGAUTOEXPUSHLOCK@@QEAA@XZ @ 0x140035F30 (--1DXGAUTOEXPUSHLOCK@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x140037998 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140038394 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AssignBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1400C6224 (-AssignBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z.c)
 *     ?SetupBudgetState@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@G@Z @ 0x1400C65A8 (-SetupBudgetState@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@G@Z.c)
 *     ?SendBudgetChangeNotifications@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400C784C (-SendBudgetChangeNotifications@VIDMM_GLOBAL@@QEAAXXZ.c)
 */

char __fastcall VIDMM_GLOBAL::RecalculateBudget(VIDMM_GLOBAL *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned __int16 i; // di
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // [rsp+20h] [rbp-40h] BYREF
  __int64 v10; // [rsp+28h] [rbp-38h]
  _BYTE v11[8]; // [rsp+30h] [rbp-30h] BYREF
  void *v12; // [rsp+38h] [rbp-28h]
  int v13; // [rsp+40h] [rbp-20h]
  _BYTE v14[24]; // [rsp+48h] [rbp-18h] BYREF
  __int16 v15; // [rsp+90h] [rbp+30h] BYREF

  v3 = *((_QWORD *)this + 5639);
  if ( v3 == *((_QWORD *)this + 5640) )
    return 0;
  v10 = 0LL;
  v9 = 14001;
  if ( (byte_14008A203 & 4) != 0 )
    McTemplateK0q_EtwWriteTransfer((__int64)this, &EventVidMmProfilerEnter, a3, 14001);
  DXGETWPROFILER_BASE::PushProfilerEntry();
  for ( i = 0; (unsigned int)i < *((_DWORD *)this + 1738); ++i )
  {
    v15 = 0;
    DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v14, (struct _KTHREAD **)this + 5152);
    v13 = 0;
    v12 = &VIDMM_PARTITION::_PartitionLock;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v12, 0LL);
    v13 = 1;
    VIDMM_GLOBAL::SetupBudgetState(this, (struct VIDMM_BUDGET_STATE *)&v15, i);
    VIDMM_GLOBAL::AssignBudgets(this, (struct VIDMM_BUDGET_STATE *)&v15, D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL);
    if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * i) + 656LL) & 2) != 0 )
      VIDMM_GLOBAL::AssignBudgets(this, (struct VIDMM_BUDGET_STATE *)&v15, D3DKMT_MEMORY_SEGMENT_GROUP_NON_LOCAL);
    DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v11);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14);
  }
  *((_QWORD *)this + 5640) = v3;
  VIDMM_GLOBAL::SendBudgetChangeNotifications(this);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v9);
  if ( (byte_14008A203 & 4) != 0 )
    McTemplateK0q_EtwWriteTransfer(v7, &EventVidMmProfilerExit, v8, v9);
  return 1;
}
