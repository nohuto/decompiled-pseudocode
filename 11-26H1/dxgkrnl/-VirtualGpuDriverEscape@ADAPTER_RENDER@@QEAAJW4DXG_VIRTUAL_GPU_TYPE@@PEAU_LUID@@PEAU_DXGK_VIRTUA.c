/*
 * XREFs of ?VirtualGpuDriverEscape@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@PEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z @ 0x140427340
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1403D4AF0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z @ 0x140193C68 (-FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUI.c)
 */

__int64 __fastcall ADAPTER_RENDER::VirtualGpuDriverEscape(__int64 a1, int a2, struct _LUID *a3, _DWORD *a4)
{
  struct DXGK_VIRTUAL_GPU *VirtualGpuByLuid; // rax

  VirtualGpuByLuid = ADAPTER_RENDER::FindVirtualGpuByLuid(a1, a2, a3);
  if ( VirtualGpuByLuid )
  {
    *a4 = *((_DWORD *)VirtualGpuByLuid + 6);
    return (*(__int64 (__fastcall **)(struct DXGK_VIRTUAL_GPU *, _DWORD *))(*(_QWORD *)VirtualGpuByLuid + 40LL))(
             VirtualGpuByLuid,
             a4);
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2302;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Partition is not found", 2302LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
}
