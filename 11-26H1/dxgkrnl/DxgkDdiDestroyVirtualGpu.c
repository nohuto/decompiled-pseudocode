/*
 * XREFs of DxgkDdiDestroyVirtualGpu @ 0x140216D74
 * Callers:
 *     DpiFdoDispatchCleanupAndClose @ 0x14030DF00 (DpiFdoDispatchCleanupAndClose.c)
 *     DpiFdoDispatchIoctl @ 0x1403D4AF0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x14005ED50 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@E@Z @ 0x140213EB4 (-DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDdiDestroyVirtualGpu(_QWORD *a1, unsigned int a2, unsigned int *a3, char a4)
{
  int v8; // ebx
  __int64 v10; // [rsp+28h] [rbp-30h]

  if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 305637) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 387;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Attempt to delete a vGPU while KSR prepared is not supported",
      387LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v8 = -1073741637;
  }
  else if ( !a4 || (*((_DWORD *)DXGPROCESS::GetCurrent() + 102) & 0x40) != 0 )
  {
    v8 = ADAPTER_RENDER::DestroyVirtualGpu(a1[396], a2, a3, a4);
  }
  else
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 399;
    v8 = -1073741811;
  }
  if ( bTracingEnabled )
  {
    LODWORD(v10) = *a3;
    VgpuTrace(1, v8, a1, L"DxgkDdiDestroyVirtualGpu", (wchar_t *)L"%d", v10);
    DxgkLogInternalTriageEvent((__int64)a1, 196609, *a3, (__int64)L"Destroying vGPU returns %1", v8, 0LL, 0LL, 0LL, 0LL);
  }
  return (unsigned int)v8;
}
