/*
 * XREFs of DxgkDdiQueryProbedBars @ 0x140217AA4
 * Callers:
 *     ?DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z @ 0x140092B30 (-DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x14005ED50 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?QueryProbedBars@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_QUERYPROBEDBARS@@@Z @ 0x1402157AC (-QueryProbedBars@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_QUERYPROBEDBARS@@@Z.c)
 */

__int64 __fastcall DxgkDdiQueryProbedBars(_QWORD *a1, __int64 a2, unsigned __int16 a3, __int64 a4)
{
  int v4; // ebp
  __int64 v6; // rcx
  int ProbedBars; // eax
  __int64 v8; // rdi
  unsigned __int64 i; // rbx
  int v11; // [rsp+28h] [rbp-50h]
  int v12; // [rsp+30h] [rbp-48h]
  int v13; // [rsp+38h] [rbp-40h]
  int v14; // [rsp+40h] [rbp-38h]
  int v15; // [rsp+48h] [rbp-30h]
  int v16; // [rsp+50h] [rbp-28h]
  int v17; // [rsp+58h] [rbp-20h]
  __int64 v18; // [rsp+60h] [rbp-18h] BYREF
  int *v19; // [rsp+68h] [rbp-10h]

  v4 = a3;
  v6 = a1[396];
  v18 = a3;
  v19 = (int *)a4;
  ProbedBars = ADAPTER_RENDER::QueryProbedBars(v6, a2, (unsigned int *)&v18, a4);
  v8 = ProbedBars;
  if ( bTracingEnabled )
  {
    v17 = v19[5];
    v16 = v19[4];
    v15 = v19[3];
    v14 = v19[2];
    v13 = v19[1];
    v12 = *v19;
    v11 = v4;
    VgpuTrace(
      1,
      ProbedBars,
      a1,
      L"DxgkDdiQueryProbedBars",
      (wchar_t *)L"%d - %d %d %d %d %d %d",
      v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    for ( i = 0LL; i < 6; ++i )
      DxgkLogInternalTriageEvent(
        (__int64)a1,
        196618,
        v4,
        (__int64)L"Querying probed BAR %1 gives base register value %2 with status %3",
        i,
        (unsigned int)v19[i],
        v8,
        0LL,
        0LL);
  }
  return (unsigned int)v8;
}
