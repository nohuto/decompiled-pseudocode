/*
 * XREFs of ?ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1403B30D4
 * Callers:
 *     ?ReportDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1403B2EDC (-ReportDeviceResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?ReportDeviceAllocations@DXGDEVICE@@QEAAXXZ @ 0x1403B3078 (-ReportDeviceAllocations@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtphtp_EtwWriteTransfer @ 0x1400638F0 (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtphtp_EtwWriteTransfer.c)
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x1400748B0 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall DXGDEVICE::ReportAllocationState(DXGDEVICE *this, struct DXGALLOCATION *a2, int a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // [rsp+40h] [rbp-D8h]
  int v9; // [rsp+48h] [rbp-D0h]
  int v10; // [rsp+50h] [rbp-C8h]
  int v11; // [rsp+58h] [rbp-C0h]
  int v12; // [rsp+60h] [rbp-B8h]
  int v13; // [rsp+68h] [rbp-B0h]
  int v14; // [rsp+70h] [rbp-A8h]
  int v15; // [rsp+78h] [rbp-A0h]
  int v16; // [rsp+88h] [rbp-90h]
  int v17; // [rsp+90h] [rbp-88h]
  int v18; // [rsp+98h] [rbp-80h]
  int v19; // [rsp+A0h] [rbp-78h]
  int v20; // [rsp+A8h] [rbp-70h]
  int v21; // [rsp+B0h] [rbp-68h]
  int v22; // [rsp+B8h] [rbp-60h]
  int v23; // [rsp+C0h] [rbp-58h]
  int v24; // [rsp+C8h] [rbp-50h]
  int v25; // [rsp+D0h] [rbp-48h]
  int v26; // [rsp+D8h] [rbp-40h]
  int v27; // [rsp+E0h] [rbp-38h]
  int v28; // [rsp+E8h] [rbp-30h]

  v3 = 0LL;
  if ( (*((_BYTE *)this + 1917) & 1) != 0 )
  {
    if ( a3 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) == 0 )
        return;
      McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtphtp_EtwWriteTransfer(
        *((unsigned int *)a2 + 30),
        &EventReportAdapterAllocation,
        (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 21) & 0x3F,
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 64LL) + 80LL),
        (char)this,
        *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
        0,
        *((_DWORD *)a2 + 30),
        v8,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15,
        *((_QWORD *)a2 + 6),
        v16,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28,
        (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 21) & 0x3F,
        0,
        0LL);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) != 0 )
    {
      v7 = *((_QWORD *)a2 + 5);
      if ( v7 )
        McTemplateK0ppppppppppppq_EtwWriteTransfer(
          *((_QWORD *)this + 2),
          &EventReportDeviceAllocation,
          *(_QWORD *)(v7 + 48),
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 64LL) + 80LL),
          this,
          *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
          a2);
      else
        McTemplateK0ppppppppppppq_EtwWriteTransfer(
          *((_QWORD *)this + 2),
          &EventReportDeviceAllocation,
          0LL,
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 64LL) + 80LL),
          this,
          *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
          a2);
    }
  }
  else
  {
    if ( a3 )
    {
      v6 = *((_QWORD *)a2 + 5);
      if ( v6 )
        v3 = *(_QWORD *)(v6 + 56);
      (*(void (__fastcall **)(DXGDEVICE *, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                           + 560LL))(
        this,
        *((_QWORD *)a2 + 6),
        v3);
    }
    (*(void (__fastcall **)(DXGDEVICE *, struct DXGALLOCATION *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                            + 8LL)
                                                                + 568LL))(
      this,
      a2);
  }
}
