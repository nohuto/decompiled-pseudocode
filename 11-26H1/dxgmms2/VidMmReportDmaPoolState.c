/*
 * XREFs of VidMmReportDmaPoolState @ 0x140124C50
 * Callers:
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x140112488 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x14002B940 (McTemplateK0pqx_EtwWriteTransfer.c)
 *     ?IterateAllPhysicalMemoryRangesEx@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@P6AJPEAU1@0PEBUVIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC@@PEAX@Z3I@Z @ 0x14003D744 (-IterateAllPhysicalMemoryRangesEx@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@P6AJPEA.c)
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x14003DCC4 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 *     McTemplateK0pppxxxp_EtwWriteTransfer @ 0x140046B60 (McTemplateK0pppxxxp_EtwWriteTransfer.c)
 *     ?VidMmReportGlobalAlloc@@YAXPEBVDXGADAPTER@@PEBVDXGDEVICE@@PEBUVIDMM_GLOBAL_ALLOC@@PEBVDXGSHAREDRESOURCE@@@Z @ 0x1400D7458 (-VidMmReportGlobalAlloc@@YAXPEBVDXGADAPTER@@PEBVDXGDEVICE@@PEBUVIDMM_GLOBAL_ALLOC@@PEBVDXGSHARED.c)
 */

void __fastcall VidMmReportDmaPoolState(__int64 *a1, __int64 a2, __int64 a3, const struct DXGSHAREDRESOURCE *a4)
{
  __int64 *v4; // r14
  __int64 i; // rbx
  __int64 v7; // rdi
  __int64 *v8; // rbp
  struct VIDMM_PHYSICAL_ALLOC *v9; // r15
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13[2]; // [rsp+20h] [rbp-78h]

  v4 = a1 + 11;
  for ( i = a1[11]; (__int64 *)i != v4; i = *(_QWORD *)i )
  {
    v7 = *(_QWORD *)(i + 48);
    if ( v7 )
    {
      v8 = (__int64 *)a1[3];
      if ( v8 )
        v8 = (__int64 *)v8[2];
      v9 = *(struct VIDMM_PHYSICAL_ALLOC **)v7;
      VidMmReportGlobalAlloc(
        *(const struct DXGADAPTER **)(*a1 + 24),
        (const struct DXGDEVICE *)v8,
        *(const struct VIDMM_GLOBAL_ALLOC **)(i + 48),
        a4);
      if ( v8 )
      {
        if ( (byte_14008A201 & 0x10) != 0 )
        {
          if ( (**(_DWORD **)(v7 + 368) & 8) != 0 )
            v11 = *(_QWORD *)(v7 + 208);
          else
            v11 = *(_QWORD *)(**(_QWORD **)(i + 56) + 16LL);
          McTemplateK0ppppppppppppq_EtwWriteTransfer(
            v8[2],
            &EventReportDeviceAllocation,
            *(_QWORD *)(v7 + 224),
            *(_QWORD *)(*(_QWORD *)(v8[5] + 64) + 80LL),
            v8,
            *(_QWORD *)(v8[2] + 16),
            *(_QWORD *)(i + 56),
            v7,
            0LL,
            0LL,
            0LL,
            0LL,
            0LL,
            v11,
            *(_QWORD *)(v7 + 224));
        }
      }
      else
      {
        v12 = *(_QWORD *)(*a1 + 24);
        if ( (*(_DWORD *)(v12 + 444) & 4) != 0 )
        {
          if ( (byte_14008A201 & 1) == 0 )
            continue;
          v13[0] = 0;
          McTemplateK0pqx_EtwWriteTransfer(
            v12,
            &EventReportCommittedGlobalAllocation,
            v10,
            *(_QWORD *)v9,
            *(_QWORD *)v13,
            0LL);
        }
        else if ( (*((_DWORD *)v9 + 14) & 1) != 0 )
        {
          VIDMM_PHYSICAL_ADAPTER::IterateAllPhysicalMemoryRangesEx(
            (VIDMM_PHYSICAL_ADAPTER *)a1[2],
            v9,
            ReportDmaAllocationCB,
            0LL,
            2u);
        }
      }
    }
    if ( (byte_14008A201 & 1) != 0 )
      McTemplateK0pppxxxp_EtwWriteTransfer(
        *(unsigned int *)(i + 40),
        &EventAddDmaBuffer,
        *a1,
        a1[3],
        *(_QWORD *)(*a1 + 24),
        i,
        *(unsigned int *)(i + 36),
        *(unsigned int *)(i + 40),
        *(unsigned int *)(i + 44),
        v7);
  }
}
