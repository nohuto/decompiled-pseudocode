/*
 * XREFs of ?GetDeviceLocation@ADAPTER_RENDER@@QEAAXW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETDEVICELOCATION@@@Z @ 0x140214710
 * Callers:
 *     DxgkDdiGetDeviceLocation @ 0x140216FA0 (DxgkDdiGetDeviceLocation.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z @ 0x1403F36A0 (-GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z.c)
 *     ?GetVirtualGpuByIndex@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@I@Z @ 0x1403F36C0 (-GetVirtualGpuByIndex@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@I@Z.c)
 */

void __fastcall ADAPTER_RENDER::GetDeviceLocation(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 VirtualGpuManager; // rax
  __int64 VirtualGpuByIndex; // rax
  __int64 v9; // [rsp+20h] [rbp-58h]
  _BYTE v10[32]; // [rsp+50h] [rbp-28h] BYREF

  v5 = a2;
  VirtualGpuManager = ADAPTER_RENDER::GetVirtualGpuManager(a1, a2, a3, a4);
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v10,
    (struct _KTHREAD **)(VirtualGpuManager + 40));
  VirtualGpuByIndex = ADAPTER_RENDER::GetVirtualGpuByIndex(a1, v5, *a3);
  if ( VirtualGpuByIndex )
  {
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)VirtualGpuByIndex + 88LL))(VirtualGpuByIndex, a3);
  }
  else
  {
    WdLogSingleEntry1(2LL);
    v9 = *a3;
    WdLogGlobalForLineNumber = 1644;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid virtual GPU index: %I64n", v9, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
}
