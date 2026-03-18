/*
 * XREFs of ?ReportState@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@@Z @ 0x1400D7EB8
 * Callers:
 *     ?ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z @ 0x1400D7DF4 (-ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x14003DCC4 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 *     ?VidMmReportGlobalAlloc@@YAXPEBVDXGADAPTER@@PEBVDXGDEVICE@@PEBUVIDMM_GLOBAL_ALLOC@@PEBVDXGSHAREDRESOURCE@@@Z @ 0x1400D7458 (-VidMmReportGlobalAlloc@@YAXPEBVDXGADAPTER@@PEBVDXGDEVICE@@PEBUVIDMM_GLOBAL_ALLOC@@PEBVDXGSHARED.c)
 */

void __fastcall VIDMM_PAGE_TABLE_BASE::ReportState(
        VIDMM_PAGE_TABLE_BASE *this,
        struct CVirtualAddressAllocator *a2,
        __int64 a3,
        const struct DXGSHAREDRESOURCE *a4)
{
  const struct VIDMM_GLOBAL_ALLOC *v4; // r8
  __int64 v6; // rbx
  __int64 *v7; // r8

  v4 = (const struct VIDMM_GLOBAL_ALLOC *)*((_QWORD *)this + 3);
  v6 = *((_QWORD *)a2 + 12);
  if ( v4 )
    VidMmReportGlobalAlloc(*(const struct DXGADAPTER **)(v6 + 24), 0LL, v4, a4);
  v7 = (__int64 *)*((_QWORD *)this + 4);
  if ( v7 )
  {
    if ( (byte_14008A201 & 0x10) != 0 )
      McTemplateK0ppppppppppppq_EtwWriteTransfer(
        *v7,
        &EventReportDeviceAllocation,
        (__int64)v7,
        *(_QWORD *)(*(_QWORD *)(v7[1] + 8) + 24LL),
        0LL,
        *(_QWORD *)(v6 + 24),
        v7,
        *((_QWORD *)this + 3),
        0LL,
        0LL,
        0LL,
        0LL,
        0LL,
        *(_QWORD *)(*v7 + 16),
        *(_QWORD *)(*((_QWORD *)this + 3) + 224LL));
  }
}
