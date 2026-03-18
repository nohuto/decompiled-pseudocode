/*
 * XREFs of ?ReportState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x140112D64
 * Callers:
 *     ?ReportState@VIDMM_DEVICE@@QEAAXXZ @ 0x140112C74 (-ReportState@VIDMM_DEVICE@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0ppqqpx_EtwWriteTransfer @ 0x14003A7B4 (McTemplateK0ppqqpx_EtwWriteTransfer.c)
 *     McTemplateK0pptqx_EtwWriteTransfer @ 0x1400491F0 (McTemplateK0pptqx_EtwWriteTransfer.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

void __fastcall VIDMM_DEVICE_PAGING_QUEUE::ReportState(VIDMM_DEVICE_PAGING_QUEUE *this)
{
  __int64 v1; // rbx
  __int64 v3; // r8
  int v4; // [rsp+28h] [rbp-A0h]
  int v5; // [rsp+28h] [rbp-A0h]
  int v6; // [rsp+30h] [rbp-98h]
  int v7; // [rsp+30h] [rbp-98h]
  _QWORD v8[14]; // [rsp+50h] [rbp-78h] BYREF

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
  {
    if ( *(_DWORD *)(v1 + 48) == 6 )
    {
      memset(v8, 0, sizeof(v8));
      if ( (byte_14008A201 & 1) != 0 )
      {
        v7 = v8[2];
        v5 = 4;
        McTemplateK0pptqx_EtwWriteTransfer(
          *(_QWORD *)(*(_QWORD *)this + 96LL),
          &EventReportNativeFence,
          v3,
          *(_QWORD *)(**(_QWORD **)(*(_QWORD *)this + 96LL) + 24LL),
          v1,
          v5,
          v7,
          v8[0]);
      }
    }
    else
    {
      memset(v8, 0, 0x50uLL);
      if ( bTracingEnabled )
      {
        if ( (byte_14008A201 & 1) != 0 )
        {
          v6 = HIDWORD(v8[0]);
          v4 = 4;
          McTemplateK0ppqqpx_EtwWriteTransfer(
            (__int64)&DxgkControlGuid_Context,
            &EventReportMonitoredFence,
            0LL,
            *(_QWORD *)(**(_QWORD **)(*(_QWORD *)this + 96LL) + 24LL),
            v1,
            v4,
            v6,
            0LL,
            v8[1]);
        }
      }
    }
  }
}
