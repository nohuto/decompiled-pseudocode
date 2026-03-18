/*
 * XREFs of DxgkDdiQueryMitigatedRangeCount @ 0x14021782C
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1403D4AF0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x14005ED50 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?QueryMitigatedRangeCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_QUERYMITIGATEDRANGECOUNT@@@Z @ 0x14021560C (-QueryMitigatedRangeCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_QUERYMITIGAT.c)
 */

__int64 __fastcall DxgkDdiQueryMitigatedRangeCount(_QWORD *a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  unsigned int *v6; // rsi
  unsigned __int64 i; // rdi
  unsigned int v9; // [rsp+28h] [rbp-30h]

  ADAPTER_RENDER::QueryMitigatedRangeCount(a1[396], a2, a3, a4);
  if ( bTracingEnabled )
  {
    v6 = a3 + 1;
    v9 = *a3;
    VgpuTrace(1, 0, a1, L"DxgkDdiQueryMitigatedRangeCount", (wchar_t *)L"%d %d", v9, a3 + 1);
    for ( i = 0LL; i < 6; ++i )
      DxgkLogInternalTriageEvent(
        (__int64)a1,
        196614,
        *a3,
        (__int64)L"BAR %1 requests to have %2 mitigated ranges",
        i,
        *v6++,
        0LL,
        0LL,
        0LL);
  }
  return 0LL;
}
