/*
 * XREFs of ?UpdateSwapChainTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXW4SwapChainStat@CCompositionSurfaceInfo@@_N@Z @ 0x1801BB0A0
 * Callers:
 *     ?TraceSwapChainTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXXZ @ 0x18012BF80 (-TraceSwapChainTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXXZ.c)
 *     ?UpdateSwapChainTelemetry@CGlobalCompositionSurfaceInfo@@UEAAXW4SwapChainStat@CCompositionSurfaceInfo@@_N@Z @ 0x1801BB090 (-UpdateSwapChainTelemetry@CGlobalCompositionSurfaceInfo@@UEAAXW4SwapChainStat@CCompositionSurfac.c)
 * Callees:
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x180046630 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::UpdateSwapChainTelemetry(__int64 a1, int a2, char a3)
{
  __int64 v4; // rsi
  unsigned __int64 FrameTargetTime; // rax
  __int64 v7; // rcx

  v4 = a2;
  if ( *(_QWORD *)(a1 + 288) )
  {
    FrameTargetTime = CComposition::GetFrameTargetTime(g_pComposition);
    v7 = 16 * (v4 + 14);
    if ( a3 )
      *(_QWORD *)(v7 + a1) = FrameTargetTime;
    else
      *(_QWORD *)(16 * v4 + a1 + 232) += (FrameTargetTime - *(_QWORD *)(v7 + a1)) / (g_qpcFrequency.QuadPart / 1000);
  }
}
