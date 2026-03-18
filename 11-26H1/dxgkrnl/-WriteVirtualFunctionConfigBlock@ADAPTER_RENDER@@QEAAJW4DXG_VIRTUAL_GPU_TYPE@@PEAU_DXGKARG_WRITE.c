/*
 * XREFs of ?WriteVirtualFunctionConfigBlock@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_WRITEVIRTUALFUNCTIONCONFIGBLOCK@@@Z @ 0x1402168EC
 * Callers:
 *     DxgkDdiWriteVirtualFunctionConfigBlock @ 0x1402184E4 (DxgkDdiWriteVirtualFunctionConfigBlock.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z @ 0x1403F36A0 (-GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z.c)
 *     ?GetVirtualGpuByIndex@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@I@Z @ 0x1403F36C0 (-GetVirtualGpuByIndex@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@I@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::WriteVirtualFunctionConfigBlock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 VirtualGpuManager; // rax
  __int64 VirtualGpuByIndex; // rax
  unsigned int v9; // ebx
  __int64 v11; // [rsp+20h] [rbp-58h]
  _BYTE v12[32]; // [rsp+50h] [rbp-28h] BYREF

  v5 = a2;
  VirtualGpuManager = ADAPTER_RENDER::GetVirtualGpuManager(a1, a2, a3, a4);
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v12,
    (struct _KTHREAD **)(VirtualGpuManager + 40));
  VirtualGpuByIndex = ADAPTER_RENDER::GetVirtualGpuByIndex(a1, v5, *(unsigned int *)(a3 + 8));
  if ( VirtualGpuByIndex )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)VirtualGpuByIndex + 64LL))(VirtualGpuByIndex, a3);
  }
  else
  {
    WdLogSingleEntry1(2LL);
    v11 = *(unsigned int *)(a3 + 8);
    WdLogGlobalForLineNumber = 1588;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid virtual GPU index: %I64n", v11, 0LL, 0LL, 0LL, 0LL);
    v9 = -1073741811;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
  return v9;
}
