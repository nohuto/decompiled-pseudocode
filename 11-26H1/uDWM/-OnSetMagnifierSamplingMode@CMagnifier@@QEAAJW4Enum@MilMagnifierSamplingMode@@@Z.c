/*
 * XREFs of ?OnSetMagnifierSamplingMode@CMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@Z @ 0x1800BA1B8
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18007A548 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetResampleMode@CMagnifierRenderTargetProxy@@QEAAJW4Enum@CompositionResampleMode@@@Z @ 0x1800BB718 (-SetResampleMode@CMagnifierRenderTargetProxy@@QEAAJW4Enum@CompositionResampleMode@@@Z.c)
 */

__int64 __fastcall CMagnifier::OnSetMagnifierSamplingMode(__int64 a1, int a2)
{
  __int64 v2; // rcx
  __int64 v4; // rdx
  int v5; // eax
  unsigned int v6; // ebx

  v2 = *(_QWORD *)(a1 + 24);
  v4 = 2LL;
  if ( a2 != 1 )
    v4 = 0LL;
  v5 = CMagnifierRenderTargetProxy::SetResampleMode(v2, v4);
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x19Au, 0LL);
  return v6;
}
