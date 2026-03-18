/*
 * XREFs of ?SetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@PEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x140216608
 * Callers:
 *     DxgkDdiSetVirtualGpuVmBus @ 0x140218380 (DxgkDdiSetVirtualGpuVmBus.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z @ 0x140193C68 (-FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUI.c)
 */

__int64 __fastcall ADAPTER_RENDER::SetVirtualGpuVmBus(__int64 a1, int a2, struct _LUID *a3, __int64 a4)
{
  struct DXGK_VIRTUAL_GPU *VirtualGpuByLuid; // rax

  VirtualGpuByLuid = ADAPTER_RENDER::FindVirtualGpuByLuid(a1, a2, a3);
  if ( VirtualGpuByLuid )
    return (*(__int64 (__fastcall **)(struct DXGK_VIRTUAL_GPU *, __int64))(*(_QWORD *)VirtualGpuByLuid + 24LL))(
             VirtualGpuByLuid,
             a4);
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 2286;
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find vGPU by LUID", 2286LL, 0LL, 0LL, 0LL, 0LL);
  return 3221225485LL;
}
