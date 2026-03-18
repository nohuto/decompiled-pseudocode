/*
 * XREFs of ?EndLiveMigration@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z @ 0x140214420
 * Callers:
 *     DxgkDdiEndLiveMigration @ 0x140216EE8 (DxgkDdiEndLiveMigration.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z @ 0x140193C68 (-FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUI.c)
 *     ?GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z @ 0x1403F36A0 (-GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::EndLiveMigration(__int64 a1, int a2, struct _LUID *a3, __int64 a4)
{
  __int64 v6; // rbx
  __int64 VirtualGpuManager; // rax
  struct DXGK_VIRTUAL_GPU *VirtualGpuByLuid; // rax
  unsigned int *v10; // rbx
  unsigned int v11; // ebx
  __int64 HighPart; // [rsp+20h] [rbp-68h]
  __int64 v13; // [rsp+20h] [rbp-68h]
  __int64 LowPart; // [rsp+28h] [rbp-60h]
  __int64 v15; // [rsp+28h] [rbp-60h]
  __int64 v16; // [rsp+38h] [rbp-50h]
  __int64 v17; // [rsp+38h] [rbp-50h]
  _BYTE v18[24]; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v19[24]; // [rsp+68h] [rbp-20h] BYREF

  if ( a2 )
  {
    v6 = a2;
    WdLogSingleEntry4(2LL, a3->HighPart, a3->LowPart, a2, *(_QWORD *)(a1 + 16));
    v16 = *(_QWORD *)(a1 + 16);
    LowPart = a3->LowPart;
    HighPart = a3->HighPart;
    WdLogGlobalForLineNumber = 2718;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"EndLiveMigration called for non GPUP vGPU. Luid: %d %d vGPU Type: %d Adapter: %d",
      HighPart,
      LowPart,
      v6,
      v16,
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
    v10 = (unsigned int *)VirtualGpuByLuid;
    if ( VirtualGpuByLuid )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v18,
        (struct _KTHREAD **)VirtualGpuByLuid + 25);
      v11 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)v10 + 256LL))(v10, v10[6]);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v18);
    }
    else
    {
      WdLogSingleEntry4(2LL, a3->HighPart, a3->LowPart, 0LL, *(_QWORD *)(a1 + 16));
      v17 = *(_QWORD *)(a1 + 16);
      v15 = a3->LowPart;
      v13 = a3->HighPart;
      WdLogGlobalForLineNumber = 2732;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid virtual GPU LUID: %d %d vGPU Type: %d Adapter: %d",
        v13,
        v15,
        0LL,
        v17,
        0LL);
      v11 = -1073741811;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19);
    return v11;
  }
}
