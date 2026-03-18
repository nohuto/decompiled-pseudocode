/*
 * XREFs of DxgkDdiGetMmioRanges @ 0x1402172C8
 * Callers:
 *     DpiIovGetMmioRanges @ 0x14024FF20 (DpiIovGetMmioRanges.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x14005ED50 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?GetMmioRanges@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETMMIORANGES@@@Z @ 0x1402149F0 (-GetMmioRanges@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETMMIORANGES@@@Z.c)
 */

__int64 __fastcall DxgkDdiGetMmioRanges(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rbx
  __int64 MmioRanges; // rbp
  __int64 v8; // rsi
  __int64 v9; // r8
  unsigned int v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+30h] [rbp-28h]

  v6 = 0LL;
  MmioRanges = (int)ADAPTER_RENDER::GetMmioRanges(a1[396], a2, (unsigned int *)a3, a4);
  if ( bTracingEnabled )
  {
    v12 = *(_DWORD *)(a3 + 4);
    v11 = *(_DWORD *)a3;
    VgpuTrace(1, MmioRanges, a1, L"DxgkDdiGetMmioRanges", (wchar_t *)L"%d %d", v11, v12);
    DxgkLogInternalTriageEvent(
      (__int64)a1,
      196617,
      *(_DWORD *)a3,
      (__int64)L"Queried %1 MMIO ranges on BAR %2, returning %3",
      *(unsigned int *)(a3 + 8),
      *(unsigned int *)(a3 + 4),
      MmioRanges,
      0LL,
      0LL);
    if ( *(_DWORD *)(a3 + 8) )
    {
      v8 = 0LL;
      do
      {
        v9 = *(_QWORD *)(a3 + 16);
        DxgkLogInternalTriageEvent(
          (__int64)a1,
          196617,
          *(_DWORD *)a3,
          (__int64)L"MMIO range starting at base page %1 (with physical page %2 and resource %3) has intercept flags %4 (r"
                    "ead 0x1, write 0x2) and extending %5 page(s)",
          *(_QWORD *)(v8 + v9),
          *(_QWORD *)(v8 + v9 + 8),
          *(unsigned __int8 *)(v8 + v9 + 16),
          *(unsigned __int8 *)(v8 + v9 + 17) | (unsigned __int64)(*(_BYTE *)(v8 + v9 + 18) != 0 ? 2 : 0),
          *(unsigned int *)(v8 + v9 + 20));
        v8 += 24LL;
        ++v6;
      }
      while ( v6 < *(unsigned int *)(a3 + 8) );
    }
  }
  return (unsigned int)MmioRanges;
}
