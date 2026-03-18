/*
 * XREFs of ?WriteVirtualizedInterrupt@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@PEAU_MSI_TABLE_ENTRY@@PEAU_DXGKARG_GPUP_WRITE_VIRTUALIZED_MSIX@@@Z @ 0x1402169BC
 * Callers:
 *     DxgkDdiWriteVirtualizedInterrupt @ 0x14021859C (DxgkDdiWriteVirtualizedInterrupt.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z @ 0x140193C68 (-FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUI.c)
 *     ?GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z @ 0x1403F36A0 (-GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::WriteVirtualizedInterrupt(
        __int64 a1,
        int a2,
        struct _LUID *a3,
        __int64 a4,
        _DWORD *a5)
{
  __int64 v8; // rbx
  __int64 VirtualGpuManager; // rax
  struct DXGK_VIRTUAL_GPU *VirtualGpuByLuid; // rax
  unsigned int v12; // ebx
  __int64 HighPart; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+20h] [rbp-58h]
  __int64 LowPart; // [rsp+28h] [rbp-50h]
  __int64 v16; // [rsp+28h] [rbp-50h]
  __int64 v17; // [rsp+38h] [rbp-40h]
  __int64 v18; // [rsp+38h] [rbp-40h]
  _BYTE v19[32]; // [rsp+50h] [rbp-28h] BYREF

  if ( a2 )
  {
    v8 = a2;
    WdLogSingleEntry4(2LL, a3->HighPart, a3->LowPart, a2, *(_QWORD *)(a1 + 16));
    v17 = *(_QWORD *)(a1 + 16);
    LowPart = a3->LowPart;
    HighPart = a3->HighPart;
    WdLogGlobalForLineNumber = 2794;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"WriteVirtualizedInterrupt called for non GPUP vGPU. Luid: %d %d vGPU Type: %d Adapter: %d",
      HighPart,
      LowPart,
      v8,
      v17,
      0LL);
    return 3221225485LL;
  }
  else
  {
    VirtualGpuManager = ADAPTER_RENDER::GetVirtualGpuManager(a1, 0LL, a3, a4);
    DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
      (DXGAUTOPUSHLOCKSHARED *)v19,
      (struct _KTHREAD **)(VirtualGpuManager + 40));
    VirtualGpuByLuid = ADAPTER_RENDER::FindVirtualGpuByLuid(a1, 0, a3);
    if ( VirtualGpuByLuid )
    {
      *a5 = *((_DWORD *)VirtualGpuByLuid + 6);
      v12 = (*(__int64 (__fastcall **)(struct DXGK_VIRTUAL_GPU *, __int64))(*(_QWORD *)VirtualGpuByLuid + 272LL))(
              VirtualGpuByLuid,
              a4);
    }
    else
    {
      WdLogSingleEntry4(2LL, a3->HighPart, a3->LowPart, 0LL, *(_QWORD *)(a1 + 16));
      v18 = *(_QWORD *)(a1 + 16);
      v16 = a3->LowPart;
      v14 = a3->HighPart;
      WdLogGlobalForLineNumber = 2806;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid virtual GPU LUID: %d %d vGPU Type: %d Adapter: %d",
        v14,
        v16,
        0LL,
        v18,
        0LL);
      v12 = -1073741811;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19);
    return v12;
  }
}
