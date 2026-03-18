/*
 * XREFs of ?UpdateInterruptMappings@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@KPEAU_FIOV_MSI@@2@Z @ 0x14021669C
 * Callers:
 *     DxgkUpdateInterruptMappings @ 0x1402189F8 (DxgkUpdateInterruptMappings.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z @ 0x140193C68 (-FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUI.c)
 *     ?GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z @ 0x1403F36A0 (-GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::UpdateInterruptMappings(
        __int64 a1,
        int a2,
        struct _LUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v6; // ebx
  __int64 v9; // rbx
  __int64 VirtualGpuManager; // rax
  struct DXGK_VIRTUAL_GPU *VirtualGpuByLuid; // rax
  unsigned int v13; // ebx
  __int64 HighPart; // [rsp+20h] [rbp-58h]
  __int64 v15; // [rsp+20h] [rbp-58h]
  __int64 LowPart; // [rsp+28h] [rbp-50h]
  __int64 v17; // [rsp+28h] [rbp-50h]
  __int64 v18; // [rsp+38h] [rbp-40h]
  __int64 v19; // [rsp+38h] [rbp-40h]
  _BYTE v20[32]; // [rsp+50h] [rbp-28h] BYREF

  v6 = a4;
  if ( a2 )
  {
    v9 = a2;
    WdLogSingleEntry4(2LL, a3->HighPart, a3->LowPart, a2, *(_QWORD *)(a1 + 16));
    v18 = *(_QWORD *)(a1 + 16);
    LowPart = a3->LowPart;
    HighPart = a3->HighPart;
    WdLogGlobalForLineNumber = 2761;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"UpdateInterruptMappings called for non GPUP vGPU. Luid: %d %d vGPU Type: %d Adapter: %d",
      HighPart,
      LowPart,
      v9,
      v18,
      0LL);
    return 3221225485LL;
  }
  else
  {
    VirtualGpuManager = ADAPTER_RENDER::GetVirtualGpuManager(a1, 0LL, a3, a4);
    DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
      (DXGAUTOPUSHLOCKSHARED *)v20,
      (struct _KTHREAD **)(VirtualGpuManager + 40));
    VirtualGpuByLuid = ADAPTER_RENDER::FindVirtualGpuByLuid(a1, 0, a3);
    if ( VirtualGpuByLuid )
    {
      v13 = (*(__int64 (__fastcall **)(struct DXGK_VIRTUAL_GPU *, _QWORD, __int64, __int64))(*(_QWORD *)VirtualGpuByLuid
                                                                                           + 264LL))(
              VirtualGpuByLuid,
              v6,
              a5,
              a6);
    }
    else
    {
      WdLogSingleEntry4(2LL, a3->HighPart, a3->LowPart, 0LL, *(_QWORD *)(a1 + 16));
      v19 = *(_QWORD *)(a1 + 16);
      v17 = a3->LowPart;
      v15 = a3->HighPart;
      WdLogGlobalForLineNumber = 2773;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid virtual GPU LUID: %d %d vGPU Type: %d Adapter: %d",
        v15,
        v17,
        0LL,
        v19,
        0LL);
      v13 = -1073741811;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20);
    return v13;
  }
}
