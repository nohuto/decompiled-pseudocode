/*
 * XREFs of DxgkDdiSetVirtualGpuVmBus @ 0x140218380
 * Callers:
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x14006B414 (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     ?DpiSetPartitionFlexIovVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1400861A0 (-DpiSetPartitionFlexIovVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x14005ED50 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?SetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@PEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x140216608 (-SetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@PEAU_DXGKARG_SETVIRT.c)
 */

__int64 __fastcall DxgkDdiSetVirtualGpuVmBus(_QWORD *a1, int a2, struct _LUID *a3, int *a4)
{
  __int64 v6; // rbx
  int v8; // [rsp+28h] [rbp-30h]

  v6 = (int)ADAPTER_RENDER::SetVirtualGpuVmBus(a1[396], a2, a3, (__int64)a4);
  if ( bTracingEnabled )
  {
    v8 = *a4;
    VgpuTrace(1, v6, a1, L"DxgkDdiSetVirtualGpuVmBus", (wchar_t *)L"%d", v8);
    DxgkLogInternalTriageEvent(
      (__int64)a1,
      196613,
      *a4,
      (__int64)L"VM initialization is configuring assignment of vGPU, returning %1",
      v6,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v6;
}
