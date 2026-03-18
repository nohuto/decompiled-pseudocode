/*
 * XREFs of DxgkDdiGetMmioRangeCount @ 0x1402171F8
 * Callers:
 *     DpiIovGetMmioRangeCount @ 0x14024FE20 (DpiIovGetMmioRangeCount.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x14005ED50 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?GetMmioRangeCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETMMIORANGECOUNT@@@Z @ 0x140214920 (-GetMmioRangeCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETMMIORANGECOUNT@@.c)
 */

__int64 __fastcall DxgkDdiGetMmioRangeCount(_QWORD *a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  __int64 MmioRangeCount; // rbx
  unsigned __int64 v7; // rsi
  unsigned int *v8; // r14
  unsigned int v10; // [rsp+28h] [rbp-40h]

  MmioRangeCount = (int)ADAPTER_RENDER::GetMmioRangeCount(a1[396], a2, a3, a4);
  if ( bTracingEnabled )
  {
    v10 = *a3;
    VgpuTrace(1, MmioRangeCount, a1, L"DxgkDdiGetMmioRangeCount", (wchar_t *)L"%d", v10);
    v7 = 0LL;
    v8 = a3 + 1;
    do
      DxgkLogInternalTriageEvent(
        (__int64)a1,
        196616,
        *a3,
        (__int64)L"The driver has reported that BAR %1 has %2 MMIO ranges, returning %3",
        v7++,
        *v8++,
        MmioRangeCount,
        0LL,
        0LL);
    while ( v7 < 6 );
  }
  return (unsigned int)MmioRangeCount;
}
