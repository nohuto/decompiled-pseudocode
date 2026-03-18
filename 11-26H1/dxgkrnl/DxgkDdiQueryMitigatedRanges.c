/*
 * XREFs of DxgkDdiQueryMitigatedRanges @ 0x1402178F8
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1403D4AF0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x14005ED50 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?QueryMitigatedRanges@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_QUERYMITIGATEDRANGES@@@Z @ 0x1402156DC (-QueryMitigatedRanges@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_QUERYMITIGATEDRA.c)
 */

__int64 __fastcall DxgkDdiQueryMitigatedRanges(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 MitigatedRanges; // rbp
  unsigned __int64 v7; // r14
  __int64 v8; // rdi
  unsigned int v10; // [rsp+28h] [rbp-30h]
  int v11; // [rsp+30h] [rbp-28h]

  MitigatedRanges = (int)ADAPTER_RENDER::QueryMitigatedRanges(a1[396], a2, (unsigned int *)a3, a4);
  if ( bTracingEnabled )
  {
    v11 = *(_DWORD *)(a3 + 4);
    v10 = *(_DWORD *)a3;
    VgpuTrace(1, MitigatedRanges, a1, L"DxgkDdiQueryMitigatedRanges", (wchar_t *)L"%d %d", v10, v11);
    DxgkLogInternalTriageEvent(
      (__int64)a1,
      196615,
      *(_DWORD *)a3,
      (__int64)L"Queried %1 ranges to mitigate on BAR %2, returning %3",
      *(unsigned int *)(a3 + 8),
      *(unsigned int *)(a3 + 4),
      MitigatedRanges,
      0LL,
      0LL);
    v7 = 0LL;
    if ( *(_DWORD *)(a3 + 8) )
    {
      v8 = 0LL;
      do
      {
        DxgkLogInternalTriageEvent(
          (__int64)a1,
          196615,
          *(_DWORD *)a3,
          (__int64)L"Mitigating range starting at base page %1 and extending %2 page(s)",
          *(_QWORD *)(v8 + *(_QWORD *)(a3 + 16)),
          *(unsigned int *)(v8 + *(_QWORD *)(a3 + 16) + 8),
          0LL,
          0LL,
          0LL);
        v8 += 16LL;
        ++v7;
      }
      while ( v7 < *(unsigned int *)(a3 + 8) );
    }
  }
  return (unsigned int)MitigatedRanges;
}
