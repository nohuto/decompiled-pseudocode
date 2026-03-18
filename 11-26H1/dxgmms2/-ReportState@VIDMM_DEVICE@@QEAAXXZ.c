/*
 * XREFs of ?ReportState@VIDMM_DEVICE@@QEAAXXZ @ 0x140112C74
 * Callers:
 *     VidMmReportVidMmDeviceState @ 0x1400464F0 (VidMmReportVidMmDeviceState.c)
 *     ?ReportPagingProcessState@VIDMM_GLOBAL@@QEAAXXZ @ 0x14011281C (-ReportPagingProcessState@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14002551C (McTemplateK0pq_EtwWriteTransfer.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400292B0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?ReportState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x140112D64 (-ReportState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE::ReportState(VIDMM_DEVICE *this)
{
  __int64 v1; // rdx
  unsigned int j; // ebx
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  VIDMM_DEVICE *i; // rbx
  _BYTE v11[40]; // [rsp+30h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 2);
  if ( v1 )
  {
    DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v11, (struct _KTHREAD **)(v1 + 144));
    for ( i = (VIDMM_DEVICE *)*((_QWORD *)this + 19); i != (VIDMM_DEVICE *)((char *)this + 152); i = *(VIDMM_DEVICE **)i )
    {
      if ( *((int *)i + 14) > 0 && (byte_14008A201 & 0x20) != 0 )
        McTemplateK0pq_EtwWriteTransfer(v8, &EventVidMmReportAllocationResidency, v9);
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11);
  }
  for ( j = 0; j < *((_DWORD *)this + 15); ++j )
  {
    v4 = *((_QWORD *)this + 9);
    v5 = 32LL * j;
    if ( v4 )
      VIDMM_DEVICE_PAGING_QUEUE::ReportState((VIDMM_DEVICE_PAGING_QUEUE *)(v4 + v5));
    v6 = *((_QWORD *)this + 10);
    if ( v6 )
      VIDMM_DEVICE_PAGING_QUEUE::ReportState((VIDMM_DEVICE_PAGING_QUEUE *)(v6 + v5));
    v7 = *((_QWORD *)this + 11);
    if ( v7 )
      VIDMM_DEVICE_PAGING_QUEUE::ReportState((VIDMM_DEVICE_PAGING_QUEUE *)(v5 + v7));
  }
}
